#include <stdio.h>
void calcularResultado(int p[], int n[], int r[])
{
    int i;
    int limite = 10;
    int limiteResultado = 3;
    
    for (i = 0; i < limite; i++)
    {
        if (p[i] == 1)
        {
            r[0] += n[i];
        }
        
        if (p[i] == 2)
        {
            r[1] += n[i];
        }
        
        if (p[i] == 3)
        {
            r[2] += n[i];
        }
    }
    
    for (i = 0; i < limiteResultado; i++)
    {
        printf("%d ", r[i]);
    }

    return;
}

int main()
{
    int p[10], n[10], r[3] = {0,0,0};
    int i;
    
    for (i = 0; i < 10; i++)
    {
        printf("Digite o planejamento: ");
        scanf("%d", &p[i]);
        
        printf("Digite o nivel: ");
        scanf("%d", &n[i]);
    }

    calcularResultado(p, n, r);

    return 0;
}