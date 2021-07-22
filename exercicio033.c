#include <stdio.h>
#include <stdlib.h>
#define MAX 5

void ordena (int vetor[], int tamanho)
{
    int i, j;
    int auxiliar;
    for (i = (tamanho-1); i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (vetor[j] > vetor[j+1])
            {
                auxiliar = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = auxiliar;
            }
        }
    }
    
    for(i = 0; i < tamanho; i++)
    {
        printf("%d\n", vetor[i]);
    }
}

int main()
{
    int vetor[MAX];
    
    for(int i = 0; i < MAX; i++)
    {
        scanf("%d", &vetor[i]);
    }
    
    ordena(vetor, MAX);

    return 0;
}