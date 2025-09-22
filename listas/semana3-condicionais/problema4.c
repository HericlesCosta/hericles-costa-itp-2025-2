#include <stdio.h>
#include <ctype.h>

int main() {

    char jogador1, jogador2;

    printf("Na ordem dos jogadores 1 e 2, selecionem P, A ou T para pedra, papel e tesoura, respectivamente: \n");
    scanf("%c %c", &jogador1, &jogador2);

    jogador1 = toupper(jogador1);
    jogador2 = toupper(jogador2);

    if (jogador1 != 'P' && jogador1 != 'A' && jogador1 != 'T' || jogador2 != 'P' && jogador2 != 'A' && jogador2 != 'T'){
        printf("Entrada invalida!\n");
    } else if (jogador1 == jogador2){
        printf("Empate!\n");
    } else if (jogador1 == 'P' && jogador2 == 'T' || jogador1 == 'A' && jogador2 == 'P' || jogador1 == 'T' && jogador2 == 'A'){
        printf("Jogador 1 venceu!\n");
    } else {
        printf("Joador 2 venceu!\n");
    }
    

    return 0;
}