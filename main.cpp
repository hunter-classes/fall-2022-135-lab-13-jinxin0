#include <iostream>

#include "funcs.h"

#define PRINTLN(x) std::cout << x << '\n';

int main()
{
    PRINTLN(printRange(-2, 10));

    PRINTLN(sumRange(1, 3));
    PRINTLN(sumRange(-2, 10));
    return 0;
}
