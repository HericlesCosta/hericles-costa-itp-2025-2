#include <stdio.h>
#include "biblioteca.h"

int main() {

    int opcao;

    do {
        printf("\n ---- MENU DA BIBLIOTECA ----\n");
        printf("\n1. Cadastrar Livro\n");
        printf("2. Remover Livro\n");
        printf("3. Listar Livro\n");
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
        case 0:
            printf("Encerrando Sistema...\n");
            break;
        default:
            printf("Opção Inválida!\n");
        }

    } while (opcao != 0);
    

    return 0;
}