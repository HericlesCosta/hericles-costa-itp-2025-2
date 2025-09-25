#include <stdio.h>

int main() {

    printf("Digite o número de terrenos: ");
    int n;
    scanf("%d", &n);

    int terrenos[n];
    int altura_maxima = 0;

    printf("Digite as alturas dos terrenos:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &terrenos[i]);
        if (terrenos[i] > altura_maxima) {
            altura_maxima = terrenos[i];
        }
    }

    int indice1 = -1;
    int indice2 = -1;
    
    for (int i = 0; i < n; i++) {
        if (terrenos[i] == altura_maxima) {
            if (indice1 == -1) {
                indice1 = i;
            } else {
                indice2 = i;
                break;
            }
        }
    }

    int comprimento = indice2 - indice1 - 1; 

    printf("%d\n", comprimento);

    return 0;
}