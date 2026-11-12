#include <stdio.h>

// Function declaration
void swap(int *a, int *b);

int main()
{
    int a = 5, b = 10;

    // Print values before swapping
    printf("Before swap:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Call swap function
    swap(&a, &b);

    // Print values after swapping
    printf("\nAfter swap:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

// Function definition
void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
