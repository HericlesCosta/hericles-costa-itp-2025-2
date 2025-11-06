#include <stdio.h>

int main() {

    int m;
    int empates = 0;

    printf("Digite um número M: ");
    scanf("%d", &m);

    int resultados[m][m];

    for (int i = 0; i < m; i++){
        for (int j = 0; j < m; j++){
            printf("Digite um número: ");
            scanf("%d", &resultados[i][j]);
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = i + 1; j < m; j++){
            if (resultados[i][j] == resultados[j][i]){
                empates++;
            }
        }
    }

    printf("%d\n", empates);

    return 0;
}