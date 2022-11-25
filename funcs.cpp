#include "funcs.h"

std::string printRange(int left, int right)
{
    if (left == right)
        return std::to_string(right);
    return std::to_string(left) +  ' ' + printRange(left + 1, right);
}

int sumRange(int left, int right)
{
    if (left >= right)
        return right;
    return left + sumRange(left + 1, right);
}

int sumArray(int *arr, int size)
{
    if (size == 0)
        return 0;

    return arr[--size] + sumArray(arr, size);
}
