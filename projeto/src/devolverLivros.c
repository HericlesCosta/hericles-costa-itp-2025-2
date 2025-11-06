#include <stdio.h>
#include "biblioteca.h"

void devolverLivros() {
    if (totalLivros == 0) {
        printf("\nNão há livros cadastrados para devolver.\n");
        return;
    }

    int indice;
    listarLivros(); // Mostra a lista para o usuário
    printf("\nDigite o número do livro que deseja DEVOLVER: ");
    scanf("%d", &indice);

    if (indice < 1 || indice > totalLivros) {
        printf("\nÍndice inválido!\n");
        return;
    }

    indice = indice - 1; // Ajusta para o índice 0

    if (dadosLivros[indice][0] == 0) {
        printf("\nERRO: O livro '%s' já estava disponível (não estava emprestado).\n", biblioteca[indice]);
    } else {
        dadosLivros[indice][0] = 0; // 0 = Disponível
        printf("\nLivro '%s' devolvido com sucesso!\n", biblioteca[indice]);
    }
}