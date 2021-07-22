#include <stdio.h>
int calculaAuxilio(int pessoas[], float rendas[], int numFamilias)
{
    int i;
    int familiasBeneficiadas = 0;
    float pagamentos[100];
    
    // tem direito se a renda per capta for até 522.50
    // ou renda total até 3135.00
    
    for (i = 0; i < numFamilias; i++)
    {
        if (rendas[i] / pessoas[i] <= 522.50 || rendas[i] <= 3135.00)
        {
            familiasBeneficiadas++;
            pagamentos[i] = 1200 + (500 * pessoas[i]);
            
            if (pagamentos[i] > 3500)
            {
                pagamentos[i] = 3500;
            }
        }
    }

    return familiasBeneficiadas;
}

int main()
{
    int pessoas[100], i, numFamilias;
    float rendas[100];
    
    scanf("%d", &numFamilias);
    
    for (i = 0; i < numFamilias; i++)
    {
        //printf("Digite o número de pessoas na família: ");
        scanf("%d", &pessoas[i]);
        
        //printf("Digite a renda da família: ");
        scanf("%f", &rendas[i]);
    }

    printf("Número de famílias que receberam o auxilio: %d", calculaAuxilio(pessoas, rendas, numFamilias));

    return 0;
}