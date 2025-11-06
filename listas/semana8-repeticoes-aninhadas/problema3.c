#include <stdio.h>

int main() {
    int n;

    printf("Digite a quantidade de pilotos na corrida: ");
    scanf("%d", &n);

    int ordem_largada[n];
    int ordem_chegada[n];

    printf("Digite a ordem de largada: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &ordem_largada[i]);
    }

    printf("Digite a ordem de chegada: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &ordem_chegada[i]);
    }

    int max_ganho = 0;
    int piloto_vencedor = -1;
    int empate = 0;

    for (int piloto_atual = 1; piloto_atual <= n; piloto_atual++) {
        
        int pos_largada = -1;
        int pos_chegada = -1;


        for (int i = 0; i < n; i++) {
            if (ordem_largada[i] == piloto_atual) {
                pos_largada = i + 1;
                break;
            }
        }


        for (int i = 0; i < n; i++) {
            if (ordem_chegada[i] == piloto_atual) {
                pos_chegada = i + 1;
                break;
            }
        }

        int ganho = pos_largada - pos_chegada;

        if (ganho > max_ganho) {
            max_ganho = ganho;
            piloto_vencedor = piloto_atual;
            empate = 0;
        } 

        else if (ganho == max_ganho && max_ganho > 0) {
            empate = 1;
        }
    }

    if (max_ganho <= 0 || empate) {
        printf("empate\n");
    } else {
        printf("%d\n", piloto_vencedor);
    }

    return 0;
}