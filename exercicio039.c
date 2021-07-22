#include <stdio.h>

int main()
{

    int gramasPorcao[5] = {300, 1500, 600, 1000, 150};
    int numPorcoes, total, i;
    total = 0;
    
    for (i = 0; i < 5; ++i)
    {
        scanf("%d", &numPorcoes);
        total += numPorcoes * gramasPorcao[i];
    }

    total += 225;

    printf("%d\n", total);


    return 0;

}