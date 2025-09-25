#include <stdio.h>
#include <string.h>
#include "biblioteca.h"

void removerLivros(){
    
    if (totalLivros == 0) {
        printf("\nVocê não possui nenhum livro cadastrado!\n");
        return;
    }

    int indice;
    listarLivros();
    printf("\nDigite o número do livro que deseja remover: ");
    scanf("%d", &indice);

    if (indice < 1 || indice > totalLivros) {
        printf("\nÍndice inválido!\n");
        return;
    }

    for (int i = indice - 1; i < totalLivros - 1; i++) {
        strncpy(biblioteca[i], biblioteca[i + 1], MAX_TITULO);
    }

    totalLivros--;
    printf("\nLivro removido com sucesso!\n");
}