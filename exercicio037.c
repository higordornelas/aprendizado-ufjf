#include <stdio.h>
 
int main()
{
 
    while(1)
    {
    int h1, m1, h2, m2, minutosAtuais, minutosDespertador;
    
    scanf("%d", &h1);
    scanf("%d", &m1);
    scanf("%d", &h2);
    scanf("%d", &m2);

    if (h1==0 & m1==0 && h2==0 & m2==00)
    {
        break;
    }
    
    if (h1 > h2 || h1 == h2 && m1 > m2)
    {
        h2 += 24;
    }
    
    minutosAtuais = h1*60 + m1;
    minutosDespertador = h2*60 + m2;
    
    printf("%d\n", (minutosDespertador - minutosAtuais));
    }
    
    return 0;
}