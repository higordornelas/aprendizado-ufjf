#include <stdio.h>
#include <string.h>
#define TAM 1000

int retornaEspacos(char str[])
{
    int espacos = 0;
    
    for(int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        espacos++;
    }
    
    return espacos;
}

int main()
{
    char str[TAM];
    
    fgets(str, TAM, stdin);
    printf("%d", retornaEspacos(str));

    return 0;
}