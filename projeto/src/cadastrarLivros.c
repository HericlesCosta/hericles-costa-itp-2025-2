#include <stdio.h>
#include <string.h>
#include "biblioteca.h"

char biblioteca[MAX_LIVROS][MAX_TITULO];

int totalLivros = 0;

void cadastrarLivros() {

    if (totalLivros >= MAX_LIVROS) {
        printf("\nA biblioteca já foi preenchida com o número máximo de livros!\n");
        return;
    }

    printf("Digite o título do seu livro: ");
    getchar();
    fgets(biblioteca[totalLivros], MAX_TITULO, stdin);

    totalLivros++;

    printf("\nSeu livro foi cadastrado com sucesso!\n");
}