#include <stdio.h>

int main()
{
    int ar[5] = {10, 20, 30, 40, 50};

    /*
    ar is an array of integers.
    It stores values in continuous memory locations.
    */

    // printf("0th index er addresss - %p\n", &ar[0]);
    // printf("0th index er address - %p\n", ar);

    /*
    ar[0] → value at index 0 → 10
    */
    printf("0th index er value - %d\n", ar[0]);

    /*
    *ar means:
    ar → address of first element
    *ar → value at that address → ar[0]
    */
    printf("0th index er value - %d\n", *ar);

    /*
    ar[1] → value at index 1 → 20
    */
    printf("1st index er value - %d\n", ar[1]);

    /*
    *(ar + 1) means:
    - move 1 step forward from base address
    - then dereference it
    So it gives ar[1]
    */
    printf("1st index er value - %d\n", *(ar + 1));

    /*
    Same as above:
    *(ar + 1) → 20
    */
    printf("%d\n", *(ar + 1));

    /*
    Pointer arithmetic is commutative:
    (ar + 1) == (1 + ar)

    So:
    *(1 + ar) → same as ar[1]
    */
    printf("%d\n", *(1 + ar));

    /*
    ar[1] internally becomes:
    *(ar + 1)
    */
    printf("%d\n", ar[1]);

    /*
    Strange but valid C syntax:

    1[ar] → *(1 + ar)
           → ar[1]

    Because C defines:
    a[b] = *(a + b)
    */
    printf("%d\n", 1 [ar]);

    return 0;
}