#include <stdio.h>
#include <stdlib.h> // Para malloc, free e exit
#include <string.h> // Para strlen, strcpy e strcspn
#include "biblioteca.h"

char **biblioteca = NULL;
int totalLivros = 0;
int capacidadeBiblioteca = 0;

int **dadosLivros = NULL; // Definição da matriz de dados

void inicializarBiblioteca(int capacidade) {
    capacidadeBiblioteca = capacidade;
    totalLivros = 0;

    // Aloca memória para o vetor de ponteiros
    biblioteca = malloc(capacidade * sizeof(char*));
    if (biblioteca == NULL) {
        printf("\nERRO FATAL: Falha ao alocar memória para a biblioteca!\n");
        exit(1);
    }

    // Aloca memória para a MATRIZ de dados
    dadosLivros = malloc(capacidade * sizeof(int*));
    if (dadosLivros == NULL) {
        printf("\nERRO FATAL: Falha ao alocar memória para os dados da biblioteca!\n");
        free(biblioteca);
        exit(1);
    }

    // Aloca memória para as "colunas" de CADA linha da matriz
    for (int i = 0; i < capacidade; i++) {
        biblioteca[i] = NULL;

        dadosLivros[i] = malloc(2 * sizeof(int));
        if (dadosLivros[i] == NULL) {
            printf("\nERRO FATAL: Falha ao alocar colunas da matriz!\n");

            liberarBiblioteca();
            exit(1);
        }
        
        dadosLivros[i][0] = 0;
        dadosLivros[i][1] = 0;
    }
}

void liberarBiblioteca() {
    if (biblioteca != NULL) {
        // Libera cada string (cada título)
        for (int i = 0; i < totalLivros; i++) {
            if (biblioteca[i] != NULL) {
                free(biblioteca[i]);
            }
        }
        free(biblioteca); // Libera o vetor de ponteiros
    }

    if (dadosLivros != NULL) {

        for (int i = 0; i < capacidadeBiblioteca; i++) {
            if (dadosLivros[i] != NULL) {
                free(dadosLivros[i]);
            }
        }
        free(dadosLivros); // Libera o ponteiro das "linhas"
    }

    // Reseta as variáveis globais
    biblioteca = NULL;
    dadosLivros = NULL;
    totalLivros = 0;
    capacidadeBiblioteca = 0;
}

void cadastrarLivros() {

    if (totalLivros >= capacidadeBiblioteca) {
        printf("\nA biblioteca já foi preenchida com o número máximo de livros!\n");
        return;
    }

    char buffer[1000]; 

    printf("Digite o título do seu livro: ");
    getchar(); 
    fgets(buffer, 1000, stdin);
    buffer[strcspn(buffer, "\n")] = 0;

    // Aloca a memória EXATA para o título
    biblioteca[totalLivros] = malloc((strlen(buffer) + 1) * sizeof(char));
    if (biblioteca[totalLivros] == NULL) {
        printf("\nERRO: Falha ao alocar memória para o título do livro!\n");
        return;
    }
    strcpy(biblioteca[totalLivros], buffer);

    totalLivros++;
    
    printf("\nSeu livro foi cadastrado com sucesso!\n");
}