// DOBRANDO ATÉ NÃO PODER MAIS

#include <stdio.h>

int main() {

    float comprimento, largura, comp_bolso;
    int dobras_totais = 0;

    printf("Insira o comprimento e largura da folha de papel: ");
    scanf("%f %f", &comprimento, &largura);

    printf("Insira o comprimento do bolso: ");
    scanf("%f", &comp_bolso);

    while (comprimento > comp_bolso && largura > comp_bolso){
        if (comprimento > largura){
            comprimento /= 2;
        } else {
            largura /= 2;
        }
        dobras_totais++;
    }

    printf("O número total de dobras foi: %d.\nO comprimento e largura atual do papel são de %.2f e %.2f, respectivamente.\n", dobras_totais, comprimento, largura);

    return 0;
}