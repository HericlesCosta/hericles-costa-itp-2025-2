#include <stdio.h>
#include <math.h>

int main() {
    float celsius, fahrenheit, kelvin;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;
    kelvin = celsius + 273.15;

    printf("A temperatura em Fahrenheit é: %.1f\n", fahrenheit);
    printf("A temperatura em Kelvin é: %.1f\n", kelvin);

    return 0;
}