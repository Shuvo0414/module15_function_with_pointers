#include <stdio.h>

void fun(int *p)
{
    /*
    p is a pointer variable.
    It stores the ADDRESS of variable x from main function.

    So:
    p  → address of x
    *p → value stored at that address (x)
    */

    /*
    This line directly changes the VALUE of x in main function
    because p is pointing to x's memory location.
    */
    *p = 500;

    /*
    Now *p prints the UPDATED value of x (which is 500).
    IMPORTANT:
    Value changes immediately when *p = 500 executes.
    */
    printf("Value of P - %d\n", *p);

    /*
    IMPORTANT UNDERSTANDING:
    printf order does NOT affect memory update.

    *p = 500 already changed x in main function.
    So wherever printf is placed, value is already updated.

    1️⃣ This runs first:
    printf("%d", *p);

    👉At THIS moment:

    x is still 100
    so output = 100
    2️⃣ Then this runs:
    *p = 500;

    👉 Now memory changes:

    x = 500
    🔥 After returning to main:
    printf("%d", x);

    👉 prints:

    500
    */
}

int main()
{
    int x = 100;

    /*
    Printing address of x in main function.
    */
    printf("Address of x variable - %p\n", &x);

    /*
    Passing ADDRESS of x (not value).
    This is called call by reference using pointer.
    */
    fun(&x);

    /*
    x is changed because function modified memory directly.
    */
    printf("Value of x variable - %d\n", x);

    return 0;
}