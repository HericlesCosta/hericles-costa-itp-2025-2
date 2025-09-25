#include <stdio.h>

int main() {

    float forn1, forn2, quantia_disp;

    printf("Digite o preço do primeiro e do segundo fornecedor e a quantia disponível: ");
    scanf("%f %f %f", &forn1, &forn2, &quantia_disp);

    if (quantia_disp < 0){
        printf("Quantia indisponíve\n");
    }
    
    for (int quantidade1 = 0; quantidade1 <= 10; quantidade1++){
        for (int quantidade2 = 0; quantidade2 <= 10; quantidade2++){
            float total = (quantidade1 * forn1) + (quantidade2 * forn2);

            if (total <= quantia_disp){
                float resto = quantia_disp - total;
                printf("Comprando %d do primeiro e %d do segundo resta: %.2f\n", quantidade1, quantidade2, resto);
            }
        }
    }

    return 0;
}