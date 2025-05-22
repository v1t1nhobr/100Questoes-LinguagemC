#include <stdio.h>

int main() {
    float RAIO, AREA;
    const float PI = 3.14159;

    // Definicao do valor do raio
    printf("Qual o valor do raio da circunferencia: ");
    scanf("%f", &RAIO);

    // Area da circunferencia
    AREA = PI * RAIO * RAIO;

    // Exibe o resultado
    printf("A area da circunferencia e: %.2f\n", AREA);

    return 0;
}
