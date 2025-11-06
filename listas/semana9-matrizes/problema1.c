#include <stdio.h>

int main() {

    int m, n;

    printf("Digite os valores de M e N: ");
    scanf("%d %d", &m, &n);

    int campo[m][n];

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("Digite um número: ");
            scanf("%d", &campo[i][j]);
        }
    }

    int campo_irrigado = 0;
    int campo_seco = 0;

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (campo[i][j] == 1){

                int irrigado = 0;

                if (campo[i-1][j] == 2) {irrigado = 1;}
                if (campo[i+1][j] == 2) {irrigado = 1;}
                if (campo[i][j-1] == 2) {irrigado = 1;}
                if (campo[i][j+1] == 2) {irrigado = 1;}

                if (irrigado == 1){
                    campo_irrigado++;
                } else {
                    campo_seco++;
                }
            }
        }
    }

    printf("%d %d\n", campo_irrigado, campo_seco);
    
    return 0;
}