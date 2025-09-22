#include <stdio.h>
#include <string.h>
#include "biblioteca.h"

void removerLivros(){
    if (totalLivros == 0) {
        printf("Você não possui nenhum livro cadastrado!\n");
        return;
    }

    int indice;
    listarLivros();
    printf("\nDigite o número do livro que deseja remover: ");
    scanf("%d", &indice);

    if (indice < 1 || indice > totalLivros) {
        printf("Índice inválido!\n");
        return;
    }

    for (int i = indice - 1; i < totalLivros - 1; i++) {
        snprintf(biblioteca[i], MAX_TITULO, "%s", biblioteca[i + 1]);
    }

    totalLivros--;
    printf("Livro removido com sucesso!\n");
}