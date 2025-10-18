#include <stdio.h>
#include "bubbleSort.h"


void printArray(int a[], int qnt)
{
    for(int i = 0; i < qnt; i++)
    {
        printf("%3d", a[i]);
    }
    puts("");
}

int main(void)
{
    int a[5] = {1, 4, 3, 2, 5};

    printArray(a, 5);
    bubbleSort(a,5);
    printArray(a,5);

    return 0;
}