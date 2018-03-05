// This file is generated from testsgenerator.py
// The first loop runs the intrinsic for 1000000 * 5 times. Assume it takes time1
// The second loop runs the intrinsic for 1000000 * 105 times. Assume it takes time2
// The return value is the execution time for 1000000 * 100 times, which equals (time2 - time1)
#include <time.h>
#include <iostream>

void __declspec(noinline) __cdecl run_cvtps2dq_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_cvtps2dq_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
		cvtps2dq xmm1, xmm2
	};
}
void  test_cvtps2dq_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_cvtps2dq_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_cvtps2dq_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "cvtps2dq takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_cvttps2dq_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_cvttps2dq_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
		cvttps2dq xmm1, xmm2
	};
}
void  test_cvttps2dq_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_cvttps2dq_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_cvttps2dq_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "cvttps2dq takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_movd_xmm1eax_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
	};
}
void __declspec(noinline) __cdecl run_movd_xmm1eax_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
		movd xmm1, eax
	};
}
void  test_movd_xmm1eax()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_movd_xmm1eax_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_movd_xmm1eax_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "movd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_movd_eaxxmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
	};
}
void __declspec(noinline) __cdecl run_movd_eaxxmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
		movd eax, xmm2
	};
}
void  test_movd_eaxxmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_movd_eaxxmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_movd_eaxxmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "movd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_movdqa_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_movdqa_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
		movdqa xmm1, xmm2
	};
}
void  test_movdqa_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_movdqa_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_movdqa_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "movdqa takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_movdqu_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_movdqu_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
		movdqu xmm1, xmm2
	};
}
void  test_movdqu_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_movdqu_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_movdqu_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "movdqu takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_movq_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_movq_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
		movq xmm1, xmm2
	};
}
void  test_movq_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_movq_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_movq_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "movq takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_packsswb_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_packsswb_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
		packsswb xmm1, xmm2
	};
}
void  test_packsswb_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_packsswb_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_packsswb_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "packsswb takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_packssdw_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_packssdw_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
		packssdw xmm1, xmm2
	};
}
void  test_packssdw_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_packssdw_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_packssdw_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "packssdw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_packuswb_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_packuswb_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
		packuswb xmm1, xmm2
	};
}
void  test_packuswb_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_packuswb_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_packuswb_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "packuswb takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_paddb_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_paddb_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
		paddb xmm1, xmm2
	};
}
void  test_paddb_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_paddb_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_paddb_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "paddb takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_paddw_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_paddw_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
		paddw xmm1, xmm2
	};
}
void  test_paddw_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_paddw_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_paddw_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "paddw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_paddd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_paddd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
		paddd xmm1, xmm2
	};
}
void  test_paddd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_paddd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_paddd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "paddd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_paddsb_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_paddsb_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
		paddsb xmm1, xmm2
	};
}
void  test_paddsb_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_paddsb_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_paddsb_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "paddsb takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_paddsw_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_paddsw_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
		paddsw xmm1, xmm2
	};
}
void  test_paddsw_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_paddsw_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_paddsw_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "paddsw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_paddusb_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_paddusb_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
		paddusb xmm1, xmm2
	};
}
void  test_paddusb_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_paddusb_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_paddusb_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "paddusb takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_paddusw_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_paddusw_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
		paddusw xmm1, xmm2
	};
}
void  test_paddusw_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_paddusw_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_paddusw_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "paddusw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_paddq_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_paddq_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
		paddq xmm1, xmm2
	};
}
void  test_paddq_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_paddq_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_paddq_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "paddq takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_psubq_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_psubq_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
		psubq xmm1, xmm2
	};
}
void  test_psubq_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psubq_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psubq_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "psubq takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pand_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_pand_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
		pand xmm1, xmm2
	};
}
void  test_pand_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pand_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pand_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pand takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pandn_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_pandn_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
		pandn xmm1, xmm2
	};
}
void  test_pandn_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pandn_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pandn_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pandn takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pavgb_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_pavgb_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
		pavgb xmm1, xmm2
	};
}
void  test_pavgb_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pavgb_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pavgb_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pavgb takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pavgw_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_pavgw_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
		pavgw xmm1, xmm2
	};
}
void  test_pavgw_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pavgw_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pavgw_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pavgw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pcmpeqb_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_pcmpeqb_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
		pcmpeqb xmm1, xmm2
	};
}
void  test_pcmpeqb_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pcmpeqb_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pcmpeqb_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pcmpeqb takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pcmpeqd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_pcmpeqd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
		pcmpeqd xmm1, xmm2
	};
}
void  test_pcmpeqd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pcmpeqd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pcmpeqd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pcmpeqd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pcmpeqw_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_pcmpeqw_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
		pcmpeqw xmm1, xmm2
	};
}
void  test_pcmpeqw_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pcmpeqw_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pcmpeqw_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pcmpeqw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pcmpgtb_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_pcmpgtb_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
		pcmpgtb xmm1, xmm2
	};
}
void  test_pcmpgtb_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pcmpgtb_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pcmpgtb_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pcmpgtb takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pcmpgtd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_pcmpgtd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
		pcmpgtd xmm1, xmm2
	};
}
void  test_pcmpgtd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pcmpgtd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pcmpgtd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pcmpgtd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pcmpgtw_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_pcmpgtw_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
		pcmpgtw xmm1, xmm2
	};
}
void  test_pcmpgtw_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pcmpgtw_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pcmpgtw_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pcmpgtw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pextrw_eaxxmm11_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
	};
}
void __declspec(noinline) __cdecl run_pextrw_eaxxmm11_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
		pextrw eax, xmm1, 1
	};
}
void  test_pextrw_eaxxmm11()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pextrw_eaxxmm11_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pextrw_eaxxmm11_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pextrw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pinsrw_xmm1eax1_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
	};
}
void __declspec(noinline) __cdecl run_pinsrw_xmm1eax1_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
		pinsrw xmm1, eax, 1
	};
}
void  test_pinsrw_xmm1eax1()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pinsrw_xmm1eax1_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pinsrw_xmm1eax1_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pinsrw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmaddwd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_pmaddwd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
		pmaddwd xmm1, xmm2
	};
}
void  test_pmaddwd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pmaddwd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pmaddwd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pmaddwd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmaxsw_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_pmaxsw_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
		pmaxsw xmm1, xmm2
	};
}
void  test_pmaxsw_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pmaxsw_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pmaxsw_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pmaxsw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmaxub_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_pmaxub_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
		pmaxub xmm1, xmm2
	};
}
void  test_pmaxub_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pmaxub_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pmaxub_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pmaxub takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pminsw_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_pminsw_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
		pminsw xmm1, xmm2
	};
}
void  test_pminsw_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pminsw_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pminsw_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pminsw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pminub_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_pminub_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
		pminub xmm1, xmm2
	};
}
void  test_pminub_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pminub_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pminub_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pminub takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmovmskb_eaxxmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
	};
}
void __declspec(noinline) __cdecl run_pmovmskb_eaxxmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
		pmovmskb eax, xmm2
	};
}
void  test_pmovmskb_eaxxmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pmovmskb_eaxxmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pmovmskb_eaxxmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pmovmskb takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmulhuw_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_pmulhuw_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
		pmulhuw xmm1, xmm2
	};
}
void  test_pmulhuw_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pmulhuw_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pmulhuw_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pmulhuw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmulhw_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_pmulhw_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
		pmulhw xmm1, xmm2
	};
}
void  test_pmulhw_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pmulhw_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pmulhw_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pmulhw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmullw_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_pmullw_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
		pmullw xmm1, xmm2
	};
}
void  test_pmullw_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pmullw_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pmullw_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pmullw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmuludq_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_pmuludq_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
		pmuludq xmm1, xmm2
	};
}
void  test_pmuludq_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pmuludq_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pmuludq_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pmuludq takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_por_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_por_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
		por xmm1, xmm2
	};
}
void  test_por_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_por_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_por_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "por takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_psadbw_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_psadbw_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
		psadbw xmm1, xmm2
	};
}
void  test_psadbw_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psadbw_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psadbw_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "psadbw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pshufd_xmm1xmm11_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
	};
}
void __declspec(noinline) __cdecl run_pshufd_xmm1xmm11_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
		pshufd xmm1, xmm1, 1
	};
}
void  test_pshufd_xmm1xmm11()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pshufd_xmm1xmm11_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pshufd_xmm1xmm11_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pshufd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pshufhw_xmm1xmm11_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
	};
}
void __declspec(noinline) __cdecl run_pshufhw_xmm1xmm11_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
		pshufhw xmm1, xmm1, 1
	};
}
void  test_pshufhw_xmm1xmm11()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pshufhw_xmm1xmm11_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pshufhw_xmm1xmm11_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pshufhw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pshuflw_xmm1xmm11_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
	};
}
void __declspec(noinline) __cdecl run_pshuflw_xmm1xmm11_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
		pshuflw xmm1, xmm1, 1
	};
}
void  test_pshuflw_xmm1xmm11()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pshuflw_xmm1xmm11_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pshuflw_xmm1xmm11_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pshuflw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pslldq_xmm11_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
	};
}
void __declspec(noinline) __cdecl run_pslldq_xmm11_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
		pslldq xmm1, 1
	};
}
void  test_pslldq_xmm11()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pslldq_xmm11_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pslldq_xmm11_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pslldq takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_psllw_xmm11_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
	};
}
void __declspec(noinline) __cdecl run_psllw_xmm11_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
		psllw xmm1, 1
	};
}
void  test_psllw_xmm11()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psllw_xmm11_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psllw_xmm11_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "psllw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pslld_xmm11_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
	};
}
void __declspec(noinline) __cdecl run_pslld_xmm11_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
		pslld xmm1, 1
	};
}
void  test_pslld_xmm11()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pslld_xmm11_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pslld_xmm11_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pslld takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_psllq_xmm11_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
	};
}
void __declspec(noinline) __cdecl run_psllq_xmm11_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
		psllq xmm1, 1
	};
}
void  test_psllq_xmm11()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psllq_xmm11_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psllq_xmm11_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "psllq takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_psll_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_psll_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
		psll xmm1, xmm2
	};
}
void  test_psll_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psll_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psll_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "psll takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_psrl_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_psrl_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
		psrl xmm1, xmm2
	};
}
void  test_psrl_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psrl_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psrl_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "psrl takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_psraw_xmm11_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
	};
}
void __declspec(noinline) __cdecl run_psraw_xmm11_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
		psraw xmm1, 1
	};
}
void  test_psraw_xmm11()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psraw_xmm11_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psraw_xmm11_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "psraw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_psrad_xmm11_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
	};
}
void __declspec(noinline) __cdecl run_psrad_xmm11_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
		psrad xmm1, 1
	};
}
void  test_psrad_xmm11()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psrad_xmm11_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psrad_xmm11_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "psrad takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_psraw_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_psraw_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
		psraw xmm1, xmm2
	};
}
void  test_psraw_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psraw_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psraw_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "psraw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_psrad_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_psrad_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
		psrad xmm1, xmm2
	};
}
void  test_psrad_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psrad_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psrad_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "psrad takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_psrldq_xmm11_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
	};
}
void __declspec(noinline) __cdecl run_psrldq_xmm11_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
		psrldq xmm1, 1
	};
}
void  test_psrldq_xmm11()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psrldq_xmm11_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psrldq_xmm11_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "psrldq takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_psrlw_xmm11_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
	};
}
void __declspec(noinline) __cdecl run_psrlw_xmm11_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
		psrlw xmm1, 1
	};
}
void  test_psrlw_xmm11()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psrlw_xmm11_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psrlw_xmm11_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "psrlw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_psrld_xmm11_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
	};
}
void __declspec(noinline) __cdecl run_psrld_xmm11_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
		psrld xmm1, 1
	};
}
void  test_psrld_xmm11()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psrld_xmm11_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psrld_xmm11_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "psrld takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_psrlq_xmm11_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
	};
}
void __declspec(noinline) __cdecl run_psrlq_xmm11_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
		psrlq xmm1, 1
	};
}
void  test_psrlq_xmm11()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psrlq_xmm11_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psrlq_xmm11_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "psrlq takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_psubb_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_psubb_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
		psubb xmm1, xmm2
	};
}
void  test_psubb_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psubb_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psubb_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "psubb takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_psubw_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_psubw_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
		psubw xmm1, xmm2
	};
}
void  test_psubw_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psubw_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psubw_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "psubw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_psubd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_psubd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
		psubd xmm1, xmm2
	};
}
void  test_psubd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psubd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psubd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "psubd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_psubsb_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_psubsb_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
		psubsb xmm1, xmm2
	};
}
void  test_psubsb_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psubsb_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psubsb_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "psubsb takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_psubsw_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_psubsw_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
		psubsw xmm1, xmm2
	};
}
void  test_psubsw_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psubsw_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psubsw_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "psubsw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_psubusb_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_psubusb_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
		psubusb xmm1, xmm2
	};
}
void  test_psubusb_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psubusb_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psubusb_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "psubusb takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_psubusw_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_psubusw_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
		psubusw xmm1, xmm2
	};
}
void  test_psubusw_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psubusw_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psubusw_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "psubusw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_punpckhbw_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_punpckhbw_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
		punpckhbw xmm1, xmm2
	};
}
void  test_punpckhbw_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_punpckhbw_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_punpckhbw_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "punpckhbw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_punpckhwd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_punpckhwd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
		punpckhwd xmm1, xmm2
	};
}
void  test_punpckhwd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_punpckhwd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_punpckhwd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "punpckhwd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_punpckhdq_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_punpckhdq_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
		punpckhdq xmm1, xmm2
	};
}
void  test_punpckhdq_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_punpckhdq_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_punpckhdq_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "punpckhdq takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_punpckhqdq_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_punpckhqdq_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
		punpckhqdq xmm1, xmm2
	};
}
void  test_punpckhqdq_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_punpckhqdq_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_punpckhqdq_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "punpckhqdq takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_punpcklbw_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_punpcklbw_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
		punpcklbw xmm1, xmm2
	};
}
void  test_punpcklbw_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_punpcklbw_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_punpcklbw_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "punpcklbw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_punpcklwd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_punpcklwd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
		punpcklwd xmm1, xmm2
	};
}
void  test_punpcklwd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_punpcklwd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_punpcklwd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "punpcklwd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_punpckldq_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_punpckldq_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
		punpckldq xmm1, xmm2
	};
}
void  test_punpckldq_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_punpckldq_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_punpckldq_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "punpckldq takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_punpcklqdq_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_punpcklqdq_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
		punpcklqdq xmm1, xmm2
	};
}
void  test_punpcklqdq_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_punpcklqdq_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_punpcklqdq_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "punpcklqdq takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pxor_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_pxor_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
		pxor xmm1, xmm2
	};
}
void  test_pxor_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pxor_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pxor_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pxor takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_addpd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_addpd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
		addpd xmm1, xmm2
	};
}
void  test_addpd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_addpd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_addpd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "addpd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_addsd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_addsd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
		addsd xmm1, xmm2
	};
}
void  test_addsd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_addsd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_addsd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "addsd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_andnpd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_andnpd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
		andnpd xmm1, xmm2
	};
}
void  test_andnpd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_andnpd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_andnpd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "andnpd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_andpd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_andpd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
		andpd xmm1, xmm2
	};
}
void  test_andpd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_andpd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_andpd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "andpd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_cmppd_xmm1xmm11_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
	};
}
void __declspec(noinline) __cdecl run_cmppd_xmm1xmm11_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
		cmppd xmm1, xmm1, 1
	};
}
void  test_cmppd_xmm1xmm11()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_cmppd_xmm1xmm11_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_cmppd_xmm1xmm11_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "cmppd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_cmpsd_xmm1xmm11_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
	};
}
void __declspec(noinline) __cdecl run_cmpsd_xmm1xmm11_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
		cmpsd xmm1, xmm1, 1
	};
}
void  test_cmpsd_xmm1xmm11()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_cmpsd_xmm1xmm11_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_cmpsd_xmm1xmm11_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "cmpsd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_comisd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_comisd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
		comisd xmm1, xmm2
	};
}
void  test_comisd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_comisd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_comisd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "comisd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_cvtdq2pd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_cvtdq2pd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
		cvtdq2pd xmm1, xmm2
	};
}
void  test_cvtdq2pd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_cvtdq2pd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_cvtdq2pd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "cvtdq2pd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_cvtdq2ps_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_cvtdq2ps_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
		cvtdq2ps xmm1, xmm2
	};
}
void  test_cvtdq2ps_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_cvtdq2ps_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_cvtdq2ps_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "cvtdq2ps takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_cvtpd2dq_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_cvtpd2dq_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
		cvtpd2dq xmm1, xmm2
	};
}
void  test_cvtpd2dq_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_cvtpd2dq_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_cvtpd2dq_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "cvtpd2dq takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_cvtpd2ps_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_cvtpd2ps_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
		cvtpd2ps xmm1, xmm2
	};
}
void  test_cvtpd2ps_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_cvtpd2ps_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_cvtpd2ps_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "cvtpd2ps takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_cvtps2pd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_cvtps2pd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
		cvtps2pd xmm1, xmm2
	};
}
void  test_cvtps2pd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_cvtps2pd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_cvtps2pd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "cvtps2pd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_cvtsd2si_eaxxmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
	};
}
void __declspec(noinline) __cdecl run_cvtsd2si_eaxxmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
		cvtsd2si eax, xmm2
	};
}
void  test_cvtsd2si_eaxxmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_cvtsd2si_eaxxmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_cvtsd2si_eaxxmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "cvtsd2si takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_cvttsd2si_eaxxmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
	};
}
void __declspec(noinline) __cdecl run_cvttsd2si_eaxxmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
		cvttsd2si eax, xmm2
	};
}
void  test_cvttsd2si_eaxxmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_cvttsd2si_eaxxmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_cvttsd2si_eaxxmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "cvttsd2si takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_cvtsd2ss_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_cvtsd2ss_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
		cvtsd2ss xmm1, xmm2
	};
}
void  test_cvtsd2ss_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_cvtsd2ss_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_cvtsd2ss_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "cvtsd2ss takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_cvtsi2sd_xmm1eax_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
	};
}
void __declspec(noinline) __cdecl run_cvtsi2sd_xmm1eax_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
		cvtsi2sd xmm1, eax
	};
}
void  test_cvtsi2sd_xmm1eax()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_cvtsi2sd_xmm1eax_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_cvtsi2sd_xmm1eax_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "cvtsi2sd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_cvtss2sd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_cvtss2sd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
		cvtss2sd xmm1, xmm2
	};
}
void  test_cvtss2sd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_cvtss2sd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_cvtss2sd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "cvtss2sd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_cvttpd2dq_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_cvttpd2dq_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
		cvttpd2dq xmm1, xmm2
	};
}
void  test_cvttpd2dq_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_cvttpd2dq_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_cvttpd2dq_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "cvttpd2dq takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_divpd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_divpd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
		divpd xmm1, xmm2
	};
}
void  test_divpd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_divpd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_divpd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "divpd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_divsd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_divsd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
		divsd xmm1, xmm2
	};
}
void  test_divsd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_divsd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_divsd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "divsd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_maxpd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_maxpd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
		maxpd xmm1, xmm2
	};
}
void  test_maxpd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_maxpd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_maxpd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "maxpd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_maxsd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_maxsd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
		maxsd xmm1, xmm2
	};
}
void  test_maxsd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_maxsd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_maxsd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "maxsd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_minpd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_minpd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
		minpd xmm1, xmm2
	};
}
void  test_minpd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_minpd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_minpd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "minpd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_minsd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_minsd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
		minsd xmm1, xmm2
	};
}
void  test_minsd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_minsd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_minsd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "minsd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_movapd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_movapd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
		movapd xmm1, xmm2
	};
}
void  test_movapd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_movapd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_movapd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "movapd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_movmskpd_eaxxmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
	};
}
void __declspec(noinline) __cdecl run_movmskpd_eaxxmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
		movmskpd eax, xmm2
	};
}
void  test_movmskpd_eaxxmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_movmskpd_eaxxmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_movmskpd_eaxxmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "movmskpd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_movsd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_movsd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
		movsd xmm1, xmm2
	};
}
void  test_movsd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_movsd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_movsd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "movsd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_movupd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_movupd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
		movupd xmm1, xmm2
	};
}
void  test_movupd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_movupd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_movupd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "movupd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_mulpd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_mulpd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
		mulpd xmm1, xmm2
	};
}
void  test_mulpd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_mulpd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_mulpd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "mulpd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_mulsd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_mulsd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
		mulsd xmm1, xmm2
	};
}
void  test_mulsd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_mulsd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_mulsd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "mulsd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_orpd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_orpd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
		orpd xmm1, xmm2
	};
}
void  test_orpd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_orpd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_orpd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "orpd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_shufpd_xmm1xmm11_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
	};
}
void __declspec(noinline) __cdecl run_shufpd_xmm1xmm11_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
		shufpd xmm1, xmm1, 1
	};
}
void  test_shufpd_xmm1xmm11()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_shufpd_xmm1xmm11_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_shufpd_xmm1xmm11_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "shufpd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_sqrtpd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_sqrtpd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
		sqrtpd xmm1, xmm2
	};
}
void  test_sqrtpd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_sqrtpd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_sqrtpd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "sqrtpd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_sqrtsd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_sqrtsd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
		sqrtsd xmm1, xmm2
	};
}
void  test_sqrtsd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_sqrtsd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_sqrtsd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "sqrtsd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_subpd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_subpd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
		subpd xmm1, xmm2
	};
}
void  test_subpd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_subpd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_subpd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "subpd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_subsd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_subsd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
		subsd xmm1, xmm2
	};
}
void  test_subsd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_subsd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_subsd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "subsd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_ucomisd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_ucomisd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
		ucomisd xmm1, xmm2
	};
}
void  test_ucomisd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_ucomisd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_ucomisd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "ucomisd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_unpckhpd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_unpckhpd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
		unpckhpd xmm1, xmm2
	};
}
void  test_unpckhpd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_unpckhpd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_unpckhpd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "unpckhpd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_unpcklpd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_unpcklpd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
		unpcklpd xmm1, xmm2
	};
}
void  test_unpcklpd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_unpcklpd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_unpcklpd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "unpcklpd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_xorpd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_xorpd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
		xorpd xmm1, xmm2
	};
}
void  test_xorpd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_xorpd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_xorpd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "xorpd takes " << clk << std::endl;
}
void run_all_sse2_tests()
{
	test_cvtps2dq_xmm1xmm2();
	test_cvttps2dq_xmm1xmm2();
	test_movd_xmm1eax();
	test_movd_eaxxmm2();
	test_movdqa_xmm1xmm2();
	test_movdqu_xmm1xmm2();
	test_movq_xmm1xmm2();
	test_packsswb_xmm1xmm2();
	test_packssdw_xmm1xmm2();
	test_packuswb_xmm1xmm2();
	test_paddb_xmm1xmm2();
	test_paddw_xmm1xmm2();
	test_paddd_xmm1xmm2();
	test_paddsb_xmm1xmm2();
	test_paddsw_xmm1xmm2();
	test_paddusb_xmm1xmm2();
	test_paddusw_xmm1xmm2();
	test_paddq_xmm1xmm2();
	test_psubq_xmm1xmm2();
	test_pand_xmm1xmm2();
	test_pandn_xmm1xmm2();
	test_pavgb_xmm1xmm2();
	test_pavgw_xmm1xmm2();
	test_pcmpeqb_xmm1xmm2();
	test_pcmpeqd_xmm1xmm2();
	test_pcmpeqw_xmm1xmm2();
	test_pcmpgtb_xmm1xmm2();
	test_pcmpgtd_xmm1xmm2();
	test_pcmpgtw_xmm1xmm2();
	test_pextrw_eaxxmm11();
	test_pinsrw_xmm1eax1();
	test_pmaddwd_xmm1xmm2();
	test_pmaxsw_xmm1xmm2();
	test_pmaxub_xmm1xmm2();
	test_pminsw_xmm1xmm2();
	test_pminub_xmm1xmm2();
	test_pmovmskb_eaxxmm2();
	test_pmulhuw_xmm1xmm2();
	test_pmulhw_xmm1xmm2();
	test_pmullw_xmm1xmm2();
	test_pmuludq_xmm1xmm2();
	test_por_xmm1xmm2();
	test_psadbw_xmm1xmm2();
	test_pshufd_xmm1xmm11();
	test_pshufhw_xmm1xmm11();
	test_pshuflw_xmm1xmm11();
	test_pslldq_xmm11();
	test_psllw_xmm11();
	test_pslld_xmm11();
	test_psllq_xmm11();
	test_psll_xmm1xmm2();
	test_psrl_xmm1xmm2();
	test_psraw_xmm11();
	test_psrad_xmm11();
	test_psraw_xmm1xmm2();
	test_psrad_xmm1xmm2();
	test_psrldq_xmm11();
	test_psrlw_xmm11();
	test_psrld_xmm11();
	test_psrlq_xmm11();
	test_psubb_xmm1xmm2();
	test_psubw_xmm1xmm2();
	test_psubd_xmm1xmm2();
	test_psubsb_xmm1xmm2();
	test_psubsw_xmm1xmm2();
	test_psubusb_xmm1xmm2();
	test_psubusw_xmm1xmm2();
	test_punpckhbw_xmm1xmm2();
	test_punpckhwd_xmm1xmm2();
	test_punpckhdq_xmm1xmm2();
	test_punpckhqdq_xmm1xmm2();
	test_punpcklbw_xmm1xmm2();
	test_punpcklwd_xmm1xmm2();
	test_punpckldq_xmm1xmm2();
	test_punpcklqdq_xmm1xmm2();
	test_pxor_xmm1xmm2();
	test_addpd_xmm1xmm2();
	test_addsd_xmm1xmm2();
	test_andnpd_xmm1xmm2();
	test_andpd_xmm1xmm2();
	test_cmppd_xmm1xmm11();
	test_cmpsd_xmm1xmm11();
	test_comisd_xmm1xmm2();
	test_cvtdq2pd_xmm1xmm2();
	test_cvtdq2ps_xmm1xmm2();
	test_cvtpd2dq_xmm1xmm2();
	test_cvtpd2ps_xmm1xmm2();
	test_cvtps2pd_xmm1xmm2();
	test_cvtsd2si_eaxxmm2();
	test_cvttsd2si_eaxxmm2();
	test_cvtsd2ss_xmm1xmm2();
	test_cvtsi2sd_xmm1eax();
	test_cvtss2sd_xmm1xmm2();
	test_cvttpd2dq_xmm1xmm2();
	test_divpd_xmm1xmm2();
	test_divsd_xmm1xmm2();
	test_maxpd_xmm1xmm2();
	test_maxsd_xmm1xmm2();
	test_minpd_xmm1xmm2();
	test_minsd_xmm1xmm2();
	test_movapd_xmm1xmm2();
	test_movmskpd_eaxxmm2();
	test_movsd_xmm1xmm2();
	test_movupd_xmm1xmm2();
	test_mulpd_xmm1xmm2();
	test_mulsd_xmm1xmm2();
	test_orpd_xmm1xmm2();
	test_shufpd_xmm1xmm11();
	test_sqrtpd_xmm1xmm2();
	test_sqrtsd_xmm1xmm2();
	test_subpd_xmm1xmm2();
	test_subsd_xmm1xmm2();
	test_ucomisd_xmm1xmm2();
	test_unpckhpd_xmm1xmm2();
	test_unpcklpd_xmm1xmm2();
	test_xorpd_xmm1xmm2();
}
