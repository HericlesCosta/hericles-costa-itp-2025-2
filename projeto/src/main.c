#include <stdio.h>
#include "biblioteca.h" 

#define CAPACIDADE_INICIAL 10 // Define a capacidade inicial

int main() {

    int opcao;
    
    // Inicializa a biblioteca ANTES de começar o loop
    inicializarBiblioteca(CAPACIDADE_INICIAL);

    do {
        printf("\n ---- MENU DA BIBLIOTECA (Capacidade: %d/%d) ----\n", totalLivros, capacidadeBiblioteca);
        printf("\n1. Cadastrar Livro\n");
        printf("2. Remover Livro\n");
        printf("3. Listar Livros\n");
        printf("4. Buscar Livro\n");
        printf("5. Emprestar Livro\n");   // NOVA OPÇÃO
        printf("6. Devolver Livro\n");    // NOVA OPÇÃO
        printf("7. Relatório de Popularidade\n"); // NOVA OPÇÃO
        printf("0. Sair\n");
        printf("\nEscolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            cadastrarLivros();
            break;
        case 2:
            removerLivros();
            break;
        case 3:
            listarLivros();
            break;
        case 4: 
            buscarLivros();
            break;
        case 5: // NOVA OPÇÃO
            emprestarLivro();
            break;
        case 6: // NOVA OPÇÃO
            devolverLivro();
            break;
        case 7: // NOVA OPÇÃO
            imprimirRelatorio();
            break;
        case 0: 
            liberarBiblioteca();
            printf("\nEncerrando Sistema...\n");
            break;
        default:
            printf("\nOpção Inválida!\n");
        }

    } while (opcao != 0);
    

    return 0;
}