#include <stdio.h>

int main()
{
    float vetor[10];
    float escalar;
    int i;
    
    scanf("%f", &escalar);
    
    for (i = 0; i < 10; i++)
    {
        scanf("%f", &vetor[i]);
    }
    
    for (i = 0; i < 10; i++)
    {
        printf("%.2f\n", vetor[i] * escalar);
    }

    return 0;
}