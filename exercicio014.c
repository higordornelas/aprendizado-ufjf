#include <stdio.h>


int main()
{
    int cont, dependentes, idade;
    float valor;
    scanf("%d", &dependentes);
    {
        while (cont=1)
        {
            for (cont=1; cont<=dependentes; cont++)
            {
                scanf("%d", &idade);
                    if (idade < 18)
                    {
                        valor = valor+60;
                    }
            }
            printf("Valor total do auxilio: R$ %.2f\n", valor);
            valor = 0;
            cont=1;
            scanf("%d", &dependentes);
        }
    }
    
    return 0;
}