#include <stdio.h>

int main() {

    float preco, custo;

    int leveX = 0, pagueY = 0;
    float maior_razao = 0;

    printf("Digite o preço de venda e o custo de produção: ");
    scanf("%f %f", &preco, &custo);

    for (int x = 1; x <= 10; x++){
        for (int y = 0; y < x; y++){
            if ((y * preco) >= (x * custo)){
                float razao_atual = 0;

                if (y > 0){
                    razao_atual = (float)x / y;
                } else {
                    razao_atual = 999;
                }

                if (razao_atual > maior_razao){
                    maior_razao = razao_atual;
                    leveX = x;
                    pagueY = y;
                }
                
            }
        }
    }

    if (maior_razao > 0){
        printf("A melhor promocao é: leve %d pague %d\n", leveX, pagueY);
    } else {
        printf("Nenhuma promoção possível\n");
    }

    return 0;
}