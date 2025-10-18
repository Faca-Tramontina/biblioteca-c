#include <stdio.h>

int particiona(int v[], int inicio, int fim)
{
    int pivo = (v[inicio] + v[fim] + v[(inicio + fim)/2])/ 3;
    while(inicio < fim)
    {
        while(inicio < fim && v[inicio] <= pivo)
        {
            inicio++;
        }
        while(inicio < fim && v[fim] > pivo)
        {
            fim = fim-1;
        }
        int aux = v[inicio];
        v[inicio] = v[fim];
        v[fim] = aux;
    }
    return inicio;
}

void quickSort(int a[], int inicio, int fim)
{
    if(inicio < fim)
    {
        int meio = particiona(a,inicio, fim);
        quickSort(a,inicio,meio-1);
        quickSort(a,meio, fim);
    }
}