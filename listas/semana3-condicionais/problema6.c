#include <stdio.h>
#include <ctype.h>

int main() {
    char febre, cabeca, corpo, tosse;

    printf("Em ordem e com S ou N para Sim e Não, respectivamente, responda: Você está com febre? Dor de cabeça? Dor no corpo? Tosse? ");
    scanf("%c %c %c %c", &febre, &cabeca, &corpo, &tosse);

    febre = tolower(febre);
    cabeca = tolower(cabeca);
    corpo = tolower(corpo);
    tosse = tolower(tosse);

    if (febre != 's' && febre != 'n' || cabeca != 's' && cabeca != 'n' || corpo != 's' && corpo != 'n' || tosse != 's' && tosse != 'n') {
        printf("Entrada inválida. Por favor, responda com S ou N.\n");
        return 1;
    } else if (febre == 's' && cabeca == 's' && corpo == 's' && tosse == 'n'){
        printf("Possível gripe\n");
    } else if (febre == 's' && tosse == 's' && cabeca == 'n' && corpo == 'n'){
        printf("Possível resfriado\n");
    } else if (cabeca == 's' && febre == 'n' && corpo == 'n' && tosse == 'n'){
        printf("Possível enxaqueca\n");
    } else if (febre == 's' && cabeca == 'n' && corpo == 'n' && tosse == 'n'){
        printf("Consulte um médico\n");
    } else if (febre == 'n' && cabeca == 'n' && corpo == 'n' && tosse == 'n'){
        printf("Você parece estar bem\n");
    } else {
        printf("Consulte um médico para avaliação\n");
    }

    return 0;
}