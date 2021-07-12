#include <stdio.h>

void somaIntervalo(int num1, int num2)
{
    int soma = 0;
    int cont = num1;
    
    while ((cont >= num1) && (cont <= num2))
    {
        soma = soma + cont;
        cont++;
    }
    printf("%d", soma);
}

int main()
{
    int num1, num2, menor, maior;
    scanf("%d %d", &num1, &num2);
    if (num1 < num2)
    {
        menor = num1;
        maior = num2;
    }
    else
    {
        menor = num2;
        maior = num1;
    }
    somaIntervalo (menor, maior);
    
    return 0;
}