#include <stdio.h>
#include <math.h>

void expressao(int input)
{
    double S = 0;
    
    for (int i = 1; i <= 25; i++)
    {
        S = S + pow(input, i)/(52-(2*i));
    }
    
    printf("S = %.2f", S);
}

int main()
{
    int input;
    scanf("%d", &input);
    
    expressao(input);
    
    return 0;
}