#include <stdio.h>
#include <math.h>

float TOPUS(float D, float R, float U)
{
    float x, p;
    x = (U-R)/(D-R);
    

    if(D - R == 0)
    {
        p = U;
    }
        
    else if(x < 0 || x > 1)
    {
        p = D;
    }
    
    else
    {
        p = 2 * pow(x, 4) - 3 * pow(x, 3) + 2 * x;
    }
    
    return p;
}

int main()
{
    float D, R, U;
    
    scanf("%f", &D);
    scanf("%f", &R);
    scanf("%f", &U);
    printf("%.5f", TOPUS(D, R, U));

    return 0;
}