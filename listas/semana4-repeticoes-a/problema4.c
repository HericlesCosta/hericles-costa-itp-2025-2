// JOGO DE DARDOS

#include <stdio.h>
#include <math.h>

int main() {

    float x_atual, y_atual, x_anterior, y_anterior;
    int pontuacaoTotal = 0;

    printf("Digite as coordenadas dos lançamentos de 10 dardos (X e Y): ");

    for (int i = 0; i < 10; i++){

        scanf("%f %f", &x_atual, &y_atual);

        float dist_centro = sqrt(pow(x_atual, 2) + pow(y_atual, 2));

        if (dist_centro <= 1){
            pontuacaoTotal += 10;
        } else if (dist_centro <= 2){
            pontuacaoTotal += 6;
        } else if (dist_centro <= 3){
            pontuacaoTotal += 4;
        }

        if (i > 0){
            float dist_anterior = sqrt(pow((x_atual - x_anterior), 2) + pow((y_atual - y_anterior), 2));

            if (dist_anterior < 1){
                pontuacaoTotal += 5;
            } else if (dist_anterior < 2){
                pontuacaoTotal += 3;
            } else if (dist_anterior < 3){
                pontuacaoTotal += 2;
            }
        }

        x_anterior = x_atual;
        y_anterior = y_atual;

    }

    printf("A pontuação final, após os 10 lançamentos, foi de: %d.\n", pontuacaoTotal);

    return 0;
}