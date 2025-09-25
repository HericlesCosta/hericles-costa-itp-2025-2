#include <stdio.h>

int main() {

    int sugestoes[10];

    int visitados[10] = {0};

    printf("Digite as 10 sugestões dos nativos (da ilha 0 a 9):\n");


    for (int i = 0; i < 10; i++) {

        printf("Sugestão para a ilha %d: ", i);
        scanf("%d", &sugestoes[i]);
    }

    printf("\nMapa de sugestões lido:\n[ ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", sugestoes[i]);
    }
    printf("]\n\n");

    int ilha_atual = 0;

    while (1) {
        if (visitados[ilha_atual] == 1) {
            printf("A primeira ilha a ser visitada duas vezes é a: %d\n", ilha_atual);
            break;
        }

        visitados[ilha_atual] = 1;

        ilha_atual = sugestoes[ilha_atual];
    }

    return 0;
}