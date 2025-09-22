#include <stdio.h>
#include <math.h>

int main() {
    float peso, altura, imc;

    printf("Digite o peso em kg: ");
    scanf("%f", &peso);

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    imc = peso / pow(altura, 2);

    printf("O IMC é: %.1f\n", imc);

    return 0;
}