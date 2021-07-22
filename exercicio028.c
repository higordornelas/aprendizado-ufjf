#include <stdio.h>

void imprimeValor(float precoDoce, int numDoces)
{
    float ValorFinal;
    ValorFinal = precoDoce * numDoces;
    
    if (numDoces <= 5)
    {
        ValorFinal = ValorFinal * 0.95;
        printf("%d Doces - Preco: R$ %.2f (Desconto de 5%%)\n", numDoces, ValorFinal);
    }
    
    else
    {
        ValorFinal = ValorFinal * 0.92;
        printf("%d Doces - Preco: R$ %.2f (Desconto de 8%%)\n", numDoces, ValorFinal);
    }
}

int main()
{
    float preco;
    int quantidade = -1;
    
    scanf("%f", &preco);
    while(quantidade != 0)
    {
        scanf("%d", &quantidade);
        if (quantidade != 0)
        {
            imprimeValor(preco, quantidade);
        }
    }

    return 0;
}