#include <stdio.h>

void recebePreco(float preco) {
    
    int idade;
    
    scanf("%d", &idade);
    
    while(idade >=0) {
        float valorComDesconto = preco - ((preco/100)*idade);
        
        printf("%.2f", valorComDesconto);
        
        if (preco - valorComDesconto > 15) {
            printf(" ANEXAR COPIA DA RECEITA MEDICA");
        }
        
        printf("\n");
        scanf("%d", &idade);
    }
}

int main()
{
    float preco;
    
    scanf("%f", &preco);
    recebePreco(preco);
    
    return 0;
}