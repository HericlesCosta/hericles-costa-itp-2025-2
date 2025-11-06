#include <stdio.h>
#include <string.h>

int main() {

    char palavra[21];
    int indice;
    
    printf("Digite uma palavra composta por '.' e 'x' (até 20 caracteres) e um índice: ");
    scanf("%s %d", palavra, &indice);

    if (palavra[indice] == 'x'){
        printf("bum!\n");
    } else {
        int bombas_proximas = 0;

        if (indice > 0 && palavra[indice - 1] == 'x'){
            bombas_proximas++;
        }

        if (indice < strlen(palavra) - 1 && palavra[indice + 1] == 'x'){
            bombas_proximas++;
        }

        printf("%d\n", bombas_proximas);
    }

    return 0;
}