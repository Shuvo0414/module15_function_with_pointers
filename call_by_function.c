#include <stdio.h>

void fun(int x)
{
    /*
    This x is a parameter of function fun.
    It is NOT the same x from main function.

    It receives a COPY of the value from main x.
    This is called "call by value".
    So it has its own separate memory address.
    */
    x = 100;

    /*
    Here &x means address of local variable x inside fun.
    This address is different from main x address.
    */
    printf("Address of x variable in fun fucntion - %p\n", &x);
}

int main()
{
    int x = 10;

    /*
    This x belongs to main function.
    It has its own memory location.
    */
    printf("Address of x variable in main function - %p\n", &x);

    /*
    We are passing ONLY value of x to fun().
    So fun() receives a COPY, not original variable.
    */
    fun(x);

    /*
    main x is NOT changed because fun() works on copy.
    */
    printf("Main function er x er value - %d", x);

    return 0;
}