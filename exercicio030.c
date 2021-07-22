#include <stdio.h>

int main()
{
    int codigo;
    
    scanf("%d", &codigo);
    if ((codigo > 0) && (codigo <= 20))
    {
        printf("Europa");
    }
    else if ((codigo > 20) && (codigo <= 40))
    {
        printf("Ásia");
    }
    else if ((codigo > 40) && (codigo <= 60))
    {
        printf("América");
    }
    else if ((codigo > 60) && (codigo <= 80))
    {
        printf("África");
    }
    else if (codigo > 80)
    {
        printf("Paraguai");
    }
    else
    {
        printf("Código Inválido");
    }

    return 0;
}