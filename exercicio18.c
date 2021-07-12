#include <stdio.h>
 
float fatorial(int input)
{
    int fat = 1;
    
    for  (int i = 1; i <= input; i++)
    {
        fat = fat * i;
    }
    
    return fat;
}

void expressao(int input)
{
    float E = 1;
    
    for (int i = 1; i <= input; i++)
    {
        E = E + 1/fatorial(i);
    }
    
    printf("E = %f", E);
}

int main()
{
    int input;
    scanf("%d", &input);
    
    expressao(input);
    
    return 0;
}