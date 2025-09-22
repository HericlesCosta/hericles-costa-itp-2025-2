#include <stdio.h>
#include <math.h>

int main() {
    float peso, altura, imc;

    printf("Digite o peso em kg: ");
    scanf("%f", &peso);

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    imc = peso / pow(altura, 2);

    if (imc < 18.5){
        printf("Abaixo do peso\n");
    } else if (imc >= 18.5 && imc < 25){
        printf("Peso normal\n");
    } else if (imc >= 25 && imc < 30){
        printf("Sobrepeso\n");
    } else {
        printf("Obesidade\n");
    }

    return 0;
}