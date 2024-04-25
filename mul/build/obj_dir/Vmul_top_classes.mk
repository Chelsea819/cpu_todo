# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vmul_top.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vmul_top \
	Vmul_top___024root__DepSet_h460fa5f7__0 \
	Vmul_top___024root__DepSet_hf84c82e0__0 \
	Vmul_top___024root__DepSet_hf84c82e0__1 \
	Vmul_top___024root__DepSet_hf84c82e0__2 \
	Vmul_top___024root__DepSet_hf84c82e0__3 \
	Vmul_top___024root__DepSet_hf84c82e0__4 \
	Vmul_top___024root__DepSet_hf84c82e0__5 \
	Vmul_top___024root__DepSet_hf84c82e0__6 \
	Vmul_top___024root__DepSet_hf84c82e0__7 \
	Vmul_top___024root__DepSet_hf84c82e0__8 \
	Vmul_top___024root__DepSet_hf84c82e0__9 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vmul_top___024root__Slow \
	Vmul_top___024root__DepSet_h460fa5f7__0__Slow \
	Vmul_top___024root__DepSet_hf84c82e0__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vmul_top__Trace__0 \
	Vmul_top__Trace__1 \
	Vmul_top__Trace__2 \
	Vmul_top__Trace__3 \
	Vmul_top__Trace__4 \
	Vmul_top__Trace__5 \
	Vmul_top__Trace__6 \
	Vmul_top__Trace__7 \
	Vmul_top__Trace__8 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vmul_top__Syms \
	Vmul_top__Trace__0__Slow \
	Vmul_top__Trace__1__Slow \
	Vmul_top__Trace__2__Slow \
	Vmul_top__Trace__3__Slow \
	Vmul_top__Trace__4__Slow \
	Vmul_top__Trace__5__Slow \
	Vmul_top__Trace__6__Slow \
	Vmul_top__Trace__7__Slow \
	Vmul_top__Trace__8__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
