#include <stdio.h>
#define TAM 10

void calculaPontuacao(int vitorias[], int empates[], int pontuacao[])
{
    int i, j, k, auxiliar, auxiliarIndice, indices[TAM];
    
    for (i = 0; i < TAM; i++)
    {
        indices[i] = i+1;
    }
    
    for (i = 0; i < TAM; i++)
    {
        pontuacao[i] = vitorias[i]*3 + empates[i];
        printf("%d\n", pontuacao[i]);
    }
    
    for (j = TAM-1; j > 0; j--)
    {
        for (k = 0; k < j; k++)
        {
            if (pontuacao[k] > pontuacao[k+1])
            {
                auxiliar = pontuacao[k];
                pontuacao[k] = pontuacao[k+1];
                pontuacao[k+1] = auxiliar;
                
                auxiliarIndice = indices[k];
                indices[k] = indices[k+1];
                indices[k+1] = auxiliarIndice;
            }
        }
    }

    printf("%d\n", indices[0]);
    printf("%d\n", indices[1]);

    return;
}

int main()
{
    int vit[TAM], emp[TAM], pont[TAM] = {0};
    int i;
    
    for (i = 0; i < TAM; i++)
    {
        scanf("%d", &vit[i]);
    }
    
    for (i = 0; i < TAM; i++)
    {
        scanf("%d", &emp[i]);
    }

    calculaPontuacao(vit, emp, pont);

    return 0;
}