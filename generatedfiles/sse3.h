// This file is generated from testsgenerator.py
// The first loop runs the intrinsic for 1000000 * 10 times. Assume it takes time1
// The second loop runs the intrinsic for 1000000 * 20 times. Assume it takes time2
// The return value is the execution time for 1000000 * 10 times, which equals (time2 - time1)
#include <time.h>
#include <iostream>
#include "xmmintrin.h"
#include "emmintrin.h"
#include "pmmintrin.h"
#include "tmmintrin.h"
#include "smmintrin.h"
void test_mm_addsub_pd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_addsub_pd(a,b);
        ret = _mm_addsub_pd(a,b);
        ret = _mm_addsub_pd(a,b);
        ret = _mm_addsub_pd(a,b);
        ret = _mm_addsub_pd(a,b);
        ret = _mm_addsub_pd(a,b);
        ret = _mm_addsub_pd(a,b);
        ret = _mm_addsub_pd(a,b);
        ret = _mm_addsub_pd(a,b);
        ret = _mm_addsub_pd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_addsub_pd(a,b);
        ret = _mm_addsub_pd(a,b);
        ret = _mm_addsub_pd(a,b);
        ret = _mm_addsub_pd(a,b);
        ret = _mm_addsub_pd(a,b);
        ret = _mm_addsub_pd(a,b);
        ret = _mm_addsub_pd(a,b);
        ret = _mm_addsub_pd(a,b);
        ret = _mm_addsub_pd(a,b);
        ret = _mm_addsub_pd(a,b);
        ret = _mm_addsub_pd(a,b);
        ret = _mm_addsub_pd(a,b);
        ret = _mm_addsub_pd(a,b);
        ret = _mm_addsub_pd(a,b);
        ret = _mm_addsub_pd(a,b);
        ret = _mm_addsub_pd(a,b);
        ret = _mm_addsub_pd(a,b);
        ret = _mm_addsub_pd(a,b);
        ret = _mm_addsub_pd(a,b);
        ret = _mm_addsub_pd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_addsub_pd takes "<< clk << std::endl;
}
void test_mm_addsub_ps (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_addsub_ps(a,b);
        ret = _mm_addsub_ps(a,b);
        ret = _mm_addsub_ps(a,b);
        ret = _mm_addsub_ps(a,b);
        ret = _mm_addsub_ps(a,b);
        ret = _mm_addsub_ps(a,b);
        ret = _mm_addsub_ps(a,b);
        ret = _mm_addsub_ps(a,b);
        ret = _mm_addsub_ps(a,b);
        ret = _mm_addsub_ps(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_addsub_ps(a,b);
        ret = _mm_addsub_ps(a,b);
        ret = _mm_addsub_ps(a,b);
        ret = _mm_addsub_ps(a,b);
        ret = _mm_addsub_ps(a,b);
        ret = _mm_addsub_ps(a,b);
        ret = _mm_addsub_ps(a,b);
        ret = _mm_addsub_ps(a,b);
        ret = _mm_addsub_ps(a,b);
        ret = _mm_addsub_ps(a,b);
        ret = _mm_addsub_ps(a,b);
        ret = _mm_addsub_ps(a,b);
        ret = _mm_addsub_ps(a,b);
        ret = _mm_addsub_ps(a,b);
        ret = _mm_addsub_ps(a,b);
        ret = _mm_addsub_ps(a,b);
        ret = _mm_addsub_ps(a,b);
        ret = _mm_addsub_ps(a,b);
        ret = _mm_addsub_ps(a,b);
        ret = _mm_addsub_ps(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_addsub_ps takes "<< clk << std::endl;
}
void test_mm_hadd_pd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_hadd_pd(a,b);
        ret = _mm_hadd_pd(a,b);
        ret = _mm_hadd_pd(a,b);
        ret = _mm_hadd_pd(a,b);
        ret = _mm_hadd_pd(a,b);
        ret = _mm_hadd_pd(a,b);
        ret = _mm_hadd_pd(a,b);
        ret = _mm_hadd_pd(a,b);
        ret = _mm_hadd_pd(a,b);
        ret = _mm_hadd_pd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_hadd_pd(a,b);
        ret = _mm_hadd_pd(a,b);
        ret = _mm_hadd_pd(a,b);
        ret = _mm_hadd_pd(a,b);
        ret = _mm_hadd_pd(a,b);
        ret = _mm_hadd_pd(a,b);
        ret = _mm_hadd_pd(a,b);
        ret = _mm_hadd_pd(a,b);
        ret = _mm_hadd_pd(a,b);
        ret = _mm_hadd_pd(a,b);
        ret = _mm_hadd_pd(a,b);
        ret = _mm_hadd_pd(a,b);
        ret = _mm_hadd_pd(a,b);
        ret = _mm_hadd_pd(a,b);
        ret = _mm_hadd_pd(a,b);
        ret = _mm_hadd_pd(a,b);
        ret = _mm_hadd_pd(a,b);
        ret = _mm_hadd_pd(a,b);
        ret = _mm_hadd_pd(a,b);
        ret = _mm_hadd_pd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_hadd_pd takes "<< clk << std::endl;
}
void test_mm_hadd_ps (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_hadd_ps(a,b);
        ret = _mm_hadd_ps(a,b);
        ret = _mm_hadd_ps(a,b);
        ret = _mm_hadd_ps(a,b);
        ret = _mm_hadd_ps(a,b);
        ret = _mm_hadd_ps(a,b);
        ret = _mm_hadd_ps(a,b);
        ret = _mm_hadd_ps(a,b);
        ret = _mm_hadd_ps(a,b);
        ret = _mm_hadd_ps(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_hadd_ps(a,b);
        ret = _mm_hadd_ps(a,b);
        ret = _mm_hadd_ps(a,b);
        ret = _mm_hadd_ps(a,b);
        ret = _mm_hadd_ps(a,b);
        ret = _mm_hadd_ps(a,b);
        ret = _mm_hadd_ps(a,b);
        ret = _mm_hadd_ps(a,b);
        ret = _mm_hadd_ps(a,b);
        ret = _mm_hadd_ps(a,b);
        ret = _mm_hadd_ps(a,b);
        ret = _mm_hadd_ps(a,b);
        ret = _mm_hadd_ps(a,b);
        ret = _mm_hadd_ps(a,b);
        ret = _mm_hadd_ps(a,b);
        ret = _mm_hadd_ps(a,b);
        ret = _mm_hadd_ps(a,b);
        ret = _mm_hadd_ps(a,b);
        ret = _mm_hadd_ps(a,b);
        ret = _mm_hadd_ps(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_hadd_ps takes "<< clk << std::endl;
}
void test_mm_hsub_pd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_hsub_pd(a,b);
        ret = _mm_hsub_pd(a,b);
        ret = _mm_hsub_pd(a,b);
        ret = _mm_hsub_pd(a,b);
        ret = _mm_hsub_pd(a,b);
        ret = _mm_hsub_pd(a,b);
        ret = _mm_hsub_pd(a,b);
        ret = _mm_hsub_pd(a,b);
        ret = _mm_hsub_pd(a,b);
        ret = _mm_hsub_pd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_hsub_pd(a,b);
        ret = _mm_hsub_pd(a,b);
        ret = _mm_hsub_pd(a,b);
        ret = _mm_hsub_pd(a,b);
        ret = _mm_hsub_pd(a,b);
        ret = _mm_hsub_pd(a,b);
        ret = _mm_hsub_pd(a,b);
        ret = _mm_hsub_pd(a,b);
        ret = _mm_hsub_pd(a,b);
        ret = _mm_hsub_pd(a,b);
        ret = _mm_hsub_pd(a,b);
        ret = _mm_hsub_pd(a,b);
        ret = _mm_hsub_pd(a,b);
        ret = _mm_hsub_pd(a,b);
        ret = _mm_hsub_pd(a,b);
        ret = _mm_hsub_pd(a,b);
        ret = _mm_hsub_pd(a,b);
        ret = _mm_hsub_pd(a,b);
        ret = _mm_hsub_pd(a,b);
        ret = _mm_hsub_pd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_hsub_pd takes "<< clk << std::endl;
}
void test_mm_hsub_ps (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_hsub_ps(a,b);
        ret = _mm_hsub_ps(a,b);
        ret = _mm_hsub_ps(a,b);
        ret = _mm_hsub_ps(a,b);
        ret = _mm_hsub_ps(a,b);
        ret = _mm_hsub_ps(a,b);
        ret = _mm_hsub_ps(a,b);
        ret = _mm_hsub_ps(a,b);
        ret = _mm_hsub_ps(a,b);
        ret = _mm_hsub_ps(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_hsub_ps(a,b);
        ret = _mm_hsub_ps(a,b);
        ret = _mm_hsub_ps(a,b);
        ret = _mm_hsub_ps(a,b);
        ret = _mm_hsub_ps(a,b);
        ret = _mm_hsub_ps(a,b);
        ret = _mm_hsub_ps(a,b);
        ret = _mm_hsub_ps(a,b);
        ret = _mm_hsub_ps(a,b);
        ret = _mm_hsub_ps(a,b);
        ret = _mm_hsub_ps(a,b);
        ret = _mm_hsub_ps(a,b);
        ret = _mm_hsub_ps(a,b);
        ret = _mm_hsub_ps(a,b);
        ret = _mm_hsub_ps(a,b);
        ret = _mm_hsub_ps(a,b);
        ret = _mm_hsub_ps(a,b);
        ret = _mm_hsub_ps(a,b);
        ret = _mm_hsub_ps(a,b);
        ret = _mm_hsub_ps(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_hsub_ps takes "<< clk << std::endl;
}
void test_mm_lddqu_si128 (__m128i const* mem_addr) 
{
    __m128i ret;
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_lddqu_si128(mem_addr);
        ret = _mm_lddqu_si128(mem_addr);
        ret = _mm_lddqu_si128(mem_addr);
        ret = _mm_lddqu_si128(mem_addr);
        ret = _mm_lddqu_si128(mem_addr);
        ret = _mm_lddqu_si128(mem_addr);
        ret = _mm_lddqu_si128(mem_addr);
        ret = _mm_lddqu_si128(mem_addr);
        ret = _mm_lddqu_si128(mem_addr);
        ret = _mm_lddqu_si128(mem_addr);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_lddqu_si128(mem_addr);
        ret = _mm_lddqu_si128(mem_addr);
        ret = _mm_lddqu_si128(mem_addr);
        ret = _mm_lddqu_si128(mem_addr);
        ret = _mm_lddqu_si128(mem_addr);
        ret = _mm_lddqu_si128(mem_addr);
        ret = _mm_lddqu_si128(mem_addr);
        ret = _mm_lddqu_si128(mem_addr);
        ret = _mm_lddqu_si128(mem_addr);
        ret = _mm_lddqu_si128(mem_addr);
        ret = _mm_lddqu_si128(mem_addr);
        ret = _mm_lddqu_si128(mem_addr);
        ret = _mm_lddqu_si128(mem_addr);
        ret = _mm_lddqu_si128(mem_addr);
        ret = _mm_lddqu_si128(mem_addr);
        ret = _mm_lddqu_si128(mem_addr);
        ret = _mm_lddqu_si128(mem_addr);
        ret = _mm_lddqu_si128(mem_addr);
        ret = _mm_lddqu_si128(mem_addr);
        ret = _mm_lddqu_si128(mem_addr);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_lddqu_si128 takes "<< clk << std::endl;
}
void test_mm_loaddup_pd (double const* mem_addr) 
{
    __m128d ret;
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_loaddup_pd(mem_addr);
        ret = _mm_loaddup_pd(mem_addr);
        ret = _mm_loaddup_pd(mem_addr);
        ret = _mm_loaddup_pd(mem_addr);
        ret = _mm_loaddup_pd(mem_addr);
        ret = _mm_loaddup_pd(mem_addr);
        ret = _mm_loaddup_pd(mem_addr);
        ret = _mm_loaddup_pd(mem_addr);
        ret = _mm_loaddup_pd(mem_addr);
        ret = _mm_loaddup_pd(mem_addr);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_loaddup_pd(mem_addr);
        ret = _mm_loaddup_pd(mem_addr);
        ret = _mm_loaddup_pd(mem_addr);
        ret = _mm_loaddup_pd(mem_addr);
        ret = _mm_loaddup_pd(mem_addr);
        ret = _mm_loaddup_pd(mem_addr);
        ret = _mm_loaddup_pd(mem_addr);
        ret = _mm_loaddup_pd(mem_addr);
        ret = _mm_loaddup_pd(mem_addr);
        ret = _mm_loaddup_pd(mem_addr);
        ret = _mm_loaddup_pd(mem_addr);
        ret = _mm_loaddup_pd(mem_addr);
        ret = _mm_loaddup_pd(mem_addr);
        ret = _mm_loaddup_pd(mem_addr);
        ret = _mm_loaddup_pd(mem_addr);
        ret = _mm_loaddup_pd(mem_addr);
        ret = _mm_loaddup_pd(mem_addr);
        ret = _mm_loaddup_pd(mem_addr);
        ret = _mm_loaddup_pd(mem_addr);
        ret = _mm_loaddup_pd(mem_addr);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_loaddup_pd takes "<< clk << std::endl;
}
void test_mm_movedup_pd (__m128d a) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_movedup_pd(a);
        ret = _mm_movedup_pd(a);
        ret = _mm_movedup_pd(a);
        ret = _mm_movedup_pd(a);
        ret = _mm_movedup_pd(a);
        ret = _mm_movedup_pd(a);
        ret = _mm_movedup_pd(a);
        ret = _mm_movedup_pd(a);
        ret = _mm_movedup_pd(a);
        ret = _mm_movedup_pd(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_movedup_pd(a);
        ret = _mm_movedup_pd(a);
        ret = _mm_movedup_pd(a);
        ret = _mm_movedup_pd(a);
        ret = _mm_movedup_pd(a);
        ret = _mm_movedup_pd(a);
        ret = _mm_movedup_pd(a);
        ret = _mm_movedup_pd(a);
        ret = _mm_movedup_pd(a);
        ret = _mm_movedup_pd(a);
        ret = _mm_movedup_pd(a);
        ret = _mm_movedup_pd(a);
        ret = _mm_movedup_pd(a);
        ret = _mm_movedup_pd(a);
        ret = _mm_movedup_pd(a);
        ret = _mm_movedup_pd(a);
        ret = _mm_movedup_pd(a);
        ret = _mm_movedup_pd(a);
        ret = _mm_movedup_pd(a);
        ret = _mm_movedup_pd(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_movedup_pd takes "<< clk << std::endl;
}
void test_mm_movehdup_ps (__m128 a) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_movehdup_ps(a);
        ret = _mm_movehdup_ps(a);
        ret = _mm_movehdup_ps(a);
        ret = _mm_movehdup_ps(a);
        ret = _mm_movehdup_ps(a);
        ret = _mm_movehdup_ps(a);
        ret = _mm_movehdup_ps(a);
        ret = _mm_movehdup_ps(a);
        ret = _mm_movehdup_ps(a);
        ret = _mm_movehdup_ps(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_movehdup_ps(a);
        ret = _mm_movehdup_ps(a);
        ret = _mm_movehdup_ps(a);
        ret = _mm_movehdup_ps(a);
        ret = _mm_movehdup_ps(a);
        ret = _mm_movehdup_ps(a);
        ret = _mm_movehdup_ps(a);
        ret = _mm_movehdup_ps(a);
        ret = _mm_movehdup_ps(a);
        ret = _mm_movehdup_ps(a);
        ret = _mm_movehdup_ps(a);
        ret = _mm_movehdup_ps(a);
        ret = _mm_movehdup_ps(a);
        ret = _mm_movehdup_ps(a);
        ret = _mm_movehdup_ps(a);
        ret = _mm_movehdup_ps(a);
        ret = _mm_movehdup_ps(a);
        ret = _mm_movehdup_ps(a);
        ret = _mm_movehdup_ps(a);
        ret = _mm_movehdup_ps(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_movehdup_ps takes "<< clk << std::endl;
}
void test_mm_moveldup_ps (__m128 a) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_moveldup_ps(a);
        ret = _mm_moveldup_ps(a);
        ret = _mm_moveldup_ps(a);
        ret = _mm_moveldup_ps(a);
        ret = _mm_moveldup_ps(a);
        ret = _mm_moveldup_ps(a);
        ret = _mm_moveldup_ps(a);
        ret = _mm_moveldup_ps(a);
        ret = _mm_moveldup_ps(a);
        ret = _mm_moveldup_ps(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_moveldup_ps(a);
        ret = _mm_moveldup_ps(a);
        ret = _mm_moveldup_ps(a);
        ret = _mm_moveldup_ps(a);
        ret = _mm_moveldup_ps(a);
        ret = _mm_moveldup_ps(a);
        ret = _mm_moveldup_ps(a);
        ret = _mm_moveldup_ps(a);
        ret = _mm_moveldup_ps(a);
        ret = _mm_moveldup_ps(a);
        ret = _mm_moveldup_ps(a);
        ret = _mm_moveldup_ps(a);
        ret = _mm_moveldup_ps(a);
        ret = _mm_moveldup_ps(a);
        ret = _mm_moveldup_ps(a);
        ret = _mm_moveldup_ps(a);
        ret = _mm_moveldup_ps(a);
        ret = _mm_moveldup_ps(a);
        ret = _mm_moveldup_ps(a);
        ret = _mm_moveldup_ps(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_moveldup_ps takes "<< clk << std::endl;
}
