#include <stdio.h>
#include <string.h> // Para strstr() e strcspn()
#include "biblioteca.h"

void buscarLivros() {
    if (totalLivros == 0) {
        printf("\nVocê não possui nenhum livro cadastrado para buscar!\n");
        return;
    }

    char termoBusca[100];
    printf("\nDigite o título (ou parte dele) que deseja buscar: ");
    getchar(); // Limpa o buffer do 'Enter' deixado pelo scanf do menu
    fgets(termoBusca, 100, stdin);

    // Remove o '\n' da busca
    termoBusca[strcspn(termoBusca, "\n")] = 0;

    printf("\n--- Resultados da Busca por '%s' ---\n", termoBusca);
    
    int encontrou = 0; // Flag para saber se encontramos algo

    for (int i = 0; i < totalLivros; i++) {
        
        if (strstr(biblioteca[i], termoBusca) != NULL) {
            printf("[%d]: %s\n", i + 1, biblioteca[i]);
            encontrou = 1;
        }
    }

    if (encontrou == 0) {
        printf("Nenhum livro encontrado com esse termo.\n");
    }
    printf("-------------------------------------\n");
}