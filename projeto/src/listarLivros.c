#include <stdio.h>
#include "biblioteca.h"

void listarLivros() {
    
    if (totalLivros == 0) {
        printf("\nVocê não possui nenhum livro cadastrado!\n");
        return;
    }

    printf("\n Lista de Livros Cadastrados!\n\n");

    for (int i = 0; i < totalLivros; i++) {
        printf("%d: %s", i + 1, biblioteca[i]);
    }
}