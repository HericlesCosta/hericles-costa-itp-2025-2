#include <stdio.h>
#include <math.h>

int main() {

    int a, b, c;
    float raiz_mil = sqrt(1000);

    for (a = 1; a < raiz_mil; a++){
        for (b = 1; b < raiz_mil; b++){
            for (c = 1; c < raiz_mil; c++){
                if (pow(a, 2) + pow(b, 2) == pow(c, 2)){
                    printf("%d² + %d² = %d²\n", a, b, c);
                }
            }
        }
    }

    return 0;
}