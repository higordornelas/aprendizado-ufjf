#include <stdio.h>
void ValorFinal (float kwtotal){
    float valor;
    valor = (kwtotal*0.618)*1.18;
    printf("R$%.2f", valor);
    return;
}

int main(){
    float quilowatt;
    scanf("%f", &quilowatt);
    ValorFinal(quilowatt);
    return 0;
}