#include <stdio.h>

int main()
{
    int x = 100;

    /*
    x is a normal integer variable.
    It stores a value (100) directly in memory.
    */

    int *ptr = &x;

    /*
    ptr is a pointer variable.
    It stores the ADDRESS of x (not the value).

    Think:
    ptr → "home address" of x
    */

    printf("X er address - %p\n", &x);

    /*
    &x means address of x.
    This is where x is stored in memory.
    */

    printf("Ptr er value-%p\n", ptr);

    /*
    ptr stores the same address as &x.
    So ptr == &x.
    */

    printf("Ptr er address - %p\n", &ptr);

    /*
    &ptr means the address of the pointer variable itself.

    ptr and &ptr are different things:
    - ptr → stores the address of x (it points to x)
    - &ptr → memory location (address) of the pointer variable itself

    Because ptr is also a variable, it also takes memory space
    just like normal variables such as x.

    So:
    - x has its own memory address
    - ptr has its own memory address
    */

    printf("Ptr er memory size- %lu\n", sizeof(ptr));

    /*
   sizeof(ptr) gives the size of the pointer variable.

   IMPORTANT CONCEPT:

   A pointer does NOT store the actual value of the variable.
   It only stores the MEMORY ADDRESS of another variable.

   So sizeof(ptr) means:
   → how much memory is needed to store an address

   ------------------------------------------------------

   WHY POINTER SIZE IS FIXED?

   Pointer size depends on the SYSTEM ARCHITECTURE, not the data type.

   - On a 32-bit system:
     → pointer size = 4 bytes
     → because memory addresses are 32-bit

   - On a 64-bit system (most modern laptops/PCs):
     → pointer size = 8 bytes
     → because memory addresses are 64-bit

   ------------------------------------------------------

   IMPORTANT:

   - sizeof(int) → size of integer value (usually 4 bytes)
   - sizeof(char) → size of character (1 byte)
   - sizeof(ptr) → size of address holder (NOT value type)

   So:
   👉 pointer size is SAME for int*, char*, float*, etc.
   because all of them store only addresses.

   ------------------------------------------------------

   FINAL IDEA:
   Pointer size = size of memory address, not size of data it points to.
   */

    // x = 200;

    *ptr = 200;

    /*
    *ptr means dereference operator.

    It means:
    go to the address stored in ptr
    and change the value there.

    So:
    *ptr = 200 means x becomes 200
    */

    printf("X er value- %d\n", x);
    printf("X er value- %d", *ptr);

    /*
    x and *ptr are SAME memory location.

    So:
    if x changes → *ptr changes
    if *ptr changes → x changes
    */

    return 0;
}