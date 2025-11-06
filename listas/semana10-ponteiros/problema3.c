#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * misturar(char *str1, char *str2) {
    // Calcular o tamanho das strings
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int len_total = len1 + len2;

    // Alocar memória para a nova string
    // +1 para o caractere nulo '\0'
    char *nova_string = (char *) malloc((len_total + 1) * sizeof(char));

    if (nova_string == NULL) {
        printf("Erro de alocacao de memoria!\n");
        return NULL;
    }

    // Intercalar as strings
    int i = 0;
    int j = 0;
    int k = 0;

    // Executa enquanto AMBAS as strings ainda têm caracteres
    while (i < len1 && j < len2) {
        nova_string[k++] = str1[i++];
        nova_string[k++] = str2[j++];
    }

    // Adicionar o restante de str1
    while (i < len1) {
        nova_string[k++] = str1[i++];
    }

    // Adicionar o restante de str2
    while (j < len2) {
        nova_string[k++] = str2[j++];
    }

    // Finalizar a nova string com o caractere nulo
    nova_string[k] = '\0';

    // Retornar o ponteiro para a nova string
    return nova_string;
}

int main() {
    // Aloca buffers para ler as strings. +2 (101) é seguro para 100 chars + \n + \0
    char str1[101]; 
    char str2[101];

    // Lê a primeira string
    printf("Digite a primeira string (ate 100 caracteres):\n");
    fgets(str1, sizeof(str1), stdin);
    // Remove a quebra de linha '\n' do fgets
    str1[strcspn(str1, "\n")] = '\0';

    // Lê a segunda string
    printf("Digite a segunda string (ate 100 caracteres):\n");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    // Chama a função para criar a string misturada
    char *resultado = misturar(str1, str2);

    // Verifica se a função foi executada corretamente
    if (resultado != NULL) {
        // Imprime o resultado
        printf("\n--- Resultado da Mistura ---\n");
        printf("%s\n", resultado);

        // Libera apenas o ponteiro que foi alocado dinamicamente
        free(resultado);
    }

    return 0;
}