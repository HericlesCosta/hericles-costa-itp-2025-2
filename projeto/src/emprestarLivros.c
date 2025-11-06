#include <stdio.h>
#include "biblioteca.h"

void emprestarLivros() {
    if (totalLivros == 0) {
        printf("\nNão há livros para emprestar.\n");
        return;
    }

    int indice;
    listarLivros();
    printf("\nDigite o número do livro que deseja EMPRESTAR: ");
    scanf("%d", &indice);

    if (indice < 1 || indice > totalLivros) {
        printf("\nÍndice inválido!\n");
        return;
    }

    indice = indice - 1; // Ajusta para o índice 0

    if (dadosLivros[indice][0] == 1) {
        printf("\nERRO: O livro '%s' já está emprestado!\n", biblioteca[indice]);
    } else {
        dadosLivros[indice][0] = 1; // 1 = Emprestado
        dadosLivros[indice][1]++;   // Incrementa o contador de popularidade
        printf("\nLivro '%s' emprestado com sucesso!\n", biblioteca[indice]);
    }
}