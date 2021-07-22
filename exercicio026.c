#include <stdio.h>

float calculaValor(float numPasteis, float custoSabor)
{
    float valorPago;
    
    valorPago = numPasteis * custoSabor;
    
    if (valorPago > 20.00)
    {
        valorPago = valorPago * 0.95;
        printf("Valor a pagar: R$%.2f ", valorPago);
        printf("Valor Promocional!");
        printf("\n");
    }
    
    else
    {
        printf("Valor a pagar: R$%.2f", valorPago);
        printf("\n");
    }
    
    return valorPago;
}

int main()
{
    int numClientes, numPasteis, i;
    float custoSabor;
    char sabor;
    
    scanf("%d", &numClientes);
    for (i = 0; i < numClientes; i++)
    {
        scanf("%d", &numPasteis);
        scanf("%*c%c", &sabor);
        
        switch (sabor)
        {
            case 'Q': 
            {
            custoSabor = 5.25;
            break;
            }
            case 'F': 
            {
            custoSabor = 6.75;
            break;
            }
            case 'C': 
            {
            custoSabor = 6.99;
            break;
            }
        }
        calculaValor(numPasteis, custoSabor);
    }

    return 0;
}