#include <stdio.h>

int main() {

    float forn1, forn2, quantia_disp;
    float menor_resto;
    int melhorqtd1 = 0, melhorqtd2 = 0;

    printf("Digite o preço do primeiro e do segundo fornecedor e a quantia disponível: ");
    scanf("%f %f %f", &forn1, &forn2, &quantia_disp);

    
    if (quantia_disp < 0){
        printf("Quantia indisponível\n");
    }
    
    menor_resto = quantia_disp;

    for (int quantidade1 = 0; quantidade1 <= 10; quantidade1++){
        for (int quantidade2 = 0; quantidade2 <= 10; quantidade2++){
            float total = (quantidade1 * forn1) + (quantidade2 * forn2);

            if (total <= quantia_disp){
                float restoAtual = quantia_disp - total;
                
                if (restoAtual < menor_resto){
                    menor_resto = restoAtual;
                    melhorqtd1 = quantidade1;
                    melhorqtd2 = quantidade2;
                }
            }
        }
    }

    printf("Resta menos comprando %d do primeiro e %d do segundo\n", melhorqtd1, melhorqtd2);

    return 0;
}