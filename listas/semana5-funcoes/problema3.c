#include <stdio.h>
#include <math.h>

double calcular_altura(double x, double y) {
    return sin(cos(y) + x) + cos(y + sin(x));
}

int altitude_segura(double x, double y) {
    double altura = calcular_altura(x, y);
    if (altura >= 0.0 && altura <= 2.0) {
        return 1;
    } else {
        return 0;
    }
}

int pouso_seguro(double x, double y) {
    if (altitude_segura(x, y) == 0) return 0;
    if (altitude_segura(x + 0.2, y + 0.2) == 0) return 0;
    if (altitude_segura(x - 0.2, y + 0.2) == 0) return 0;
    if (altitude_segura(x + 0.2, y - 0.2) == 0) return 0;
    if (altitude_segura(x - 0.2, y - 0.2) == 0) return 0;
    
    return 1;
}

int main() {
    double coord_x, coord_y;

    printf("Digite as coordenadas (x y): ");
    scanf("%lf %lf", &coord_x, &coord_y);

    if (pouso_seguro(coord_x, coord_y) == 0) {
        printf("troque de coordenada\n");
    } else {
        int vizinhos_seguros = 0;

        if (pouso_seguro(coord_x + 2.0, coord_y) == 1) {
            vizinhos_seguros++;
        }
        if (pouso_seguro(coord_x - 2.0, coord_y) == 1) {
            vizinhos_seguros++;
        }
        if (pouso_seguro(coord_x, coord_y + 2.0) == 1) {
            vizinhos_seguros++;
        }
        if (pouso_seguro(coord_x, coord_y - 2.0) == 1) {
            vizinhos_seguros++;
        }

        if (vizinhos_seguros <= 1) {
            printf("inseguro\n");
        } else if (vizinhos_seguros <= 3) {
            printf("relativamente seguro\n");
        } else {
            printf("seguro\n");
        }
    }

    return 0;
}