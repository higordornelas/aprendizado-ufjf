#include <stdio.h>

void imprimeVetor(float p1[], float p2[], float p3[], int limite)
{
    int i;
    
    printf("Primeira prova:\n");
    for (i = 0; i < limite; i++)
    {
        printf("v[%d] = %.2f\n", i, p1[i]);
    }
    
    printf("\nSegunda prova:\n");
    for (i = 0; i < limite; i++)
    {
        printf("v[%d] = %.2f\n", i, p2[i]);
    }
    
    printf("\nTerceira prova:\n");
    for (i = 0; i < limite; i++)
    {
        printf("v[%d] = %.2f\n", i, p3[i]);
    }
}

void imprimeNotaFinal(float p1[], float p2[], float p3[], int limite)
{
    int i;
    
    printf("\nNotas finais\n");
    for (i = 0; i < limite; i++)
    {
        float media = ((p1[i] + p2[i] + (2 * p3[i])) / 4);
        printf("Aluno %d: %.2f\n", i, media);
    }
}

void imprimeMenor60(float p1[], float p2[], float p3[], int limite)
{
    int i;
    
    printf("\nProva 1\n");
    printf("Indices dos alunos com nota < 60\n");
    
    for (i = 0; i < limite; i++)
    {
        if (p1[i] < 60)
        {
            printf("%d\n", i);
        }
    }
    
    printf("\nProva 2\n");
    printf("Indices dos alunos com nota < 60\n");
    
    for (i = 0; i < limite; i++)
    {
        if (p2[i] < 60)
        {
            printf("%d\n", i);
        }
    }
    
    printf("\nProva 3\n");
    printf("Indices dos alunos com nota < 60\n");
    
    for (i = 0; i < limite; i++)
    {
        if (p3[i] < 60)
        {
            printf("%d\n", i);
        }
    }
}

void retornaMaior60(float p1[], float p2[], float p3[], int limite)
{
    int i;
    int indice1 = 0;
    int indice2 = 0;
    int indice3 = 0;
    
    for (i = 0; i < limite; i++)
    {
        if (p1[i] >= 60)
        {
            indice1++;
        }
    }
    
    for (i = 0; i < limite; i++)
    {
        if (p2[i] >= 60)
        {
            indice2++;
        }
    }
    
    for (i = 0; i < limite; i++)
    {
        if (p3[i] >= 60)
        {
            indice3++;
        }
    }
    
    printf("\n");
    printf("Total de notas maiores ou iguais a 60 em 'P1': %d\n\n", indice1);
    printf("Total de notas maiores ou iguais a 60 em 'P2': %d\n\n", indice2);
    printf("Total de notas maiores ou iguais a 60 em 'P3': %d\n\n", indice3);
}


int main()
{
    float p1[100], p2[100], p3[100];
    int i;
    int limite;
    int opcao;
    
    scanf("%d", &limite);
    
    for (i = 0; i < limite; i++)
    {
        scanf("%f", &p1[i]);
    }
   
    for (i = 0; i < limite; i++)
    {
        scanf("%f", &p2[i]);
    }
    
    for (i = 0; i < limite; i++)
    {
        scanf("%f", &p3[i]);
    }
    
    while(1)
    {
        scanf("%d", &opcao);
        
        switch(opcao)
        {
            case 2: 
                imprimeVetor(p1, p2, p3, limite);
                break;
            
            case 3:
                imprimeNotaFinal(p1, p2, p3, limite);
                break;
            
            case 4:
                imprimeMenor60(p1, p2, p3, limite);
                break;
                
            case 5:
                retornaMaior60(p1, p2, p3, limite);
                return 0;
            
            default:
                break;
        }
    }
    
    return 0;
}