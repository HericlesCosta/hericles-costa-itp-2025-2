#include <stdio.h>

int main() {

    char consumidor;
    float consumo, valor_total;

    printf("Informe o CONSUMO e o tipo de consumidor (R, C ou I): \n");
    scanf("%f %c", &consumo, &consumidor);

    if (consumidor == 'R' || consumidor == 'r'){
        valor_total = consumo * 0.6 + 15;
    } else if (consumidor == 'C' || consumidor == 'c'){
        valor_total = consumo * 0.48 + 15;
    } else if (consumidor == 'I' || consumidor == 'i'){
        valor_total = consumo * 1.29 + 15;
    } else {
        printf("Digite um dígito válido para o perfil de consumidor.");
        return 1;
    }

    //valor_total = consumidor == 'R' || consumidor == 'r' ? consumo * 0.6 + 15 : consumidor == 'C' || consumidor == 'c' ? consumo * 0.48 + 15 : consumidor == 'I' || consumidor == 'i' ? consumo * 1.29 + 15 : valor_total;

    printf("O valor total é: R$ %.2f\n", valor_total);

    return 0;
}