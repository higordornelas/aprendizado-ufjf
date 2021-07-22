#include <stdio.h>
void preenche(int origem[], int destino[], int val)
{
    int i;
    destino[9] = 100;
    
    for (i = 0; i <= val; i++)
    {
        destino[i] = origem[i];
        printf("%d ", destino[i]);
    }
    
    for (i = val+1; i < 9; i++)
    {
        destino[i] = origem[i+1];
        printf("%d ", destino[i]);
    }
    
    printf("%d", destino[9]);

    return;
}

int main()
{
    int origem[10], destino[10];
    int i, val;
    
    for (i = 0; i < 10; i++)
    {
        origem[i] = i;
    }
    
    while((val < 0) || (val > 8))
    {
        scanf("%d", &val);
    }
    
    preenche(origem, destino, val);

    return 0;
}