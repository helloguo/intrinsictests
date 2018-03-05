// This file is generated from testsgenerator.py
// The first loop runs the intrinsic for 1000000 * 5 times. Assume it takes time1
// The second loop runs the intrinsic for 1000000 * 105 times. Assume it takes time2
// The return value is the execution time for 1000000 * 100 times, which equals (time2 - time1)
#include <time.h>
#include <iostream>

void __declspec(noinline) __cdecl run_palignr_xmm1xmm21_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
	};
}
void __declspec(noinline) __cdecl run_palignr_xmm1xmm21_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
		palignr xmm1, xmm2, 1
	};
}
void  test_palignr_xmm1xmm21()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_palignr_xmm1xmm21_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_palignr_xmm1xmm21_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "palignr takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_phaddd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_phaddd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
		phaddd xmm1, xmm2
	};
}
void  test_phaddd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_phaddd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_phaddd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "phaddd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_phaddw_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_phaddw_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
		phaddw xmm1, xmm2
	};
}
void  test_phaddw_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_phaddw_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_phaddw_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "phaddw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_phaddsw_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_phaddsw_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
		phaddsw xmm1, xmm2
	};
}
void  test_phaddsw_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_phaddsw_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_phaddsw_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "phaddsw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_phsubd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_phsubd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
		phsubd xmm1, xmm2
	};
}
void  test_phsubd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_phsubd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_phsubd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "phsubd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_phsubw_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_phsubw_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
		phsubw xmm1, xmm2
	};
}
void  test_phsubw_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_phsubw_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_phsubw_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "phsubw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_phsubsw_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_phsubsw_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
		phsubsw xmm1, xmm2
	};
}
void  test_phsubsw_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_phsubsw_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_phsubsw_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "phsubsw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmaddubsw_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_pmaddubsw_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
		pmaddubsw xmm1, xmm2
	};
}
void  test_pmaddubsw_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pmaddubsw_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pmaddubsw_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pmaddubsw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmulhrsw_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_pmulhrsw_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
		pmulhrsw xmm1, xmm2
	};
}
void  test_pmulhrsw_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pmulhrsw_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pmulhrsw_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pmulhrsw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pshufb_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_pshufb_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
		pshufb xmm1, xmm2
	};
}
void  test_pshufb_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pshufb_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pshufb_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pshufb takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_psignb_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_psignb_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
		psignb xmm1, xmm2
	};
}
void  test_psignb_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psignb_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psignb_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "psignb takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_psignd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_psignd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
		psignd xmm1, xmm2
	};
}
void  test_psignd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psignd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psignd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "psignd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_psignw_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_psignw_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
		psignw xmm1, xmm2
	};
}
void  test_psignw_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psignw_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_psignw_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "psignw takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pabsb_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_pabsb_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
		pabsb xmm1, xmm2
	};
}
void  test_pabsb_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pabsb_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pabsb_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pabsb takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pabsd_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_pabsd_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
		pabsd xmm1, xmm2
	};
}
void  test_pabsd_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pabsd_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pabsd_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pabsd takes " << clk << std::endl;
}

void __declspec(noinline) __cdecl run_pabsw_xmm1xmm2_5_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
	};
}
void __declspec(noinline) __cdecl run_pabsw_xmm1xmm2_105_times(int * addr)
{
	__asm {
		mov eax, addr
		movdqu xmm0, XMMWORD PTR[eax]
		movdqu xmm1, xmm0
		movdqu xmm2, xmm0
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
		pabsw xmm1, xmm2
	};
}
void  test_pabsw_xmm1xmm2()
{
	int foo[4] = { 10, 20, 30, 40 };
	clock_t t1 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pabsw_xmm1xmm2_5_times(foo);
	}
	clock_t t2 = clock();
	for (int iterator = 0; iterator < 1000000; iterator++)
	{
		run_pabsw_xmm1xmm2_105_times(foo);
	}
	clock_t t3 = clock();
	clock_t clk = (t3 - t2) - (t2 - t1);
	std::cout << "pabsw takes " << clk << std::endl;
}
void run_all_ssse3_tests()
{
	test_palignr_xmm1xmm21();
	test_phaddd_xmm1xmm2();
	test_phaddw_xmm1xmm2();
	test_phaddsw_xmm1xmm2();
	test_phsubd_xmm1xmm2();
	test_phsubw_xmm1xmm2();
	test_phsubsw_xmm1xmm2();
	test_pmaddubsw_xmm1xmm2();
	test_pmulhrsw_xmm1xmm2();
	test_pshufb_xmm1xmm2();
	test_psignb_xmm1xmm2();
	test_psignd_xmm1xmm2();
	test_psignw_xmm1xmm2();
	test_pabsb_xmm1xmm2();
	test_pabsd_xmm1xmm2();
	test_pabsw_xmm1xmm2();
}
