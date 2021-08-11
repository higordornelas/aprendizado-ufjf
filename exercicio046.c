#include <stdio.h>
#define M 4
#define N 3

void lematriz(int matriz[M][N], int linhas, int colunas)
{
    for(int i = 0; i < linhas; i++)
        for(int j = 0; j < colunas; j++)
            scanf("%d", &matriz[i][j]);
}

void copiazera(int A[M][N], int B[M][N], int linhas, int colunas)
{
    for(int i = 0; i < linhas; i++)
        for(int j = 0; j < colunas; j++)
            A[i][j] = B[i][j];
            
    for(int i = 0; i < linhas; i++)
        for(int j = 0; j < colunas; j++)
            B[i][j] = 0;
}

void imprimematriz(int matriz[M][N], int linhas, int colunas)
{
    for(int i = 0; i < linhas; i++)
    {
        for(int j = 0; j < colunas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        
        printf("\n");
    }
}

int main()
{
  int A[M][N], B[M][N];
  
  //Leitura: Matrizes A & B
  lematriz(A, M, N);
  lematriz(B, M, N);
  
  //Matriz A "recebe" B e B é zerada
  copiazera(A, B, M, N);
  
  //Impressão: Matriz A
  printf("Matriz A:\n");
  imprimematriz(A, M, N);
  
  //Impressão: Matriz B
  printf("\nMatriz B:\n");
  imprimematriz(B, M, N);
  
  return 0;
}