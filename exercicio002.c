#include <stdio.h>
float RetornaDiametro (float raioCirc){
    float diametro;
    diametro = 2*raioCirc;
    return diametro;
}

float RetornaCircunferencia (float raioCirc){
    float circunferencia;
    circunferencia = (2*raioCirc)*3.141592;
    return circunferencia;
}

float RetornaArea (float raioCirc){
    float area;
    area = (raioCirc*raioCirc)*3.141592;
    return area;
}

void PrintTela (float raioc1, float raioc2){
    float area1, diametro1, circunferencia1, area2, diametro2, circunferencia2;
    printf("Raio: %.2f\n", raioc1);
    diametro1 = RetornaDiametro (raioc1);
    printf("Diâmetro: %.2f\n", diametro1);
    circunferencia1 = RetornaCircunferencia (raioc1);
    printf("Circunferência: %.2f\n", circunferencia1);
    area1 = RetornaArea (raioc1);
    printf("Área: %.2f\n\n", area1);
    //
    printf("Raio: %.2f\n", raioc2);
    diametro2 = RetornaDiametro (raioc2);
    printf("Diâmetro: %.2f\n", diametro2);
    circunferencia2 = RetornaCircunferencia (raioc2);
    printf("Circunferência: %.2f\n", circunferencia2);
    area2 = RetornaArea (raioc2);
    printf("Área: %.2f\n", area2);
    return;
}

int main(){
    float raio1, raio2;
    scanf("%f %f", &raio1, &raio2);
    PrintTela(raio1, raio2);
    return 0;
}