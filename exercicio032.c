#include <stdio.h>

int removeDup(int uni[20], int n)
{
    int temp[20], i;
    int j = 0;
    
    if(n==0 || n==1)
    {
        return n;
    }

    for(i = 0; i < n-1; i++)
    {
        if(uni[i] != uni[i+1])
        {
            temp[j++] = uni[i];
        }
    }
    temp[j++] = uni[n-1];

    for(i = 0; i < j; i++)
    {
        uni[i] = temp[i];
    }

    return j;
}

void inters(int v1[10], int v2[10], int inter[10], int tamAB)
{
    int contInt=0, aux;
    int j = 0;

    for(int i = 0; i < tamAB; i++)
    {
        for(int j = 0; j < tamAB; j++)
        {
            if(v1[i] == v2[j])
            {
                inter[contInt] = v2[j];
                contInt++;
            }
        }
    }
    
    for(int i = 0; i < contInt; i++)
    {
        for(j = 0; j < contInt; j++)
        {
            if(inter[i] < inter[j] && i > j)
            {
                aux = inter[i];
                inter[i] = inter[j];
                inter[j] = aux;
            }
        }
        j=0;
    }

    
    printf("A intersecao dos dois conjuntos eh:\n");
    for(int i = 0; i < contInt; i++)
    {
        printf("%d ", inter[i]);
    }
}

void uniao(int v1[10], int v2[10], int uni[20], int tamAB)
{
     int i = 0;
     int j = 0;
     int contUni = 0;
     int contRep = 0;
     int aux;

    for(int i = 0; i < tamAB; i++)
    {
        uni[contUni] = v1[i];
        contUni++;
    }
    
    for(int i = 0; i < tamAB; i++)
    {
        uni[contUni] = v2[i];
        contUni++;
    }
    
    for(i = 0; i < 20; i++)
    {
        for(j = 0; j < 20; j++)
        {
            if(uni[i] < uni[j] && i > j)
            {
                aux = uni[i];
                uni[i] = uni[j];
                uni[j] = aux;
            }
        }
        j=0;
    }
    
    for(i = 0; i < 20; i++)
    {
        for(j = 0; j < 20; j++)
        {
            if(uni[i] == uni[j] && i != j)
            {
                contRep++;
            }
        }
        j = 0;
    }
     contRep = contRep/2;
    
    removeDup(uni, 20);


    printf("\nA uniao dos dois conjuntos eh:\n");
    for(int i = 0; i < contUni-contRep; i++)
    {
        printf("%d ", uni[i]);
    }   
}

int main()
{
    int v1[10], v2[10], vInter[10], vUniao[20], tamAB = 10;
    
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &v1[i]);
    }
    
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &v2[i]);
    }
    
    for(int i = 0; i < 10; i++)
    {
        vInter[i]=0;
    }
    
    for(int i = 0; i < 20; i++)
    {
        vUniao[i]=0;
    }
    
    inters(v1, v2, vInter, tamAB);
    uniao(v1, v2, vUniao, tamAB);

    return 0;
}