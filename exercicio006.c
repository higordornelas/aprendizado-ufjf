#include <stdio.h>

void nota(float x) {
    if ((x >= 60) && (x <= 100.0)) {
        printf("APROVADO");
    }
    
    else if ((x < 60) && (x >= 0)){
        printf("REPROVADO");
    }
    else {
        printf("NOTA INVÁLIDA");
    }
    
    return;
}

int main() {
    float x;
    scanf("%f", &x);
    nota(x);
    return 0;
}