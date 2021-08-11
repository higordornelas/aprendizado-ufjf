#include <stdio.h>
#define TAM 27

int main()
{
    float preco[TAM], totalGeral, totalDoPedido;
    int numPizzas, escolhaCliente, totalPorSabor[TAM]={0}, cont = 1, flag = 0;
    
    for(int i = 0; i < TAM; i++)
    {
        scanf("%f", &preco[i]);
    }
    
    for(int i = 0; i < TAM; i++)
    {
        if(preco[i] < 0)
        {
            printf("ERRO: Valor da pizza negativo!\n");
            flag = 1;
            break;
        }
    }
    
    while(numPizzas != 0 && flag == 0)
    {
        scanf("%d", &numPizzas);
        
        if(numPizzas < 0)
        {
            printf("ERRO: Quantidade negativa de pizzas!\n");
            flag = 1;
            break;
        }
        
        if(numPizzas > 0)
        {
            for(int i = 0; i < numPizzas; i++)
            {
                scanf("%d", &escolhaCliente);
                totalPorSabor[escolhaCliente-1]++;
                
                if(escolhaCliente <= 0 || escolhaCliente > 27)
                {
                    flag = 1;
                    break;
                }
                
                else
                {
                    totalDoPedido += (preco[escolhaCliente-1]);
                }
            }
            
            if(flag == 1)
            {
                printf("ERRO: Tipo de pizza invalido!\n");
                break;
            }
            
            else
            {
                printf("Total do pedido %d: R$%.2f\n", cont, totalDoPedido);
                totalGeral += totalDoPedido;
                cont++;
            }
        }
    
        totalDoPedido = 0;
    }
    
    if(flag == 0)
    {
        printf("Quantia total das vendas: R$%.2f\n", totalGeral);
    
        for(int i = 0; i < TAM; i++)
        {
            printf("Vendas da pizza %d: %d\n", i+1, totalPorSabor[i]);
        }
    }
    
    return 0;
}