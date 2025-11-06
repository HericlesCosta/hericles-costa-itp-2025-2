#include <stdio.h>

int main() {

    int m, n, acertos = 0;

    printf("Digite 2 números, representando a quantidade de números sorteados e apostados: ");
    scanf("%d %d", &m, &n);

    int sorteados[m], apostas[n];

    printf("Digite os números sorteados: ");
    for (int i = 0; i < m; i++){
        scanf("%d", &sorteados[i]);
    }

    printf("Digite os números da aposta: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &apostas[i]);
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (sorteados[j] == apostas[i]){
                acertos++;
            }
        }
    }
    
    printf("%d\n", acertos);

    return 0;
}