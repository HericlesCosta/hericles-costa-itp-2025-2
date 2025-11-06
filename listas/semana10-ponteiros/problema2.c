#include <stdio.h>
#include <stdlib.h>

int * buscaNoVetor(int *v, int n, int valor, int *qtd) {
    
    // Contar as ocorrências
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == valor) {
            count++;
        }
    }

    *qtd = count;

    // Nenhuma ocorrência
    if (count == 0) {
        return NULL;
    }

    // Alocar o novo vetor para os índices
    int *indices = (int *) malloc(count * sizeof(int));

    if (indices == NULL) {
        *qtd = 0;
        return NULL;
    }

    // Preencher o vetor de índices
    int indice_atual = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == valor) {
            indices[indice_atual] = i;
            indice_atual++;
        }
    }

    // Retornar o novo vetor
    return indices;
}


int main() {
    int n;
    
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &n);

    // Alocar dinamicamente o vetor principal
    int *vetor = (int *) malloc(n * sizeof(int));
    
    if (vetor == NULL) {
        printf("Erro de alocação de memória!\n");
        return 1;
    }

    printf("Digite os %d elementos do vetor (separados por espaço): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    int valor_busca;
    printf("Digite o valor que voce deseja buscar no vetor: ");
    scanf("%d", &valor_busca);

    // Variáveis para receber os retornos da função
    int quantidade_ocorrencias = 0;
    int *indices_encontrados;

    indices_encontrados = buscaNoVetor(vetor, n, valor_busca, &quantidade_ocorrencias);

    if (indices_encontrados == NULL) {
        printf("Nenhuma ocorrência do valor %d foi encontrada.\n", valor_busca);
    } else {
        // Imprime a quantidade
        printf("O valor %d foi encontrado %d vez(es).\n", valor_busca, quantidade_ocorrencias);
        
        // Imprime todos os índices encontrados
        printf("Nos índices: ");
        for (int i = 0; i < quantidade_ocorrencias; i++) {
            printf("%d ", indices_encontrados[i]);
        }
        printf("\n");
    }

    // Liberar a memória alocada
    free(vetor);
    if (indices_encontrados != NULL) {
        free(indices_encontrados);
    }

    return 0;
}