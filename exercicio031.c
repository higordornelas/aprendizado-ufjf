#include <stdio.h>
float retornaValor(int quantidade, float preco)
{
    float total = 0;
    total = quantidade * preco;

    return total;
}

int main()
{
    int quantidade = 1;
    float precoUnitario, total;
    
    while(quantidade > 0)
    {
        scanf("%d", &quantidade);
        if (quantidade > 0)
        {
            scanf("%f", &precoUnitario);
            total += retornaValor(quantidade, precoUnitario);
        }
    }
    printf("Total: R$%.2f.\n", total);
    
    return 0;
}