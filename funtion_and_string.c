#include <stdio.h>
#include <string.h>

void fun(char ar[])
{
    /*
    ar is a character array parameter.

    IMPORTANT CONCEPT:
    When passing array to function, it decays into pointer:

        char ar[]  →  char *ar

    So inside function:
        ar points to first character of string
    */

    /*
    strlen(ar):
    - counts number of characters in string
    - stops at '\0' (null terminator)

    Example:
        "Hello" → H e l l o \0
        length = 5
    */
    printf("%lu", strlen(ar));
}

int main()
{
    /*
    String stored in character array.
    Automatically ends with '\0'
    */
    char ar[20] = "Hello";

    /*
    Passing string to function:
    Only address of first character is passed
    NOT full array copy
    */
    fun(ar);

    return 0;
}