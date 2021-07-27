#include <stdio.h>
#define TAM 50

void inverteImprime(char strA[], char strB[], int k)
{
    for(int i=0; i<k; i++)
    {
        if(strB[k-i-1] != '\0')
        {
            strA[i] = strB[k-i-1];
            printf("%c", strA[i]);
        }
    }
}

int main()
{
    char strA[TAM], strB[TAM];
    int k;
    
    scanf("%[^\n]s", strB);
    scanf("%d", &k);
    
    inverteImprime(strA, strB, k);
    
    return 0;
}