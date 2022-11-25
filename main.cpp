#include <iostream>

#include "funcs.h"

#define PRINTLN(x) std::cout << x << '\n';

int main()
{
    PRINTLN(printRange(-2, 10));

    PRINTLN(sumRange(1, 3));
    PRINTLN(sumRange(-2, 10));

    int arr[] = {1, 2, 3};
    int arr1[] = {-2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    PRINTLN(sumArray(arr, std::size(arr)));
    PRINTLN(sumArray(arr1, std::size(arr1)));

    PRINTLN(std::boolalpha << isAlphanumeric("hello world"));
    PRINTLN(std::boolalpha << isAlphanumeric("helloworld"));

    PRINTLN(std::boolalpha << nestedParens("((()))"));
    PRINTLN(std::boolalpha << nestedParens("()"));
    PRINTLN(std::boolalpha << nestedParens(""));
    PRINTLN(std::boolalpha << nestedParens("((("));
    PRINTLN(std::boolalpha << nestedParens("(()"));
    PRINTLN(std::boolalpha << nestedParens(")("));
    PRINTLN(std::boolalpha << nestedParens("a(b)c"));
    return 0;
}
