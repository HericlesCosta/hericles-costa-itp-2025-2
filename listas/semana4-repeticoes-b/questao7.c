#include <stdio.h>

int main() {
    
    int a, b;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);

    for (int i = b; i <= a; i++){

        if (i <= 1){
            continue;
        }

        int primo = 1;

        for (int j = 2; j <= i / 2; j++){
            if (i % j == 0){
                primo = 0;
                break;
            }
        }

        if (primo){
            printf("%d ", i);
        }
    }

    printf("\n");
    
    return 0;
}