#include <criterion/criterion.h>
#include <criterion/redirect.h>

#include <cstdio>

#pragma once

#define MyTest(MyTestSuite, MyTestName, filename, func)         \
    Test(MyTestSuite, MyTestName, .init = cr_redirect_stdout) { \
        do                                                      \
            func while (0);                                     \
        setbuf(stdout, nullptr);                                \
        std::FILE *fp = std::fopen(filename, "r");              \
        if (fp == nullptr)                                      \
            cr_skip();                                          \
        cr_assert_stdout_eq(fp);                                \
        std::fclose(fp);                                        \
    }
