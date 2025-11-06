#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char placa[11];

    printf("Digite a placa do carro: ");
    scanf("%s", placa);

    if (strlen(placa) == 8){
        if (isupper(placa[0]) && isupper(placa[1]) && isupper(placa[2]) && placa[3] == '-' && isdigit(placa[4]) && isdigit(placa[5]) && isdigit(placa[6]) && isdigit(placa[7])){
            printf("brasileiro\n");
        } else {
            printf("inválido\n");
        }
    } else if (strlen(placa) == 7){
        if (isupper(placa[0]) && isupper(placa[1]) && isupper(placa[2]) && isdigit(placa[3]) && isupper(placa[4]) && isdigit(placa[5]) && isdigit(placa[6])){
            printf("mercosul\n");
        } else {
            printf("inválido\n");
        }
    } else {
        printf("inválido\n");
    }

    return 0;
}