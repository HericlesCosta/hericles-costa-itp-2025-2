#include <stdio.h>

int main() {

    int m, x, z;

    printf("Digite um número M: ");
    scanf("%d", &m);

    int precos[m][m];

    for (int i = 0; i < m; i++){
        for (int j = 0; j < m; j++){
            printf("Digite um número: ");
            scanf("%d", &precos[i][j]);
        }
    }

    printf("Digite X e Z para origem e destino da viagem: ");
    scanf("%d %d", &x, &z);

    int menor_custo = precos[x][z];
    int melhor_rota = -1;

    for (int y = 0; y < m; y++){
        int custo_escala = precos[x][y] + precos[y][z];

        if (custo_escala < menor_custo){
            menor_custo = custo_escala;
            melhor_rota = y;
        }
    }

    if (melhor_rota == -1){
        printf("%d-%d R$%d\n", x, z, menor_custo);
    } else {
        printf("%d-%d-%d R$%d\n", x, melhor_rota, z, menor_custo);
    }

    return 0;
}