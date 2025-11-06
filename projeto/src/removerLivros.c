#include <stdio.h>
#include <stdlib.h> // Para free()
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

    // Ajusta para o índice 0 do vetor
    indice = indice - 1; 


    // Libera a memória do título do livro a ser removido
    free(biblioteca[indice]);

    // Descobre qual é o índice do último livro
    int ultimoIndice = totalLivros - 1;

    // Verifica se o livro a ser removido não é o último livro
    if (indice != ultimoIndice) {
        
        // Copia o ponteiro do último livro para a posição do livro removido
        biblioteca[indice] = biblioteca[ultimoIndice];

        // Copia os DADOS (status/empréstimos) do último livro para a posição do livro removido.
        dadosLivros[indice][0] = dadosLivros[ultimoIndice][0];
        dadosLivros[indice][1] = dadosLivros[ultimoIndice][1];
    }

    // Limpa o ponteiro do último livro que está duplicado
    biblioteca[ultimoIndice] = NULL;
    
    // Reseta os dados da matriz na última posição,
    dadosLivros[ultimoIndice][0] = 0;
    dadosLivros[ultimoIndice][1] = 0;

    // Diminui o contador de livros
    totalLivros--;
    printf("\nLivro removido com sucesso!\n");
}