#include <stdio.h>

int main()
{
    int vetor[20], i, num, menor;
    menor = 0;
    
    for (i=0; i<20; i++)
    {
        scanf("%d", &num);
        vetor[i]= num;
    }
    i = 0;
    do
    {
        if (vetor[i] < vetor[menor])
        {
             vetor[menor] = vetor[i];
             menor = i;
        }
        i++;
    } while (i < 20);
    
    printf("Menor: %d\n", vetor[menor]);
    printf("Índice: %d\n", menor);

    return 0;
}