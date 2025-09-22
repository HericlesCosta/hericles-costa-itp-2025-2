#include <stdio.h>
#include <math.h>

int main() {
    int primeiro, segundo, soma, diferenca, produto, resto_da_divisao;
    float divisao_real, media_aritmetica;

    printf("Escolha um número: ");
    scanf("%d", &primeiro);

    printf("Escolha mais um número: ");
    scanf("%d", &segundo);

    soma = primeiro + segundo;
    diferenca = primeiro - segundo;
    produto = primeiro * segundo;
    divisao_real = (float)primeiro / segundo;
    resto_da_divisao = primeiro % segundo;
    media_aritmetica = ((float)primeiro + segundo) / 2;
    
    printf("A soma é: %d\n", soma);
    printf("A diferença é: %d\n", diferenca);
    printf("O produto é: %d\n", produto);
    printf("A divisão real é: %f\n", divisao_real);
    printf("O resto da divisão é: %d\n", resto_da_divisao);
    printf("A média aritmética é: %.2f\n", media_aritmetica);
    
    return 0;
}