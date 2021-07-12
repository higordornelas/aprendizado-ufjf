#include <stdio.h>

void calcula(float n1, float n2, int code){
    switch (code){
        case 1: printf("Resultado da soma: %.2f", n1+n2);
        break;
        case 2: printf("Resultado da multiplicação: %.2f", n1*n2);
        break;
        case 3:
            if (n2 == 0){
            printf("Divisão por zero!");
            break;
    }
            else { printf("Resultado da divisão: %.2f", n1/n2);
            break;
    }
        default: printf("Código inválido!");
        break;
    }
    return;
}

int main(){
    float n1, n2;
    int code;
    scanf("%f %f %d", &n1, &n2, &code);
    calcula (n1, n2, code);
    return 0;
}