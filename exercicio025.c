#include <stdio.h>

float novoPreco(float precoAtual, float vendaMedia)
{
    float novoP;
    
    if ((precoAtual < 30.00) && (vendaMedia < 500))
    {
        novoP = precoAtual * 1.10;
    }
    
    else if (((precoAtual >= 30.00) && (precoAtual < 80.00)) && ((vendaMedia >= 500) && (vendaMedia < 1200)))
    {
        novoP = precoAtual * 1.15;
    }
    
    else if ((precoAtual >= 80.00) && (vendaMedia >= 1200))
    {
        novoP = precoAtual * 0.8;
    }
    
    else
    {
        novoP = precoAtual;
    }
    
    return novoP;
}

int main()
{
    float pAtual, mediaMensal;
    
    scanf("%f", &pAtual);
    scanf("%f", &mediaMensal);
    printf("R$ %.2f\n", pAtual);
    printf("R$ %.2f", novoPreco(pAtual, mediaMensal));

    return 0;
}