#pragma once

#include <string>
#include <stdio.h>
#include <cmath>

class Test
{
    public:
        Test();
        ~Test();
        void inl_func1();
        void inl_func2();
        int cpp_func1() const;
        int cpp_func2() const;

};

#include "test-inl.h" // IWYU pragma: export

