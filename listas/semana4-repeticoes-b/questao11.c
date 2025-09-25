#include <stdio.h>

int main() {
    int r1, r2, r3, r4;
    int solucao_contador = 0;

    for (r1 = 0; r1 < 4; r1++) {
        for (r2 = 0; r2 < 4; r2++) {
            for (r3 = 0; r3 < 4; r3++) {
                for (r4 = 0; r4 < 4; r4++) {
                    
                    if (r1 == r2 || r1 == r3 || r1 == r4 || r2 == r3 || r2 == r4 || r3 == r4) {
                        continue;
                    }

                    if ((r1 - r2 == 1 || r1 - r2 == -1) || (r1 - r3 == 2 || r1 - r3 == -2) ||
                        (r1 - r4 == 3 || r1 - r4 == -3) || (r2 - r3 == 1 || r2 - r3 == -1) ||
                        (r2 - r4 == 2 || r2 - r4 == -2) || (r3 - r4 == 1 || r3 - r4 == -1)) {
                        continue;
                    }
                    
                    solucao_contador++;
                    printf("Solução %d: (0, %d), (1, %d), (2, %d), (3, %d)\n",
                           solucao_contador, r1, r2, r3, r4);
                }
            }
        }
    }
    
    printf("Total de soluções encontradas: %d\n", solucao_contador);

    return 0;
}

