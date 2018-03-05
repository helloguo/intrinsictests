// This file is generated from testsgenerator.py
// The first loop runs the intrinsic for 1000000 * 5 times. Assume it takes time1
// The second loop runs the intrinsic for 1000000 * 105 times. Assume it takes time2
// The return value is the execution time for 1000000 * 100 times, which equals (time2 - time1)
#include <time.h>
#include <iostream>

void __declspec(noinline) __cdecl run_addsubpd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_addsubpd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
		addsubpd xmm1, xmm2
	};
}
void  test_addsubpd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_addsubpd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_addsubpd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "addsubpd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_addsubps_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_addsubps_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
		addsubps xmm1, xmm2
	};
}
void  test_addsubps_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_addsubps_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_addsubps_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "addsubps takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_haddpd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_haddpd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
		haddpd xmm1, xmm2
	};
}
void  test_haddpd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_haddpd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_haddpd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "haddpd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_haddps_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_haddps_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
		haddps xmm1, xmm2
	};
}
void  test_haddps_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_haddps_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_haddps_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "haddps takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_hsubpd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_hsubpd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
		hsubpd xmm1, xmm2
	};
}
void  test_hsubpd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_hsubpd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_hsubpd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "hsubpd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_hsubps_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_hsubps_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
		hsubps xmm1, xmm2
	};
}
void  test_hsubps_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_hsubps_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_hsubps_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "hsubps takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_movddup_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_movddup_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
		movddup xmm1, xmm2
	};
}
void  test_movddup_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_movddup_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_movddup_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "movddup takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_movshdup_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_movshdup_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
		movshdup xmm1, xmm2
	};
}
void  test_movshdup_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_movshdup_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_movshdup_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "movshdup takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_movsldup_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_movsldup_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
		movsldup xmm1, xmm2
	};
}
void  test_movsldup_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_movsldup_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_movsldup_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "movsldup takes " << clk << std::endl;
}
void run_all_sse3_tests()
{
	test_addsubpd_xmm1xmm2();
	test_addsubps_xmm1xmm2();
	test_haddpd_xmm1xmm2();
	test_haddps_xmm1xmm2();
	test_hsubpd_xmm1xmm2();
	test_hsubps_xmm1xmm2();
	test_movddup_xmm1xmm2();
	test_movshdup_xmm1xmm2();
	test_movsldup_xmm1xmm2();
}
