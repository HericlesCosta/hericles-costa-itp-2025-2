#include <stdio.h>
#include <math.h>

int main() {
    float capital, taxa_juros, tempo, montante;

    printf("Digite qual seu [CAPITAL INICIAL]: ");
    scanf("%f", &capital);

    printf("Digite a taxa de juros anual em [PORCENTAGEM] (aceita decimais): ");
    scanf("%f", &taxa_juros);

    printf("Digite o tempo em [ANOS]: ");
    scanf("%f", &tempo);

    montante = capital * pow(1 + taxa_juros/100, tempo);

    printf("O MONTANTE, após %.1f anos, é: R$ %.2f\n", tempo, montante);

    return 0;
}