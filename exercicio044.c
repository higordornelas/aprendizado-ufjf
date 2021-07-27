#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 1000

void concatenacao(char strA[], char strB[], int tamanhoMax)
{
    strcat(strA, strB);
    // tamanhoMax passado como parametro pois a questao pediu, mas desnecessario.
}

int main()
{
    int tamanhoMax, tamA, tamB;
    char strA[TAM], strB[TAM];
    
    scanf("%d%*c", &tamanhoMax);
    
    fgets(strA, TAM, stdin);
    tamA = strlen(strA);
    strA[tamA-1] = '\0';
    
    fgets(strB, TAM, stdin);
    tamB = strlen(strB);
    strB[tamB-1] = '\0';
    
    concatenacao(strA, strB, tamanhoMax);
    
    if (strlen(strA) < tamanhoMax) tamanhoMax = strlen(strA);
    
    for(int i = 0; i < tamanhoMax; i++)
    {
        printf("%c", strA[i]);
    }

    return 0;
}