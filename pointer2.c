#include <stdio.h>

int main()
{
    /*
    x memory te 8 byte jaga niche karon etar data type hochhe double. and x er vlaue hocche 5.77. 
    */
    double x = 5.77;

    /*
    prt(pointer) variable o memory te jayga niche 8 byte karon amr system hochhe mackbook. and ay ptr variable x er address mne memory location store korche. and ay prt er nijer o memory adress ba location ache like x variable er moto.
    */
    double *ptr = &x; 

    /*
    *prt2 eta different pointer jar name ptr2 so seo memory te alada jayga niyeche and 1st prt er variable er address mne memory location store kore rakhche.
    */
    double *ptr2 = ptr;
    /*
        *ptr(pointer) varibale  x variable a new value set kore diyeche. karon ay prt er kache x variable address achce er jone se derefernce kore x er valu change kore diyeche.
    */
    // *ptr = 10.4;
    

    /*
        ekhne je kahini hoyeche seta hochhe , ay *ptr2 variable a *ptr er memory address store kora chilo sei address a giye tar value change kore diyeche and er jonne 1st *ptr je x er memory address save kore rkahchilo sei memory address er variable er o name o change hoye geche. 
    */
    *ptr2 = 100.34;
    printf("X er value- %.2lf\n", x);
    printf("X er value - %.2lf\n", *ptr);
    printf("X er value - %.2lf\n", *ptr2);
    // printf("Ptr er size - %lu", sizeof(ptr));
    return 0;
}