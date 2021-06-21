#include <stdio.h>

float calculaPesoIdealF (float altura){
    float pesoIdeal;
    pesoIdeal = (62.1 * altura) - 44.7;
    return pesoIdeal;
}

float calculaPesoIdealM (float altura){
    float pesoIdeal;
    pesoIdeal = (72.7 * altura) - 58;
    return pesoIdeal;
}

void ImprimePeso (float pesoR, float pesoIdealR){
    if (pesoR < pesoIdealR) {
        printf("PESO IDEAL: %.4f\n", pesoIdealR);
        printf("A pessoa esta abaixo do peso ideal.");
    }
    else if (pesoR > pesoIdealR) {
        printf("PESO IDEAL: %.4f\n", pesoIdealR);
        printf("A pessoa esta acima do peso ideal.");
    }
    else if (pesoR == pesoIdealR) {
        printf("PESO IDEAL: %.4f\n", pesoIdealR);
        printf("A pessoa esta no peso ideal.");
    }
    return;
}

int main(){
    char x;
    float altura, peso, pesoIdeal;
    scanf("%c %f %f", &x, &altura, &peso);
        switch (x) {
        case 'f': case 'F': pesoIdeal = calculaPesoIdealF (altura);
        ImprimePeso (peso, pesoIdeal);
        break;
        case 'm': case 'M': pesoIdeal = calculaPesoIdealM (altura);
        ImprimePeso (peso, pesoIdeal);
        break;
        default: printf("O calculo do peso nao e possivel!");
        break;
    }
    return 0;
}