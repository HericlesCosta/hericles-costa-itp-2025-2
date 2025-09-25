#include <stdio.h>

int main() {

    int numero, acertos = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    char gabarito[numero];

    printf("Digite o gabarito: ");
    for (int i = 0; i < numero; i++) {
        scanf(" %c", &gabarito[i]);
    }

    printf("Digite as respostas do aluno: ");
    for (int i = 0; i < numero; i++) {
        char resposta;
        scanf(" %c", &resposta);
        if (resposta == gabarito[i]) {
            acertos++;
        }
    }

    acertos != 1 ? printf("O aluno acertou %d questoes.\n", acertos) : printf("O aluno acertou %d questao.\n", acertos);

    return 0;
}