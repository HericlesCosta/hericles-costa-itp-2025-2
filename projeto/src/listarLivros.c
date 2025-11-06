#include <stdio.h>
#include "biblioteca.h"

void listarLivros() {
    
    if (totalLivros == 0) {
        printf("\nVocê não possui nenhum livro cadastrado!\n");
        return;
    }

    printf("\n Lista de Livros Cadastrados! (%d/%d)\n\n", totalLivros, capacidadeBiblioteca);

    for (int i = 0; i < totalLivros; i++) {

        // Pega o status do livro da matriz
        char* status;
        if (dadosLivros[i][0] == 0) {
            status = "Disponível";
        } else {
            status = "Emprestado";
        }

        printf("%d: %s [%s]\n", i + 1, biblioteca[i], status);
    }
    printf("-------------------------------------\n");
}