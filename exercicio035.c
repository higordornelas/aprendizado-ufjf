#include <stdio.h>
void imprimePeso(float pesoMin, float pesoMax)
{
    float pesoReal, somaPeso;
    
    do
    {
        scanf("%f", &pesoReal);
        if((pesoReal < pesoMin || pesoReal > pesoMax) && pesoReal > 0)
        {
            somaPeso+= pesoReal;
        }
    } while(pesoReal > 0);
    
    printf("Peso Total: %.2f", somaPeso);
    return;
}

int main()
{
    float pesoMinimo, pesoMaximo;
    
    scanf("%f", &pesoMinimo);
    scanf("%f", &pesoMaximo);
    imprimePeso(pesoMinimo, pesoMaximo);

    return 0;
}