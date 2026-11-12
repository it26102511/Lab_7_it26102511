#include <stdio.h>
#include <stdlib.h>

// Function to compare normal integer values
int compare(int a, int b)
{
    if (a > b)
        return 1;
    else if (b > a)
        return -1;
    else
        return 0;
}

// Function to compare absolute values
int compare_absolute(int a, int b)
{
    a = abs(a);
    b = abs(b);

    if (a > b)
        return 1;
    else if (b > a)
        return -1;
    else
        return 0;
}

// Function to find maximum using function pointer
int max(int a, int b, int (*compare_func)(int, int))
{
    if (compare_func(a, b) >= 0)
        return a;
    else
        return b;
}

int main()
{
    int a = 8, b = -10;

    // Normal comparison
    printf("Simple Comparison: max = %d\n",
           max(a, b, compare));

    // Absolute value comparison
    printf("Absolute Comparison: max = %d\n",
           max(a, b, compare_absolute));

    return 0;
}
