#include <stdio.h>
#include <math.h>

int main() {

    float preco, valor_descontado, valor_final;
    int desconto;

    printf("Digite o valor total da compra: ");
    scanf("%f", &preco);

    if (preco <= 100){
        valor_final = preco;
        printf("Como não ultrapassou R$ 100,00, então nenhum desconto foi aplicado. O valor final foi de R$ %.2f\n", valor_final);
    } else if (preco > 100 && preco <= 500){
        desconto = 10;
        valor_descontado = preco*desconto/100;
        valor_final = preco - valor_descontado;
        printf("O valor do desconto foi de R$ %.2f para a desconto de %d%%. Assim, o valor final foi de R$ %.2f\n", valor_descontado, desconto, valor_final);
    } else if (preco > 500 && preco <= 1000){
        desconto = 15;
        valor_descontado = preco*desconto/100;
        valor_final = preco - valor_descontado;
        printf("O valor do desconto foi de R$ %.2f para a desconto de %d%%. Assim, o valor final foi de R$ %.2f\n", valor_descontado, desconto, valor_final);
    } else {
        desconto = 20;
        valor_descontado = preco*desconto/100;
        valor_final = preco - valor_descontado;
        printf("O valor do desconto foi de R$ %.2f para a desconto de %d%%. Assim, o valor final foi de R$ %.2f\n", valor_descontado, desconto, valor_final);
    }
    

    return 0;
}