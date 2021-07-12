#include <stdio.h>
void NumNotas (int valor){
    int cem, cinquenta, vinte, dez, cinco, dois, um, resto1, resto2, resto3, resto4, resto5;
    cem = valor / 100;
    resto1 = valor % 100;
    cinquenta = resto1 / 50;
    resto2 = resto1 % 50;
    vinte = resto2 / 20;
    resto3 = resto2 % 20;
    dez = resto3 / 10;
    resto4 = resto3 % 10;
    cinco = resto4 / 5;
    resto5 = resto4 % 5;
    dois = resto5 / 2;
    um = resto5 % 2;
    printf("%d\n", valor);
    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cinquenta);
    printf("%d nota(s) de R$ 20,00\n", vinte);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d nota(s) de R$ 1,00\n", um);
    return;
}

int main(){
    int valor;
    scanf("%d", &valor);
    NumNotas(valor);
    return 0;
}