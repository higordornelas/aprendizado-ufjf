#include <stdio.h>

int main()
{
    int x[10], i, num;
    
    for (i=0; i<10; i++)
    {
        scanf("%d", &num);
        if(num <= 0)
        {
            num = 1;
        }
        x[i]= num;
        printf("X[%d] = %d\n", i, x[i]);
    }

    return 0;
}