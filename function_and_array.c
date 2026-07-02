#include <stdio.h>

void fun(int *a, int n)
{
    /*
    a is a pointer variable.

    When we pass array from main:
        fun(ar, 5);

    array name "ar" decays into pointer to first element:
        ar → &ar[0]

    So inside function:
        a = address of first element of array
    */

    /*
    This loop accesses array elements using pointer indexing.
    a[i] is same as *(a + i)
    */
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    /*
    Array of integers stored in continuous memory.
    */
    int ar[5] = {20, 30, 40, 50, 60};

    /*
    ar is passed to function.
    BUT:
    NOT full array is copied.

    Only the address of first element is passed.
    This is called:
        array decay → pointer conversion
    */
    fun(ar, 5);

    return 0;
}