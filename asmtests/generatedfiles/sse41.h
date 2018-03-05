// This file is generated from testsgenerator.py
// The first loop runs the intrinsic for 1000000 * 5 times. Assume it takes time1
// The second loop runs the intrinsic for 1000000 * 105 times. Assume it takes time2
// The return value is the execution time for 1000000 * 100 times, which equals (time2 - time1)
#include <time.h>
#include <iostream>

void __declspec(noinline) __cdecl run_blendpd_xmm1xmm21_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
    };
}
void __declspec(noinline) __cdecl run_blendpd_xmm1xmm21_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
        blendpd xmm1, xmm2, 1
    };
}
void  test_blendpd_xmm1xmm21()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_blendpd_xmm1xmm21_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_blendpd_xmm1xmm21_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "blendpd takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_blendps_xmm1xmm21_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
    };
}
void __declspec(noinline) __cdecl run_blendps_xmm1xmm21_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
        blendps xmm1, xmm2, 1
    };
}
void  test_blendps_xmm1xmm21()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_blendps_xmm1xmm21_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_blendps_xmm1xmm21_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "blendps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_blendvpd_xmm1xmm2xmm0_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
    };
}
void __declspec(noinline) __cdecl run_blendvpd_xmm1xmm2xmm0_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
        blendvpd xmm1, xmm2, xmm0
    };
}
void  test_blendvpd_xmm1xmm2xmm0()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_blendvpd_xmm1xmm2xmm0_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_blendvpd_xmm1xmm2xmm0_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "blendvpd takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_blendvps_xmm1xmm2xmm0_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
    };
}
void __declspec(noinline) __cdecl run_blendvps_xmm1xmm2xmm0_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
        blendvps xmm1, xmm2, xmm0
    };
}
void  test_blendvps_xmm1xmm2xmm0()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_blendvps_xmm1xmm2xmm0_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_blendvps_xmm1xmm2xmm0_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "blendvps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_dppd_xmm1xmm21_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
    };
}
void __declspec(noinline) __cdecl run_dppd_xmm1xmm21_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
        dppd xmm1, xmm2, 1
    };
}
void  test_dppd_xmm1xmm21()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_dppd_xmm1xmm21_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_dppd_xmm1xmm21_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "dppd takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_dpps_xmm1xmm21_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
    };
}
void __declspec(noinline) __cdecl run_dpps_xmm1xmm21_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
        dpps xmm1, xmm2, 1
    };
}
void  test_dpps_xmm1xmm21()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_dpps_xmm1xmm21_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_dpps_xmm1xmm21_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "dpps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_extractps_eaxxmm21_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
    };
}
void __declspec(noinline) __cdecl run_extractps_eaxxmm21_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
        extractps eax, xmm2, 1
    };
}
void  test_extractps_eaxxmm21()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_extractps_eaxxmm21_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_extractps_eaxxmm21_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "extractps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_insertps_xmm1xmm21_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
    };
}
void __declspec(noinline) __cdecl run_insertps_xmm1xmm21_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
        insertps xmm1, xmm2, 1
    };
}
void  test_insertps_xmm1xmm21()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_insertps_xmm1xmm21_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_insertps_xmm1xmm21_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "insertps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_mpsadbw_xmm1xmm21_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
    };
}
void __declspec(noinline) __cdecl run_mpsadbw_xmm1xmm21_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
        mpsadbw xmm1, xmm2, 1
    };
}
void  test_mpsadbw_xmm1xmm21()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_mpsadbw_xmm1xmm21_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_mpsadbw_xmm1xmm21_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "mpsadbw takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_packusdw_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_packusdw_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
        packusdw xmm1, xmm2
    };
}
void  test_packusdw_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_packusdw_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_packusdw_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "packusdw takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pblendvb_xmm1xmm2xmm0_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
    };
}
void __declspec(noinline) __cdecl run_pblendvb_xmm1xmm2xmm0_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
        pblendvb xmm1, xmm2, xmm0
    };
}
void  test_pblendvb_xmm1xmm2xmm0()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pblendvb_xmm1xmm2xmm0_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pblendvb_xmm1xmm2xmm0_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pblendvb takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pblendw_xmm1xmm21_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
    };
}
void __declspec(noinline) __cdecl run_pblendw_xmm1xmm21_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
        pblendw xmm1, xmm2, 1
    };
}
void  test_pblendw_xmm1xmm21()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pblendw_xmm1xmm21_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pblendw_xmm1xmm21_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pblendw takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pcmpeqq_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_pcmpeqq_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
        pcmpeqq xmm1, xmm2
    };
}
void  test_pcmpeqq_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pcmpeqq_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pcmpeqq_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pcmpeqq takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pextrb_eaxxmm11_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
    };
}
void __declspec(noinline) __cdecl run_pextrb_eaxxmm11_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
        pextrb eax, xmm1, 1
    };
}
void  test_pextrb_eaxxmm11()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pextrb_eaxxmm11_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pextrb_eaxxmm11_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pextrb takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pextrd_eaxxmm11_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
    };
}
void __declspec(noinline) __cdecl run_pextrd_eaxxmm11_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
        pextrd eax, xmm1, 1
    };
}
void  test_pextrd_eaxxmm11()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pextrd_eaxxmm11_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pextrd_eaxxmm11_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pextrd takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_phminposuw_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_phminposuw_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
        phminposuw xmm1, xmm2
    };
}
void  test_phminposuw_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_phminposuw_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_phminposuw_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "phminposuw takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pinsrb_xmm1eax1_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
    };
}
void __declspec(noinline) __cdecl run_pinsrb_xmm1eax1_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
        pinsrb xmm1, eax, 1
    };
}
void  test_pinsrb_xmm1eax1()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pinsrb_xmm1eax1_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pinsrb_xmm1eax1_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pinsrb takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pinsrd_xmm1eax1_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
    };
}
void __declspec(noinline) __cdecl run_pinsrd_xmm1eax1_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
        pinsrd xmm1, eax, 1
    };
}
void  test_pinsrd_xmm1eax1()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pinsrd_xmm1eax1_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pinsrd_xmm1eax1_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pinsrd takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmaxsb_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_pmaxsb_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
        pmaxsb xmm1, xmm2
    };
}
void  test_pmaxsb_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmaxsb_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmaxsb_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmaxsb takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmaxsd_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_pmaxsd_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
        pmaxsd xmm1, xmm2
    };
}
void  test_pmaxsd_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmaxsd_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmaxsd_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmaxsd takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmaxuw_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_pmaxuw_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
        pmaxuw xmm1, xmm2
    };
}
void  test_pmaxuw_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmaxuw_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmaxuw_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmaxuw takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmaxud_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_pmaxud_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
        pmaxud xmm1, xmm2
    };
}
void  test_pmaxud_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmaxud_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmaxud_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmaxud takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pminsb_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_pminsb_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
        pminsb xmm1, xmm2
    };
}
void  test_pminsb_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pminsb_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pminsb_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pminsb takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pminsd_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_pminsd_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
        pminsd xmm1, xmm2
    };
}
void  test_pminsd_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pminsd_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pminsd_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pminsd takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pminuw_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_pminuw_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
        pminuw xmm1, xmm2
    };
}
void  test_pminuw_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pminuw_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pminuw_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pminuw takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pminud_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_pminud_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
        pminud xmm1, xmm2
    };
}
void  test_pminud_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pminud_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pminud_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pminud takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmovsxbd_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_pmovsxbd_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
        pmovsxbd xmm1, xmm2
    };
}
void  test_pmovsxbd_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovsxbd_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovsxbd_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmovsxbd takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmovsxbw_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_pmovsxbw_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
        pmovsxbw xmm1, xmm2
    };
}
void  test_pmovsxbw_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovsxbw_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovsxbw_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmovsxbw takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmovsxbq_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_pmovsxbq_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
        pmovsxbq xmm1, xmm2
    };
}
void  test_pmovsxbq_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovsxbq_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovsxbq_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmovsxbq takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmovsxwd_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_pmovsxwd_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
        pmovsxwd xmm1, xmm2
    };
}
void  test_pmovsxwd_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovsxwd_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovsxwd_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmovsxwd takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmovsxwq_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_pmovsxwq_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
        pmovsxwq xmm1, xmm2
    };
}
void  test_pmovsxwq_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovsxwq_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovsxwq_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmovsxwq takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmovsxdq_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_pmovsxdq_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
        pmovsxdq xmm1, xmm2
    };
}
void  test_pmovsxdq_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovsxdq_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovsxdq_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmovsxdq takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmovzxbd_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_pmovzxbd_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
        pmovzxbd xmm1, xmm2
    };
}
void  test_pmovzxbd_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovzxbd_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovzxbd_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmovzxbd takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmovzxbw_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_pmovzxbw_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
        pmovzxbw xmm1, xmm2
    };
}
void  test_pmovzxbw_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovzxbw_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovzxbw_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmovzxbw takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmovzxbq_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_pmovzxbq_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
        pmovzxbq xmm1, xmm2
    };
}
void  test_pmovzxbq_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovzxbq_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovzxbq_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmovzxbq takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmovzxwd_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_pmovzxwd_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
        pmovzxwd xmm1, xmm2
    };
}
void  test_pmovzxwd_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovzxwd_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovzxwd_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmovzxwd takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmovzxwq_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_pmovzxwq_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
        pmovzxwq xmm1, xmm2
    };
}
void  test_pmovzxwq_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovzxwq_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovzxwq_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmovzxwq takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmovzxdq_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_pmovzxdq_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
        pmovzxdq xmm1, xmm2
    };
}
void  test_pmovzxdq_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovzxdq_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovzxdq_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmovzxdq takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmuldq_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_pmuldq_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
        pmuldq xmm1, xmm2
    };
}
void  test_pmuldq_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmuldq_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmuldq_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmuldq takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmulld_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_pmulld_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
        pmulld xmm1, xmm2
    };
}
void  test_pmulld_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmulld_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmulld_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmulld takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_ptest_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_ptest_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
        ptest xmm1, xmm2
    };
}
void  test_ptest_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_ptest_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_ptest_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "ptest takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_roundpd_xmm1xmm21_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
    };
}
void __declspec(noinline) __cdecl run_roundpd_xmm1xmm21_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
        roundpd xmm1, xmm2, 1
    };
}
void  test_roundpd_xmm1xmm21()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_roundpd_xmm1xmm21_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_roundpd_xmm1xmm21_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "roundpd takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_roundps_xmm1xmm21_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
    };
}
void __declspec(noinline) __cdecl run_roundps_xmm1xmm21_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
        roundps xmm1, xmm2, 1
    };
}
void  test_roundps_xmm1xmm21()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_roundps_xmm1xmm21_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_roundps_xmm1xmm21_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "roundps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_roundsd_xmm1xmm21_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
    };
}
void __declspec(noinline) __cdecl run_roundsd_xmm1xmm21_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
        roundsd xmm1, xmm2, 1
    };
}
void  test_roundsd_xmm1xmm21()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_roundsd_xmm1xmm21_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_roundsd_xmm1xmm21_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "roundsd takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_roundss_xmm1xmm21_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
    };
}
void __declspec(noinline) __cdecl run_roundss_xmm1xmm21_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
        roundss xmm1, xmm2, 1
    };
}
void  test_roundss_xmm1xmm21()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_roundss_xmm1xmm21_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_roundss_xmm1xmm21_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "roundss takes "<< clk << std::endl;
}
void run_all_sse41_tests()
{
    test_blendpd_xmm1xmm21();
    test_blendps_xmm1xmm21();
    test_blendvpd_xmm1xmm2xmm0();
    test_blendvps_xmm1xmm2xmm0();
    test_dppd_xmm1xmm21();
    test_dpps_xmm1xmm21();
    test_extractps_eaxxmm21();
    test_insertps_xmm1xmm21();
    test_mpsadbw_xmm1xmm21();
    test_packusdw_xmm1xmm2();
    test_pblendvb_xmm1xmm2xmm0();
    test_pblendw_xmm1xmm21();
    test_pcmpeqq_xmm1xmm2();
    test_pextrb_eaxxmm11();
    test_pextrd_eaxxmm11();
    test_phminposuw_xmm1xmm2();
    test_pinsrb_xmm1eax1();
    test_pinsrd_xmm1eax1();
    test_pmaxsb_xmm1xmm2();
    test_pmaxsd_xmm1xmm2();
    test_pmaxuw_xmm1xmm2();
    test_pmaxud_xmm1xmm2();
    test_pminsb_xmm1xmm2();
    test_pminsd_xmm1xmm2();
    test_pminuw_xmm1xmm2();
    test_pminud_xmm1xmm2();
    test_pmovsxbd_xmm1xmm2();
    test_pmovsxbw_xmm1xmm2();
    test_pmovsxbq_xmm1xmm2();
    test_pmovsxwd_xmm1xmm2();
    test_pmovsxwq_xmm1xmm2();
    test_pmovsxdq_xmm1xmm2();
    test_pmovzxbd_xmm1xmm2();
    test_pmovzxbw_xmm1xmm2();
    test_pmovzxbq_xmm1xmm2();
    test_pmovzxwd_xmm1xmm2();
    test_pmovzxwq_xmm1xmm2();
    test_pmovzxdq_xmm1xmm2();
    test_pmuldq_xmm1xmm2();
    test_pmulld_xmm1xmm2();
    test_ptest_xmm1xmm2();
    test_roundpd_xmm1xmm21();
    test_roundps_xmm1xmm21();
    test_roundsd_xmm1xmm21();
    test_roundss_xmm1xmm21();
}
