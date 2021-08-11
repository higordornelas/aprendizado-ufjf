#include <stdio.h>
#define TAM 3
void leMatriz(float A[3][3])
{
    for(int i=0; i<TAM; i++)
        for(int j=0; j<TAM; j++)
            scanf("%f", &A[i][j]);
}

void transposta(float A[3][3], float B[3][3])
{
    for(int i=0; i<TAM; i++)
        for(int j=0; j<TAM; j++)
            B[i][j] = A[j][i];
}

int main()
{
    float A[TAM][TAM], B[TAM][TAM];
    int i, j;
    leMatriz(A);
    transposta(A, B);
    
    for(i=0; i<TAM; i++)
    {
        for(j=0; j<TAM; j++)
        {
            B[i][j] = A[j][i];
                printf("%.1f ", B[i][j]);
        }
        
        printf("\n");
    }

    return 0;
}