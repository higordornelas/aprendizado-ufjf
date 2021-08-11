#include <stdio.h>
#include <string.h>
#define TAM 100

int temDesconto(char nomeCompleto[], char nomePers[])
{
    int tamA = strlen(nomePers)-1;
    int tamB = strlen(nomeCompleto)-1;
    int i,j, desconto;
    
    for(i = 0; i <= (tamB - tamA); i++)
    {
        for(j = i; j < (i + tamA); j++)
        {
            desconto = 1;
            if(nomeCompleto[j] != nomePers[j-i])
            {
                desconto = 0;
                break;
            }
        }
        
        if (desconto == 1)
            break;
    }
    
    return desconto;
}

float calculaPreco(char nomePers[])
{
    float preco;
    int idade, desconto;
    char nomeCompleto[TAM];
    
    scanf("%[^\n]s", nomeCompleto);
    scanf("%d%*c", &idade);
    desconto = temDesconto(nomeCompleto, nomePers);
    
    if (desconto == 1)
    {
        preco = 30.00;
    }
    
    else if (idade > 18 && idade < 65)
    preco = 75.00;
    
    else if (idade <= 18 || idade >= 65)
    preco = 37.50;
    
    return preco;
}

int main()
{
    char nomePers[TAM];
    int numIngressos;
    float valorArrecadado = 0;
    
    scanf("%[^\n]s", nomePers);
    scanf("%d%*c", &numIngressos);
    
    for(int i = 0; i < numIngressos; i++)
        valorArrecadado += calculaPreco(nomePers);
    
    printf("Valor arrecadado total: R$%.2f", valorArrecadado);

    return 0;
}