#include <stdio.h>

int main()
{
    int nota;
    scanf("%d", &nota);
    while ((nota >=0) && (nota <=100)){
            if (nota >=60){
                printf("Aprovado!\n");
                scanf("%d", &nota);
            }
            else{
                printf("Reprovado!\n");
                scanf("%d", &nota);
            }
        
    }
        return 0;
}