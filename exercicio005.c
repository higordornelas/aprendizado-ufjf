#include <stdio.h>

int main(){
    float x, y, z;
    scanf("%f %f %f", &x, &y, &z);
    if ((x < y + z) && (y < x + z) && (z < x + y)) {
        printf("Os valores formam os lados de um triângulo.");
    }
    else {
        printf("Os valores não formam os lados de um triângulo.");
    }
    return 0;
}