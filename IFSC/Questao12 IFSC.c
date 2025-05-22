#include <stdio.h>

int main() {
    float C, f;

    // Solicita a temperatura em Celsius
    printf("Qual a temperatura em graus Celsius?: ");
    scanf("%f", &C);

    // Conversao para Fahrenheit
    f = (9 * C + 160) / 5;

    // Exibe o resultado
    printf("A temperatura em Fahrenheit e: %.2f\n", f);

    return 0;
}
