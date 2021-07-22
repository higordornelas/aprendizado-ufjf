#include <stdio.h>

int main()
{
    int andar[3], a1, a2, a3;
    
    scanf("%d %d %d", &a1, &a2, &a3);
    
    andar[0] = 2 * a2 + 4 * a3;
    andar[1] = 2 * a1 + 2 * a3;
    andar[2] = 2 * a2 + 4 * a1;
    
    if (andar[0] <= andar[1] && andar[0] <= andar[2])
    {
        printf("%d\n", andar[0]);
    }
    
    else if (andar[1] <= andar[0] && andar[1] <= andar[2])
    {
        printf("%d\n", andar[1]);
    }

    else
    {
        printf("%d\n", andar[2]);
    }
    
    return 0;
}