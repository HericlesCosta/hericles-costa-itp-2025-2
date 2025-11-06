// src/imprimirRelatorio.c
#include <stdio.h>
#include "biblioteca.h"

void imprimirRelatorio() {
    printf("\n--- Relatório de Popularidade e Status ---\n");
    if (totalLivros == 0) {
        printf("Nenhum livro cadastrado.\n");
        return;
    }
    
    for (int i = 0; i < totalLivros; i++) {
        
        // Pega os dados da matriz
        char* status = (dadosLivros[i][0] == 0) ? "Disponível" : "Emprestado";
        int popularidade = dadosLivros[i][1]; // Pega o contador de empréstimos

        // Imprime as informações do livro
        printf("\nLivro: %s (%s)\n", biblioteca[i], status);
        printf("Popularidade: ");

        // Loop interno (j) imprime um '*' para cada empréstimo
        if (popularidade == 0) {
            printf("(Nenhum empréstimo)");
        } else {
            for (int j = 0; j < popularidade; j++) {
                printf("*");
            }
        }
        printf("\n");
    }
    printf("\n----------------------------------------\n");
}