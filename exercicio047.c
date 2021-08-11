#include <stdio.h>
#define TAM 3

void multiplica(float vetor[TAM], float matriz[TAM][TAM])
{
    float aux[TAM];
    
    for(int i = 0; i < TAM; i++)
    aux[i] = vetor[i];
    
    for(int i = 0; i < TAM; i++)
    {
        vetor[i] = 0;
        
        for(int j = 0; j < TAM; j++)
        {
            vetor[i] += aux[j] * (matriz[j][i]);
        }
    }
}

int main()
{
    float vetor[TAM], matriz[TAM][TAM];
  
    for(int i = 0; i < TAM; i++)
        scanf("%f", &vetor[i]);

    for(int i = 0; i < TAM; i++)
        for(int j = 0; j < TAM; j++)
            scanf("%f", &matriz[i][j]);
            
    multiplica(vetor, matriz);
    
    printf("Resultado = [ ");
    for(int i = 0; i < TAM; i++)
    {
        printf("%.1f ", vetor[i]);
    }
    printf("]");
  
    return 0;
}