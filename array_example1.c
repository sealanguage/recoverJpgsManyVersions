#include <stdio.h>
#include <stdlib.h>

int *getArray(int size) {
    int *a = malloc(size * sizeof *a);
    for (int i = 0; i < size; i++)
        a[i] = i * 2;
    return a;
}

void printArray(const int *a, int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);
    putchar('\n');
}

int main() {
    int *a = getArray(10);
    printArray(a, 10);
    free(a);  // remember to free the memory
    return 0;
}