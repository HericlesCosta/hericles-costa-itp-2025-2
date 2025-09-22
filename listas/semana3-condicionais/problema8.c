#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c;

    printf("Digite três números para formar um triângulo: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {

        float maior, lado1, lado2;

        if (a > b && a > c) {
            maior = a;
            lado1 = b;
            lado2 = c;
        } else if (b > a && b > c) {
            maior = b;
            lado1 = a;
            lado2 = c;
        } else {
            maior = c;
            lado1 = a;
            lado2 = b;
        }

        float maior_quadrado = pow(maior, 2);
        float soma_lados_quadrado = pow(lado1, 2) + pow(lado2, 2);

        if (a == b && a == c){
            printf("O triângulo formado com os valores inseridos é um Triângulo Equilátero e Acutângulo.\n");
        } else if (a == b || a == c || b == c) {
            if (maior_quadrado < soma_lados_quadrado) {
                printf("O triângulo formado com os valores inseridos é um Triângulo Isósceles e Acutângulo.\n");
            } else if (maior_quadrado == soma_lados_quadrado) {
                printf("O triângulo formado com os valores inseridos é um Triângulo Isósceles e Retângulo.\n");
            } else {
                printf("O triângulo formado com os valores inseridos é um Triângulo Isósceles e Obtusângulo.\n");
            }
        } else {
            if (maior_quadrado < soma_lados_quadrado) {
                printf("O triângulo formado com os valores inseridos é um Triângulo Escaleno e Acutângulo.\n");
            } else if (maior_quadrado == soma_lados_quadrado) {
                printf("O triângulo formado com os valores inseridos é um Triângulo Escaleno e Retângulo.\n");
            } else {
                printf("O triângulo formado com os valores inseridos é um Triângulo Escaleno e Obtusângulo.\n");
            }
        }
    } else {
        printf("Os valores não formam um triângulo. Por favor, insira outros valores!\n");
    }

    return 0;
}