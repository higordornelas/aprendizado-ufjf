#include <stdio.h>

void parOuImpar(int x) {
    if (x % 2 == 0) {
        printf("par");
    }
    else {
        printf("impar");
    }
    
    return;
}

int main() {
    int x;

    scanf("%d", &x);
        
    if ((x >= 0) || (x <= 0)) {
        parOuImpar(x);
    }
    else {
        printf("Invalido");
    }
    
    return 0;
}