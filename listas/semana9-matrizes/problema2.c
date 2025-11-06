#include <stdio.h>

int main() {

    int m, x;

    printf("Digite um número M: ");
    scanf("%d", &m);

    int rede[m][m];

    for (int i = 0; i < m; i++){
        for (int j = 0; j < m; j++){
            printf("Digite um número: ");
            scanf("%d", &rede[i][j]);
        }
    }

    printf("Digite um número X: ");
    scanf("%d", &x);

    for (int p = 0; p < m; p++){
        if (p == x){
            continue;
        }

        if (rede[x][p] == 0){

            int amigo_em_comum = 0;

            for (int c = 0; c < m; c++){
                if (rede[x][c] == 1 && rede[p][c] == 1){
                    amigo_em_comum = 1;
                    break;
                }
            }

            if (amigo_em_comum == 1){
                printf("%d ", p);
            }   
        }
    }

    printf("\n");

    return 0;
}