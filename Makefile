BUILD_DIR ?= $(WORK_DIR)/build
TOPNAME = Brent_Kung_Adder
EXE = $(BUILD_DIR)/$(TOPNAME)
WAVE = waveform.vcd

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --cc --build -j 0  \
				-O3 --x-assign fast --x-initial fast \
				--noassert --trace -I./vsrc/
WORK_DIR  = $(shell pwd)

OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

all:default

default: $(BIN)


$(shell mkdir -p $(BUILD_DIR))


# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cpp" -or -name "*.cc")
SRCS = $(CXXSRC) $(CSRCS)

# rules for verilator
CFLAGS +=  -DTOP_NAME="\"V$(TOPNAME)\"" #-D__GUEST_ISA__=$(GUEST_ISA)
LDFLAGS += -lreadline -ldl  -pie $(LIBS) #-fsanitize=address


$(BIN):$(SRCS) $(VSRCS) 
# make -C ./asm all 
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ $(addprefix -CFLAGS , $(CFLAGS)) \
		$(addprefix -LDFLAGS , $(LDFLAGS)) \
		$(addprefix -CFLAGS , $(CXXFLAGS))	\
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))
	
$(shell mkdir -p $(BUILD_DIR))

run:$(BIN)
	$(EXE)


.PHONY:wave clean sim default all run $(DIFF_REF_SO)

wave:
	gtkwave $(WAVE)

clean:
	$(RM) -r $(BUILD_DIR) $(WAVE) $(EXE)

