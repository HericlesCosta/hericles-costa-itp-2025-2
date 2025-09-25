#include <stdio.h>

int primos(int numero) {
    
    for (int i = 2; i < numero; i++) {
        if (numero % i == 0) return 0;
    }
    return 1;
}

int main (){

    for (int i = 2; i <= 50000; i++) {
        if (primos(i) && primos(i + 2) && primos(i + 6)) {
            printf("(%d, %d, %d)\n", i, i + 2, i + 6);
        }
    }

    return 0;
}