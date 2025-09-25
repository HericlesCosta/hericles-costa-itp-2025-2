#include <stdio.h>

void horario(int h, int m, int ampm){
        
    int horas[5] = {0, 1, 2, 4, 12};
    int minutos[5] = {0, 0, 10, 40, 5};

    for(int i = 0; i < 5; i++){
        int total_horas = h + horas[i];
        int total_minutos = m + minutos[i];

        if(total_minutos >= 60){
            total_horas += total_minutos / 60;
            total_minutos = total_minutos % 60;
        }

        if(total_horas >= 24){
            total_horas = total_horas % 24;
        }

        if(ampm == 1){
            int periodo = total_horas >= 12 ? 0 : 1;
            total_horas = total_horas % 12;
            if (total_horas == 1) total_horas = 12;
            printf("%02d:%02d %s\n", total_horas, total_minutos, periodo ? "PM" : "AM");
        } else {
            printf("%02d:%02d\n", total_horas, total_minutos);
        }
    }

}

int main() {

    int h, m, ampm;

    printf("Digite a hora, minutos e 0 para 24h ou 1 para 12h: ");
    scanf("%d %d %d", &h, &m, &ampm);

    horario(h, m, ampm);

    return 0;
}