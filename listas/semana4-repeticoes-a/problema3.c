// NÚMEROS COLEGAS

#include <stdio.h>

int main() {
    
    int num1, num2, soma_num1 = 0, soma_num2 = 0;

    printf("Digite dois números diferentes para saber se eles são colegas (números onde a soma dos divisores próprios de cada têm uma diferença de até 2): ");
    scanf("%d %d", &num1, &num2);

    for (int i = 1; i < num1; i++){
        if (num1 % i == 0){
            soma_num1 += i;
        }
    }

    for (int i = 1; i < num2; i++){
        if (num2 % i == 0){
            soma_num2 += i;
        }
    }

    if (soma_num1 - num2 >= -2 && soma_num1 - num2 <= 2 || soma_num2 - num1 >= -2 && soma_num2 - num1 <= 2){
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}