#include <stdio.h>

int main() {

    char nomes_meses[12][11] = {
        "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };

    int chuvas[12];
    int indices_meses[12];

    printf("Digite a quantidade de chuva em cada mês: ");
    for (int i = 0; i < 12; i++) {
        scanf("%d", &chuvas[i]);
        indices_meses[i] = i;
    }

    for (int i = 0; i < 11; i++) {
        
        for (int j = 0; j < 11 - i; j++) {

            if (chuvas[j] < chuvas[j + 1]) {

                int temp_chuva = chuvas[j];
                chuvas[j] = chuvas[j + 1];
                chuvas[j + 1] = temp_chuva;

                int temp_indice = indices_meses[j];
                indices_meses[j] = indices_meses[j + 1];
                indices_meses[j + 1] = temp_indice;
            }
        }
    }

    printf("Ranking dos meses mais chuvosos:\n");
    for (int i = 0; i < 12; i++) {
        int indice_do_mes = indices_meses[i];
        printf("%s %d\n", nomes_meses[indice_do_mes], chuvas[i]);
    }

    return 0;
}