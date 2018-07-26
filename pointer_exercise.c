#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>


int main (void)
{
    int* x;
    int* y;

    // int *a = malloc(size * sizeof *a);
    x = malloc(sizeof(int));
    y = malloc(sizeof(int));

    *x = 1;
    *y = 2;

    x = y;

    printf("value of x = %d, value of y = %d\n", *x, *y);

    free(y);  // remember to free the memory
    free(x);  // remember to free the memory

    return 0;
}


