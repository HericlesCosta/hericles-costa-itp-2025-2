// SALVE O HOMEM ARANHA

#include <stdio.h>
#include <math.h>

int main() {

    float aranhaX, aranhaY, max_comprimento, ax, ay;
    int quantidade_alvos;
    
    printf("Informe a coordenada inicial do Homem Aranha (X e Y): ");
    scanf("%f %f", &aranhaX, &aranhaY);

    printf("Informe o comprimento máximo de lançamento das teias: ");
    scanf("%f", &max_comprimento);

    printf("Informe o número de alvos: ");
    scanf("%d", &quantidade_alvos);
    
    if (quantidade_alvos <= 0) {
        printf("Número de alvos inválido.\n");
        return 1;
    }

    int pode_salvar = 1;
    printf("Informe as coordenadas de cada alvo, de dois em dois, para X e Y: ");
    for (int i = 0; i < quantidade_alvos; i++){

        scanf("%f %f", &ax, &ay);
        float distancia = sqrt(pow((ax - aranhaX), 2) + pow((ay - aranhaY), 2));
        
        if (distancia <= max_comprimento) {
            aranhaX = 2 * ax - aranhaX;
        } else {
            pode_salvar = 0;
        }
    }

    if (pode_salvar) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}