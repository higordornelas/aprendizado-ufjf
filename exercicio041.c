#include <stdio.h>
#define TAM 500

int retornaVezes(char strA[], char caractere)
{
    int numVezes = 0;
    
    for(int i=0; strA[i] != '\0'; i++)
    {
        if(strA[i] == caractere)
        {
            numVezes++;
        }
    }

    return numVezes;
}

int main()
{
    char strA[TAM], caractere;
    int numVezes;
    
    scanf("%[^\n]s", strA);
    scanf("%*c%c", &caractere);
    
    numVezes = retornaVezes(strA, caractere);
    printf("%d", numVezes);
    
    return 0;
}