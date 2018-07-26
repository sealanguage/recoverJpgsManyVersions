#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>


int main (void)
{
    int* x;
    int* y;

    x = malloc(sizeof(int));
    y = malloc(sizeof(int));

    *x = 1;
    *y = 2;

    y = x;


}


