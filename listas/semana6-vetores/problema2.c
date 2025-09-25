#include <stdio.h>

int main() {

    int m, n;

    printf("Digite o tamanho da coleção: ");
    scanf("%d", &m);

    int coleção[m];

    printf("Digite quantas figurinhas você possui: ");
    scanf("%d", &n);

    printf("Digite os números das figurinhas que você possui: ");

    for (int i = 0; i < n; i++) {
        int figurinha;
        scanf("%d", &figurinha);
        coleção[figurinha - 1] = 1;
    }

    printf("Figurinhas que faltam:\n");

    for (int i = 0; i < m; i++) {
        if (coleção[i] != 1) {
            printf("%d ", i + 1);
        }
    }

    printf("\n");

    return 0;
}