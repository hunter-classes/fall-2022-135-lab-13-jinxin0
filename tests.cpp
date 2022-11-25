#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Task A")
{
    CHECK(printRange(-2, 10) == "-2 -1 0 1 2 3 4 5 6 7 8 9 10");
    CHECK(printRange(0, 11) == "0 1 2 3 4 5 6 7 8 9 10 11");
}

TEST_CASE("Task B")
{
    CHECK(sumRange(1, 3) == 6);
    CHECK(sumRange(-2, 10) == 52);
}

TEST_CASE("Task C")
{
    int arr[] = {1, 2, 3};
    int arr1[] = {-2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    CHECK(sumArray(arr, std::size(arr)) == 6);
    CHECK(sumArray(arr1, std::size(arr1)) == 52);
}

TEST_CASE("Task D")
{
    CHECK(isAlphanumeric("hello world") == false);
    CHECK(isAlphanumeric("helloworld") == true);
    CHECK(isAlphanumeric("ABCD") == true);
    CHECK(isAlphanumeric("Abcd1234xyz") == true);
    CHECK(isAlphanumeric("KLMN 8-7-6") == false);
}
