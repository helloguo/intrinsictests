# intrinsictests
micro benchmarks to test SSE, SSE2, SSE3, SSSE3, SSE4.1 intrinsic functions on x86 machines.

* `cpptests` includes tests calling c++ intrinsic functions. It may not work if compiling with advanced optimization flags because the redundant code could be optimized away.

* `asmtests` includes tests calling assembly languages. These tests need you to write a `main` function or driver to call them.
* `simpletests` is a sample which calls the asm tests.