// This file is generated from testsgenerator.py
// The first loop runs the intrinsic for 1000000 * 10 times. Assume it takes time1
// The second loop runs the intrinsic for 1000000 * 20 times. Assume it takes time2
// The return value is the execution time for 1000000 * 10 times, which equals (time2 - time1)
#include <time.h>
#include <iostream>

void __declspec(noinline) __cdecl run_blendpd_xmm1xmm21_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_blendpd_xmm1xmm21_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_blendpd_xmm1xmm21_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_blendpd_xmm1xmm21_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "blendpd takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_blendps_xmm1xmm21_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_blendps_xmm1xmm21_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_blendps_xmm1xmm21_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_blendps_xmm1xmm21_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "blendps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_blendvpd_xmm1xmm2_10_times()
{
    __asm {
        blendvpd xmm1, xmm2
        blendvpd xmm1, xmm2
        blendvpd xmm1, xmm2
        blendvpd xmm1, xmm2
        blendvpd xmm1, xmm2
        blendvpd xmm1, xmm2
        blendvpd xmm1, xmm2
        blendvpd xmm1, xmm2
        blendvpd xmm1, xmm2
        blendvpd xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_blendvpd_xmm1xmm2_20_times()
{
    __asm {
        blendvpd xmm1, xmm2
        blendvpd xmm1, xmm2
        blendvpd xmm1, xmm2
        blendvpd xmm1, xmm2
        blendvpd xmm1, xmm2
        blendvpd xmm1, xmm2
        blendvpd xmm1, xmm2
        blendvpd xmm1, xmm2
        blendvpd xmm1, xmm2
        blendvpd xmm1, xmm2
        blendvpd xmm1, xmm2
        blendvpd xmm1, xmm2
        blendvpd xmm1, xmm2
        blendvpd xmm1, xmm2
        blendvpd xmm1, xmm2
        blendvpd xmm1, xmm2
        blendvpd xmm1, xmm2
        blendvpd xmm1, xmm2
        blendvpd xmm1, xmm2
        blendvpd xmm1, xmm2
    };
}
void  test_blendvpd_xmm1xmm2()
{
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_blendvpd_xmm1xmm2_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_blendvpd_xmm1xmm2_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "blendvpd takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_blendvps_xmm1xmm2_10_times()
{
    __asm {
        blendvps xmm1, xmm2
        blendvps xmm1, xmm2
        blendvps xmm1, xmm2
        blendvps xmm1, xmm2
        blendvps xmm1, xmm2
        blendvps xmm1, xmm2
        blendvps xmm1, xmm2
        blendvps xmm1, xmm2
        blendvps xmm1, xmm2
        blendvps xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_blendvps_xmm1xmm2_20_times()
{
    __asm {
        blendvps xmm1, xmm2
        blendvps xmm1, xmm2
        blendvps xmm1, xmm2
        blendvps xmm1, xmm2
        blendvps xmm1, xmm2
        blendvps xmm1, xmm2
        blendvps xmm1, xmm2
        blendvps xmm1, xmm2
        blendvps xmm1, xmm2
        blendvps xmm1, xmm2
        blendvps xmm1, xmm2
        blendvps xmm1, xmm2
        blendvps xmm1, xmm2
        blendvps xmm1, xmm2
        blendvps xmm1, xmm2
        blendvps xmm1, xmm2
        blendvps xmm1, xmm2
        blendvps xmm1, xmm2
        blendvps xmm1, xmm2
        blendvps xmm1, xmm2
    };
}
void  test_blendvps_xmm1xmm2()
{
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_blendvps_xmm1xmm2_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_blendvps_xmm1xmm2_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "blendvps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_dppd_xmm1xmm2_10_times()
{
    __asm {
        dppd xmm1, xmm2
        dppd xmm1, xmm2
        dppd xmm1, xmm2
        dppd xmm1, xmm2
        dppd xmm1, xmm2
        dppd xmm1, xmm2
        dppd xmm1, xmm2
        dppd xmm1, xmm2
        dppd xmm1, xmm2
        dppd xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_dppd_xmm1xmm2_20_times()
{
    __asm {
        dppd xmm1, xmm2
        dppd xmm1, xmm2
        dppd xmm1, xmm2
        dppd xmm1, xmm2
        dppd xmm1, xmm2
        dppd xmm1, xmm2
        dppd xmm1, xmm2
        dppd xmm1, xmm2
        dppd xmm1, xmm2
        dppd xmm1, xmm2
        dppd xmm1, xmm2
        dppd xmm1, xmm2
        dppd xmm1, xmm2
        dppd xmm1, xmm2
        dppd xmm1, xmm2
        dppd xmm1, xmm2
        dppd xmm1, xmm2
        dppd xmm1, xmm2
        dppd xmm1, xmm2
        dppd xmm1, xmm2
    };
}
void  test_dppd_xmm1xmm2()
{
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_dppd_xmm1xmm2_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_dppd_xmm1xmm2_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "dppd takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_dpps_xmm1xmm2_10_times()
{
    __asm {
        dpps xmm1, xmm2
        dpps xmm1, xmm2
        dpps xmm1, xmm2
        dpps xmm1, xmm2
        dpps xmm1, xmm2
        dpps xmm1, xmm2
        dpps xmm1, xmm2
        dpps xmm1, xmm2
        dpps xmm1, xmm2
        dpps xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_dpps_xmm1xmm2_20_times()
{
    __asm {
        dpps xmm1, xmm2
        dpps xmm1, xmm2
        dpps xmm1, xmm2
        dpps xmm1, xmm2
        dpps xmm1, xmm2
        dpps xmm1, xmm2
        dpps xmm1, xmm2
        dpps xmm1, xmm2
        dpps xmm1, xmm2
        dpps xmm1, xmm2
        dpps xmm1, xmm2
        dpps xmm1, xmm2
        dpps xmm1, xmm2
        dpps xmm1, xmm2
        dpps xmm1, xmm2
        dpps xmm1, xmm2
        dpps xmm1, xmm2
        dpps xmm1, xmm2
        dpps xmm1, xmm2
        dpps xmm1, xmm2
    };
}
void  test_dpps_xmm1xmm2()
{
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_dpps_xmm1xmm2_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_dpps_xmm1xmm2_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "dpps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_extractps_xmm1xmm21_10_times()
{
    __asm {
        extractps xmm1, xmm2, 1
        extractps xmm1, xmm2, 1
        extractps xmm1, xmm2, 1
        extractps xmm1, xmm2, 1
        extractps xmm1, xmm2, 1
        extractps xmm1, xmm2, 1
        extractps xmm1, xmm2, 1
        extractps xmm1, xmm2, 1
        extractps xmm1, xmm2, 1
        extractps xmm1, xmm2, 1
    };
}
void __declspec(noinline) __cdecl run_extractps_xmm1xmm21_20_times()
{
    __asm {
        extractps xmm1, xmm2, 1
        extractps xmm1, xmm2, 1
        extractps xmm1, xmm2, 1
        extractps xmm1, xmm2, 1
        extractps xmm1, xmm2, 1
        extractps xmm1, xmm2, 1
        extractps xmm1, xmm2, 1
        extractps xmm1, xmm2, 1
        extractps xmm1, xmm2, 1
        extractps xmm1, xmm2, 1
        extractps xmm1, xmm2, 1
        extractps xmm1, xmm2, 1
        extractps xmm1, xmm2, 1
        extractps xmm1, xmm2, 1
        extractps xmm1, xmm2, 1
        extractps xmm1, xmm2, 1
        extractps xmm1, xmm2, 1
        extractps xmm1, xmm2, 1
        extractps xmm1, xmm2, 1
        extractps xmm1, xmm2, 1
    };
}
void  test_extractps_xmm1xmm21()
{
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_extractps_xmm1xmm21_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_extractps_xmm1xmm21_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "extractps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_insertps_xmm1xmm21_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_insertps_xmm1xmm21_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_insertps_xmm1xmm21_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_insertps_xmm1xmm21_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "insertps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_mpsadbw_xmm1xmm21_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_mpsadbw_xmm1xmm21_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_mpsadbw_xmm1xmm21_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_mpsadbw_xmm1xmm21_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "mpsadbw takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_packusdw_xmm1xmm2_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_packusdw_xmm1xmm2_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_packusdw_xmm1xmm2_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_packusdw_xmm1xmm2_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "packusdw takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pblenvb_xmm1xmm2_10_times()
{
    __asm {
        pblenvb xmm1, xmm2
        pblenvb xmm1, xmm2
        pblenvb xmm1, xmm2
        pblenvb xmm1, xmm2
        pblenvb xmm1, xmm2
        pblenvb xmm1, xmm2
        pblenvb xmm1, xmm2
        pblenvb xmm1, xmm2
        pblenvb xmm1, xmm2
        pblenvb xmm1, xmm2
    };
}
void __declspec(noinline) __cdecl run_pblenvb_xmm1xmm2_20_times()
{
    __asm {
        pblenvb xmm1, xmm2
        pblenvb xmm1, xmm2
        pblenvb xmm1, xmm2
        pblenvb xmm1, xmm2
        pblenvb xmm1, xmm2
        pblenvb xmm1, xmm2
        pblenvb xmm1, xmm2
        pblenvb xmm1, xmm2
        pblenvb xmm1, xmm2
        pblenvb xmm1, xmm2
        pblenvb xmm1, xmm2
        pblenvb xmm1, xmm2
        pblenvb xmm1, xmm2
        pblenvb xmm1, xmm2
        pblenvb xmm1, xmm2
        pblenvb xmm1, xmm2
        pblenvb xmm1, xmm2
        pblenvb xmm1, xmm2
        pblenvb xmm1, xmm2
        pblenvb xmm1, xmm2
    };
}
void  test_pblenvb_xmm1xmm2()
{
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pblenvb_xmm1xmm2_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pblenvb_xmm1xmm2_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pblenvb takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pblendw_xmm1xmm21_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_pblendw_xmm1xmm21_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pblendw_xmm1xmm21_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pblendw_xmm1xmm21_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pblendw takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pcmpeqq_xmm1xmm2_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_pcmpeqq_xmm1xmm2_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pcmpeqq_xmm1xmm2_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pcmpeqq_xmm1xmm2_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pcmpeqq takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pextrb_raxxmm11_10_times()
{
    __asm {
        pextrb rax, xmm1, 1
        pextrb rax, xmm1, 1
        pextrb rax, xmm1, 1
        pextrb rax, xmm1, 1
        pextrb rax, xmm1, 1
        pextrb rax, xmm1, 1
        pextrb rax, xmm1, 1
        pextrb rax, xmm1, 1
        pextrb rax, xmm1, 1
        pextrb rax, xmm1, 1
    };
}
void __declspec(noinline) __cdecl run_pextrb_raxxmm11_20_times()
{
    __asm {
        pextrb rax, xmm1, 1
        pextrb rax, xmm1, 1
        pextrb rax, xmm1, 1
        pextrb rax, xmm1, 1
        pextrb rax, xmm1, 1
        pextrb rax, xmm1, 1
        pextrb rax, xmm1, 1
        pextrb rax, xmm1, 1
        pextrb rax, xmm1, 1
        pextrb rax, xmm1, 1
        pextrb rax, xmm1, 1
        pextrb rax, xmm1, 1
        pextrb rax, xmm1, 1
        pextrb rax, xmm1, 1
        pextrb rax, xmm1, 1
        pextrb rax, xmm1, 1
        pextrb rax, xmm1, 1
        pextrb rax, xmm1, 1
        pextrb rax, xmm1, 1
        pextrb rax, xmm1, 1
    };
}
void  test_pextrb_raxxmm11()
{
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pextrb_raxxmm11_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pextrb_raxxmm11_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pextrb takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pextrw_raxxmm11_10_times()
{
    __asm {
        pextrw rax, xmm1, 1
        pextrw rax, xmm1, 1
        pextrw rax, xmm1, 1
        pextrw rax, xmm1, 1
        pextrw rax, xmm1, 1
        pextrw rax, xmm1, 1
        pextrw rax, xmm1, 1
        pextrw rax, xmm1, 1
        pextrw rax, xmm1, 1
        pextrw rax, xmm1, 1
    };
}
void __declspec(noinline) __cdecl run_pextrw_raxxmm11_20_times()
{
    __asm {
        pextrw rax, xmm1, 1
        pextrw rax, xmm1, 1
        pextrw rax, xmm1, 1
        pextrw rax, xmm1, 1
        pextrw rax, xmm1, 1
        pextrw rax, xmm1, 1
        pextrw rax, xmm1, 1
        pextrw rax, xmm1, 1
        pextrw rax, xmm1, 1
        pextrw rax, xmm1, 1
        pextrw rax, xmm1, 1
        pextrw rax, xmm1, 1
        pextrw rax, xmm1, 1
        pextrw rax, xmm1, 1
        pextrw rax, xmm1, 1
        pextrw rax, xmm1, 1
        pextrw rax, xmm1, 1
        pextrw rax, xmm1, 1
        pextrw rax, xmm1, 1
        pextrw rax, xmm1, 1
    };
}
void  test_pextrw_raxxmm11()
{
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pextrw_raxxmm11_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pextrw_raxxmm11_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pextrw takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pextrd_raxxmm11_10_times()
{
    __asm {
        pextrd rax, xmm1, 1
        pextrd rax, xmm1, 1
        pextrd rax, xmm1, 1
        pextrd rax, xmm1, 1
        pextrd rax, xmm1, 1
        pextrd rax, xmm1, 1
        pextrd rax, xmm1, 1
        pextrd rax, xmm1, 1
        pextrd rax, xmm1, 1
        pextrd rax, xmm1, 1
    };
}
void __declspec(noinline) __cdecl run_pextrd_raxxmm11_20_times()
{
    __asm {
        pextrd rax, xmm1, 1
        pextrd rax, xmm1, 1
        pextrd rax, xmm1, 1
        pextrd rax, xmm1, 1
        pextrd rax, xmm1, 1
        pextrd rax, xmm1, 1
        pextrd rax, xmm1, 1
        pextrd rax, xmm1, 1
        pextrd rax, xmm1, 1
        pextrd rax, xmm1, 1
        pextrd rax, xmm1, 1
        pextrd rax, xmm1, 1
        pextrd rax, xmm1, 1
        pextrd rax, xmm1, 1
        pextrd rax, xmm1, 1
        pextrd rax, xmm1, 1
        pextrd rax, xmm1, 1
        pextrd rax, xmm1, 1
        pextrd rax, xmm1, 1
        pextrd rax, xmm1, 1
    };
}
void  test_pextrd_raxxmm11()
{
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pextrd_raxxmm11_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pextrd_raxxmm11_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pextrd takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_phminposuw_xmm1,xmm2_10_times()
{
    __asm {
        phminposuw xmm1,xmm2
        phminposuw xmm1,xmm2
        phminposuw xmm1,xmm2
        phminposuw xmm1,xmm2
        phminposuw xmm1,xmm2
        phminposuw xmm1,xmm2
        phminposuw xmm1,xmm2
        phminposuw xmm1,xmm2
        phminposuw xmm1,xmm2
        phminposuw xmm1,xmm2
    };
}
void __declspec(noinline) __cdecl run_phminposuw_xmm1,xmm2_20_times()
{
    __asm {
        phminposuw xmm1,xmm2
        phminposuw xmm1,xmm2
        phminposuw xmm1,xmm2
        phminposuw xmm1,xmm2
        phminposuw xmm1,xmm2
        phminposuw xmm1,xmm2
        phminposuw xmm1,xmm2
        phminposuw xmm1,xmm2
        phminposuw xmm1,xmm2
        phminposuw xmm1,xmm2
        phminposuw xmm1,xmm2
        phminposuw xmm1,xmm2
        phminposuw xmm1,xmm2
        phminposuw xmm1,xmm2
        phminposuw xmm1,xmm2
        phminposuw xmm1,xmm2
        phminposuw xmm1,xmm2
        phminposuw xmm1,xmm2
        phminposuw xmm1,xmm2
        phminposuw xmm1,xmm2
    };
}
void  test_phminposuw_xmm1,xmm2()
{
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_phminposuw_xmm1,xmm2_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_phminposuw_xmm1,xmm2_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "phminposuw takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pinsrb_xmm1rax1_10_times()
{
    __asm {
        pinsrb xmm1, rax, 1
        pinsrb xmm1, rax, 1
        pinsrb xmm1, rax, 1
        pinsrb xmm1, rax, 1
        pinsrb xmm1, rax, 1
        pinsrb xmm1, rax, 1
        pinsrb xmm1, rax, 1
        pinsrb xmm1, rax, 1
        pinsrb xmm1, rax, 1
        pinsrb xmm1, rax, 1
    };
}
void __declspec(noinline) __cdecl run_pinsrb_xmm1rax1_20_times()
{
    __asm {
        pinsrb xmm1, rax, 1
        pinsrb xmm1, rax, 1
        pinsrb xmm1, rax, 1
        pinsrb xmm1, rax, 1
        pinsrb xmm1, rax, 1
        pinsrb xmm1, rax, 1
        pinsrb xmm1, rax, 1
        pinsrb xmm1, rax, 1
        pinsrb xmm1, rax, 1
        pinsrb xmm1, rax, 1
        pinsrb xmm1, rax, 1
        pinsrb xmm1, rax, 1
        pinsrb xmm1, rax, 1
        pinsrb xmm1, rax, 1
        pinsrb xmm1, rax, 1
        pinsrb xmm1, rax, 1
        pinsrb xmm1, rax, 1
        pinsrb xmm1, rax, 1
        pinsrb xmm1, rax, 1
        pinsrb xmm1, rax, 1
    };
}
void  test_pinsrb_xmm1rax1()
{
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pinsrb_xmm1rax1_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pinsrb_xmm1rax1_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pinsrb takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pinsrw_xmm1rax1_10_times()
{
    __asm {
        pinsrw xmm1, rax, 1
        pinsrw xmm1, rax, 1
        pinsrw xmm1, rax, 1
        pinsrw xmm1, rax, 1
        pinsrw xmm1, rax, 1
        pinsrw xmm1, rax, 1
        pinsrw xmm1, rax, 1
        pinsrw xmm1, rax, 1
        pinsrw xmm1, rax, 1
        pinsrw xmm1, rax, 1
    };
}
void __declspec(noinline) __cdecl run_pinsrw_xmm1rax1_20_times()
{
    __asm {
        pinsrw xmm1, rax, 1
        pinsrw xmm1, rax, 1
        pinsrw xmm1, rax, 1
        pinsrw xmm1, rax, 1
        pinsrw xmm1, rax, 1
        pinsrw xmm1, rax, 1
        pinsrw xmm1, rax, 1
        pinsrw xmm1, rax, 1
        pinsrw xmm1, rax, 1
        pinsrw xmm1, rax, 1
        pinsrw xmm1, rax, 1
        pinsrw xmm1, rax, 1
        pinsrw xmm1, rax, 1
        pinsrw xmm1, rax, 1
        pinsrw xmm1, rax, 1
        pinsrw xmm1, rax, 1
        pinsrw xmm1, rax, 1
        pinsrw xmm1, rax, 1
        pinsrw xmm1, rax, 1
        pinsrw xmm1, rax, 1
    };
}
void  test_pinsrw_xmm1rax1()
{
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pinsrw_xmm1rax1_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pinsrw_xmm1rax1_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pinsrw takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pinsrd_xmm1rax1_10_times()
{
    __asm {
        pinsrd xmm1, rax, 1
        pinsrd xmm1, rax, 1
        pinsrd xmm1, rax, 1
        pinsrd xmm1, rax, 1
        pinsrd xmm1, rax, 1
        pinsrd xmm1, rax, 1
        pinsrd xmm1, rax, 1
        pinsrd xmm1, rax, 1
        pinsrd xmm1, rax, 1
        pinsrd xmm1, rax, 1
    };
}
void __declspec(noinline) __cdecl run_pinsrd_xmm1rax1_20_times()
{
    __asm {
        pinsrd xmm1, rax, 1
        pinsrd xmm1, rax, 1
        pinsrd xmm1, rax, 1
        pinsrd xmm1, rax, 1
        pinsrd xmm1, rax, 1
        pinsrd xmm1, rax, 1
        pinsrd xmm1, rax, 1
        pinsrd xmm1, rax, 1
        pinsrd xmm1, rax, 1
        pinsrd xmm1, rax, 1
        pinsrd xmm1, rax, 1
        pinsrd xmm1, rax, 1
        pinsrd xmm1, rax, 1
        pinsrd xmm1, rax, 1
        pinsrd xmm1, rax, 1
        pinsrd xmm1, rax, 1
        pinsrd xmm1, rax, 1
        pinsrd xmm1, rax, 1
        pinsrd xmm1, rax, 1
        pinsrd xmm1, rax, 1
    };
}
void  test_pinsrd_xmm1rax1()
{
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pinsrd_xmm1rax1_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pinsrd_xmm1rax1_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pinsrd takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmaxsb_xmm1xmm2_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_pmaxsb_xmm1xmm2_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmaxsb_xmm1xmm2_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmaxsb_xmm1xmm2_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmaxsb takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmaxsd_xmm1xmm2_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_pmaxsd_xmm1xmm2_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmaxsd_xmm1xmm2_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmaxsd_xmm1xmm2_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmaxsd takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmaxuw_xmm1xmm2_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_pmaxuw_xmm1xmm2_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmaxuw_xmm1xmm2_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmaxuw_xmm1xmm2_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmaxuw takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmaxud_xmm1xmm2_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_pmaxud_xmm1xmm2_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmaxud_xmm1xmm2_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmaxud_xmm1xmm2_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmaxud takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pminsb_xmm1xmm2_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_pminsb_xmm1xmm2_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pminsb_xmm1xmm2_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pminsb_xmm1xmm2_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pminsb takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pminsd_xmm1xmm2_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_pminsd_xmm1xmm2_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pminsd_xmm1xmm2_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pminsd_xmm1xmm2_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pminsd takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pminuw_xmm1xmm2_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_pminuw_xmm1xmm2_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pminuw_xmm1xmm2_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pminuw_xmm1xmm2_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pminuw takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pminud_xmm1xmm2_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_pminud_xmm1xmm2_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pminud_xmm1xmm2_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pminud_xmm1xmm2_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pminud takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmovsxbd_xmm1xmm2_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_pmovsxbd_xmm1xmm2_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovsxbd_xmm1xmm2_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovsxbd_xmm1xmm2_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmovsxbd takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmovsxbw_xmm1xmm2_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_pmovsxbw_xmm1xmm2_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovsxbw_xmm1xmm2_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovsxbw_xmm1xmm2_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmovsxbw takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmovsxbq_xmm1xmm2_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_pmovsxbq_xmm1xmm2_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovsxbq_xmm1xmm2_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovsxbq_xmm1xmm2_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmovsxbq takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmovsxwd_xmm1xmm2_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_pmovsxwd_xmm1xmm2_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovsxwd_xmm1xmm2_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovsxwd_xmm1xmm2_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmovsxwd takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmovsxwq_xmm1xmm2_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_pmovsxwq_xmm1xmm2_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovsxwq_xmm1xmm2_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovsxwq_xmm1xmm2_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmovsxwq takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmovsxdq_xmm1xmm2_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_pmovsxdq_xmm1xmm2_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovsxdq_xmm1xmm2_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovsxdq_xmm1xmm2_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmovsxdq takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmovzxbd_xmm1xmm2_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_pmovzxbd_xmm1xmm2_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovzxbd_xmm1xmm2_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovzxbd_xmm1xmm2_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmovzxbd takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmovzxbw_xmm1xmm2_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_pmovzxbw_xmm1xmm2_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovzxbw_xmm1xmm2_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovzxbw_xmm1xmm2_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmovzxbw takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmovzxbq_xmm1xmm2_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_pmovzxbq_xmm1xmm2_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovzxbq_xmm1xmm2_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovzxbq_xmm1xmm2_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmovzxbq takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmovzxwd_xmm1xmm2_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_pmovzxwd_xmm1xmm2_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovzxwd_xmm1xmm2_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovzxwd_xmm1xmm2_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmovzxwd takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmovzxwq_xmm1xmm2_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_pmovzxwq_xmm1xmm2_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovzxwq_xmm1xmm2_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovzxwq_xmm1xmm2_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmovzxwq takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmovzxdq_xmm1xmm2_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_pmovzxdq_xmm1xmm2_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovzxdq_xmm1xmm2_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmovzxdq_xmm1xmm2_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmovzxdq takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmuldq_xmm1xmm2_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_pmuldq_xmm1xmm2_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmuldq_xmm1xmm2_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmuldq_xmm1xmm2_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmuldq takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_pmulld_xmm1xmm2_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_pmulld_xmm1xmm2_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmulld_xmm1xmm2_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_pmulld_xmm1xmm2_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "pmulld takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_ptest_xmm1xmm2_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_ptest_xmm1xmm2_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_ptest_xmm1xmm2_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_ptest_xmm1xmm2_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "ptest takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_roundpd_xmm1xmm21_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_roundpd_xmm1xmm21_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_roundpd_xmm1xmm21_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_roundpd_xmm1xmm21_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "roundpd takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_roundps_xmm1xmm21_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_roundps_xmm1xmm21_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_roundps_xmm1xmm21_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_roundps_xmm1xmm21_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "roundps takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_roundsd_xmm1xmm21_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_roundsd_xmm1xmm21_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_roundsd_xmm1xmm21_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_roundsd_xmm1xmm21_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "roundsd takes "<< clk << std::endl;
}

void __declspec(noinline) __cdecl run_roundss_xmm1xmm21_10_times()
{
    __asm {
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
void __declspec(noinline) __cdecl run_roundss_xmm1xmm21_20_times()
{
    __asm {
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
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_roundss_xmm1xmm21_10_times();
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        run_roundss_xmm1xmm21_20_times();
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "roundss takes "<< clk << std::endl;
}