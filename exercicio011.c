#include <stdio.h>

void intervalo(int n1, int n2){
    if (n1 <= n2){
        while (n1 <= n2){
            printf("%d ", n1++);
        }
    }
    else {
        while (n2 <= n1){
            printf("%d ", n2++);
        }
    }
}

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    intervalo (num1, num2);
    
    return 0;
}