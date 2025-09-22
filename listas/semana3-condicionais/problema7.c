#include <stdio.h>
#include <math.h>

int main() {

    int a, b, c;
    float discriminante, x1, x2;

    printf("Digite, em ordem, A, B e C, para realizarmos a equação: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a != 0){
        discriminante = pow(b, 2) - 4 * a * c;

        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);

        if (discriminante < 0){
            printf("Não possui raízes reais!\n");
        } else if (discriminante == 0){
            if (x1 == x2) {
                printf("Possui apenas uma raiz. %f\n", x1);
            }
        } else {
            printf("As duas raízes são: %f e %f\n", x1, x2);
        }
    } else {
        printf("Não é uma equação do segundo grau! Para isso, o 'A' deve ser diferente de 0.\n");
    }

    return 0;
}