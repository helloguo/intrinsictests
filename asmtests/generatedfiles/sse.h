// This file is generated from testsgenerator.py
// The first loop runs the intrinsic for 1000000 * 5 times. Assume it takes time1
// The second loop runs the intrinsic for 1000000 * 105 times. Assume it takes time2
// The return value is the execution time for 1000000 * 100 times, which equals (time2 - time1)
#include <time.h>
#include <iostream>

void __declspec(noinline) __cdecl run_addps_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_addps_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
        addps xmm1, xmm2
    };
}
void  test_addps_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_addps_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_addps_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "addps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_addss_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_addss_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
        addss xmm1, xmm2
    };
}
void  test_addss_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_addss_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_addss_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "addss takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_andnps_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_andnps_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
        andnps xmm1, xmm2
    };
}
void  test_andnps_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_andnps_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_andnps_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "andnps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_andps_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_andps_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
        andps xmm1, xmm2
    };
}
void  test_andps_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_andps_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_andps_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "andps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_cmpps_xmm1xmm20_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
    };
}
void __declspec(noinline) __cdecl run_cmpps_xmm1xmm20_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
        cmpps xmm1, xmm2, 0
    };
}
void  test_cmpps_xmm1xmm20()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cmpps_xmm1xmm20_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cmpps_xmm1xmm20_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "cmpps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_cmpps_xmm1xmm21_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
    };
}
void __declspec(noinline) __cdecl run_cmpps_xmm1xmm21_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
        cmpps xmm1, xmm2, 1
    };
}
void  test_cmpps_xmm1xmm21()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cmpps_xmm1xmm21_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cmpps_xmm1xmm21_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "cmpps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_cmpps_xmm1xmm22_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
    };
}
void __declspec(noinline) __cdecl run_cmpps_xmm1xmm22_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
        cmpps xmm1, xmm2, 2
    };
}
void  test_cmpps_xmm1xmm22()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cmpps_xmm1xmm22_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cmpps_xmm1xmm22_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "cmpps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_cmpps_xmm1xmm23_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
    };
}
void __declspec(noinline) __cdecl run_cmpps_xmm1xmm23_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
        cmpps xmm1, xmm2, 3
    };
}
void  test_cmpps_xmm1xmm23()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cmpps_xmm1xmm23_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cmpps_xmm1xmm23_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "cmpps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_cmpps_xmm1xmm24_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
    };
}
void __declspec(noinline) __cdecl run_cmpps_xmm1xmm24_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
        cmpps xmm1, xmm2, 4
    };
}
void  test_cmpps_xmm1xmm24()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cmpps_xmm1xmm24_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cmpps_xmm1xmm24_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "cmpps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_cmpps_xmm1xmm25_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
    };
}
void __declspec(noinline) __cdecl run_cmpps_xmm1xmm25_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
        cmpps xmm1, xmm2, 5
    };
}
void  test_cmpps_xmm1xmm25()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cmpps_xmm1xmm25_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cmpps_xmm1xmm25_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "cmpps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_cmpps_xmm1xmm26_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
    };
}
void __declspec(noinline) __cdecl run_cmpps_xmm1xmm26_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
        cmpps xmm1, xmm2, 6
    };
}
void  test_cmpps_xmm1xmm26()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cmpps_xmm1xmm26_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cmpps_xmm1xmm26_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "cmpps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_cmpps_xmm1xmm27_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
    };
}
void __declspec(noinline) __cdecl run_cmpps_xmm1xmm27_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
        cmpps xmm1, xmm2, 7
    };
}
void  test_cmpps_xmm1xmm27()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cmpps_xmm1xmm27_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cmpps_xmm1xmm27_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "cmpps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_cmpss_xmm1xmm20_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
    };
}
void __declspec(noinline) __cdecl run_cmpss_xmm1xmm20_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
        cmpss xmm1, xmm2, 0
    };
}
void  test_cmpss_xmm1xmm20()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cmpss_xmm1xmm20_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cmpss_xmm1xmm20_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "cmpss takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_cmpss_xmm1xmm21_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
    };
}
void __declspec(noinline) __cdecl run_cmpss_xmm1xmm21_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
        cmpss xmm1, xmm2, 1
    };
}
void  test_cmpss_xmm1xmm21()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cmpss_xmm1xmm21_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cmpss_xmm1xmm21_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "cmpss takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_cmpss_xmm1xmm22_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
    };
}
void __declspec(noinline) __cdecl run_cmpss_xmm1xmm22_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
        cmpss xmm1, xmm2, 2
    };
}
void  test_cmpss_xmm1xmm22()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cmpss_xmm1xmm22_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cmpss_xmm1xmm22_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "cmpss takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_cmpss_xmm1xmm23_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
    };
}
void __declspec(noinline) __cdecl run_cmpss_xmm1xmm23_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
        cmpss xmm1, xmm2, 3
    };
}
void  test_cmpss_xmm1xmm23()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cmpss_xmm1xmm23_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cmpss_xmm1xmm23_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "cmpss takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_cmpss_xmm1xmm24_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
    };
}
void __declspec(noinline) __cdecl run_cmpss_xmm1xmm24_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
        cmpss xmm1, xmm2, 4
    };
}
void  test_cmpss_xmm1xmm24()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cmpss_xmm1xmm24_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cmpss_xmm1xmm24_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "cmpss takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_cmpss_xmm1xmm25_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
    };
}
void __declspec(noinline) __cdecl run_cmpss_xmm1xmm25_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
        cmpss xmm1, xmm2, 5
    };
}
void  test_cmpss_xmm1xmm25()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cmpss_xmm1xmm25_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cmpss_xmm1xmm25_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "cmpss takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_cmpss_xmm1xmm26_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
    };
}
void __declspec(noinline) __cdecl run_cmpss_xmm1xmm26_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
        cmpss xmm1, xmm2, 6
    };
}
void  test_cmpss_xmm1xmm26()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cmpss_xmm1xmm26_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cmpss_xmm1xmm26_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "cmpss takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_cmpss_xmm1xmm27_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
    };
}
void __declspec(noinline) __cdecl run_cmpss_xmm1xmm27_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
        cmpss xmm1, xmm2, 7
    };
}
void  test_cmpss_xmm1xmm27()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cmpss_xmm1xmm27_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cmpss_xmm1xmm27_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "cmpss takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_comiss_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_comiss_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
        comiss xmm1, xmm2
    };
}
void  test_comiss_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_comiss_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_comiss_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "comiss takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_cvtsi2ss_xmm1eax_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
    };
}
void __declspec(noinline) __cdecl run_cvtsi2ss_xmm1eax_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
        cvtsi2ss xmm1, eax
    };
}
void  test_cvtsi2ss_xmm1eax()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cvtsi2ss_xmm1eax_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cvtsi2ss_xmm1eax_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "cvtsi2ss takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_cvtss2si_eaxxmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
    };
}
void __declspec(noinline) __cdecl run_cvtss2si_eaxxmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
        cvtss2si eax, xmm2
    };
}
void  test_cvtss2si_eaxxmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cvtss2si_eaxxmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cvtss2si_eaxxmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "cvtss2si takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_cvttss2si_eaxxmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
    };
}
void __declspec(noinline) __cdecl run_cvttss2si_eaxxmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
        cvttss2si eax, xmm2
    };
}
void  test_cvttss2si_eaxxmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cvttss2si_eaxxmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_cvttss2si_eaxxmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "cvttss2si takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_divps_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_divps_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
        divps xmm1, xmm2
    };
}
void  test_divps_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_divps_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_divps_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "divps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_divss_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_divss_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
        divss xmm1, xmm2
    };
}
void  test_divss_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_divss_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_divss_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "divss takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_maxps_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_maxps_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
        maxps xmm1, xmm2
    };
}
void  test_maxps_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_maxps_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_maxps_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "maxps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_maxss_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_maxss_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
        maxss xmm1, xmm2
    };
}
void  test_maxss_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_maxss_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_maxss_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "maxss takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_minps_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_minps_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
        minps xmm1, xmm2
    };
}
void  test_minps_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_minps_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_minps_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "minps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_minss_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_minss_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
        minss xmm1, xmm2
    };
}
void  test_minss_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_minss_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_minss_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "minss takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_movaps_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_movaps_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
        movaps xmm1, xmm2
    };
}
void  test_movaps_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_movaps_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_movaps_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "movaps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_movhlps_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_movhlps_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
        movhlps xmm1, xmm2
    };
}
void  test_movhlps_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_movhlps_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_movhlps_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "movhlps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_movlhps_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_movlhps_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
        movlhps xmm1, xmm2
    };
}
void  test_movlhps_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_movlhps_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_movlhps_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "movlhps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_movmskps_eaxxmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
    };
}
void __declspec(noinline) __cdecl run_movmskps_eaxxmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
        movmskps eax, xmm2
    };
}
void  test_movmskps_eaxxmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_movmskps_eaxxmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_movmskps_eaxxmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "movmskps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_movss_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_movss_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
        movss xmm1, xmm2
    };
}
void  test_movss_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_movss_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_movss_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "movss takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_movups_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_movups_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
        movups xmm1, xmm2
    };
}
void  test_movups_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_movups_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_movups_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "movups takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_mulps_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_mulps_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
        mulps xmm1, xmm2
    };
}
void  test_mulps_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_mulps_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_mulps_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "mulps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_mulss_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_mulss_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
        mulss xmm1, xmm2
    };
}
void  test_mulss_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_mulss_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_mulss_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "mulss takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_orps_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_orps_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
        orps xmm1, xmm2
    };
}
void  test_orps_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_orps_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_orps_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "orps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_rcpps_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_rcpps_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
        rcpps xmm1, xmm2
    };
}
void  test_rcpps_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_rcpps_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_rcpps_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "rcpps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_rcpss_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_rcpss_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
        rcpss xmm1, xmm2
    };
}
void  test_rcpss_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_rcpss_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_rcpss_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "rcpss takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_rsqrtps_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_rsqrtps_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
        rsqrtps xmm1, xmm2
    };
}
void  test_rsqrtps_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_rsqrtps_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_rsqrtps_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "rsqrtps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_rsqrtss_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_rsqrtss_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
        rsqrtss xmm1, xmm2
    };
}
void  test_rsqrtss_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_rsqrtss_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_rsqrtss_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "rsqrtss takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_shufps_xmm1xmm21_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
    };
}
void __declspec(noinline) __cdecl run_shufps_xmm1xmm21_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
        shufps xmm1, xmm2, 1
    };
}
void  test_shufps_xmm1xmm21()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_shufps_xmm1xmm21_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_shufps_xmm1xmm21_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "shufps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_sqrtps_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_sqrtps_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
        sqrtps xmm1, xmm2
    };
}
void  test_sqrtps_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_sqrtps_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_sqrtps_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "sqrtps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_sqrtss_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_sqrtss_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
        sqrtss xmm1, xmm2
    };
}
void  test_sqrtss_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_sqrtss_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_sqrtss_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "sqrtss takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_subps_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_subps_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
        subps xmm1, xmm2
    };
}
void  test_subps_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_subps_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_subps_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "subps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_subss_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_subss_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
        subss xmm1, xmm2
    };
}
void  test_subss_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_subss_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_subss_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "subss takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_ucomiss_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_ucomiss_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
        ucomiss xmm1, xmm2
    };
}
void  test_ucomiss_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_ucomiss_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_ucomiss_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "ucomiss takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_unpckhps_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_unpckhps_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
        unpckhps xmm1, xmm2
    };
}
void  test_unpckhps_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_unpckhps_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_unpckhps_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "unpckhps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_unpcklps_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_unpcklps_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
        unpcklps xmm1, xmm2
    };
}
void  test_unpcklps_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_unpcklps_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_unpcklps_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "unpcklps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_xorps_xmm1xmm2_5_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_xorps_xmm1xmm2_105_times(int * addr)
{
    __asm {
        mov eax, addr
        movdqu xmm0, XMMWORD PTR[eax]
        movdqu xmm1, xmm0
        movdqu xmm2, xmm0
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
        xorps xmm1, xmm2
    };
}
void  test_xorps_xmm1xmm2()
{
    int foo [4] = {10, 20, 30, 40};
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_xorps_xmm1xmm2_5_times(foo);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_xorps_xmm1xmm2_105_times(foo);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "xorps takes "<< clk << std::endl;
}
void run_all_sse_tests()
{
    test_addps_xmm1xmm2();
    test_addss_xmm1xmm2();
    test_andnps_xmm1xmm2();
    test_andps_xmm1xmm2();
    test_cmpps_xmm1xmm20();
    test_cmpps_xmm1xmm21();
    test_cmpps_xmm1xmm22();
    test_cmpps_xmm1xmm23();
    test_cmpps_xmm1xmm24();
    test_cmpps_xmm1xmm25();
    test_cmpps_xmm1xmm26();
    test_cmpps_xmm1xmm27();
    test_cmpss_xmm1xmm20();
    test_cmpss_xmm1xmm21();
    test_cmpss_xmm1xmm22();
    test_cmpss_xmm1xmm23();
    test_cmpss_xmm1xmm24();
    test_cmpss_xmm1xmm25();
    test_cmpss_xmm1xmm26();
    test_cmpss_xmm1xmm27();
    test_comiss_xmm1xmm2();
    test_cvtsi2ss_xmm1eax();
    test_cvtss2si_eaxxmm2();
    test_cvttss2si_eaxxmm2();
    test_divps_xmm1xmm2();
    test_divss_xmm1xmm2();
    test_maxps_xmm1xmm2();
    test_maxss_xmm1xmm2();
    test_minps_xmm1xmm2();
    test_minss_xmm1xmm2();
    test_movaps_xmm1xmm2();
    test_movhlps_xmm1xmm2();
    test_movlhps_xmm1xmm2();
    test_movmskps_eaxxmm2();
    test_movss_xmm1xmm2();
    test_movups_xmm1xmm2();
    test_mulps_xmm1xmm2();
    test_mulss_xmm1xmm2();
    test_orps_xmm1xmm2();
    test_rcpps_xmm1xmm2();
    test_rcpss_xmm1xmm2();
    test_rsqrtps_xmm1xmm2();
    test_rsqrtss_xmm1xmm2();
    test_shufps_xmm1xmm21();
    test_sqrtps_xmm1xmm2();
    test_sqrtss_xmm1xmm2();
    test_subps_xmm1xmm2();
    test_subss_xmm1xmm2();
    test_ucomiss_xmm1xmm2();
    test_unpckhps_xmm1xmm2();
    test_unpcklps_xmm1xmm2();
    test_xorps_xmm1xmm2();
}
