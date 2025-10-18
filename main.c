#include <stdio.h>
#include "quickSort.h"
#define SIZE 8

void printArray(int a[])
{
    for(int i = 0; i < SIZE; i++)
    {
        printf("%3d", a[i]);
    }
    puts("");
}

int main(void)
{
    int a[SIZE] = {1, 4, 3, 5, 7, 2, 6, 10};
    int inicio = 0;
    int fim = SIZE - 1;

    printArray(a);
    quickSort(a,inicio,fim);
    printArray(a);

    return 0;
}