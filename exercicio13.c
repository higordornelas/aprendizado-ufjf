#include <stdio.h>

void multiplos(int n1, int n2, int x)
{
    int i;
    if(n1 > 0)
    {
        for(i = x; i >= n1 && i<= n2; i+=x)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for(i = n1; i >= n1 && i<= n2; i+=x)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int n1, n2, x;
    
    scanf("%d %d %d", &n1, &n2, &x);
    multiplos(n1, n2, x);
    
    return 0;
}