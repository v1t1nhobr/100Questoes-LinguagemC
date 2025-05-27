#include <stdio.h>

int main() {
    float A, B, C, soma;

    // Leitura dos valores
    printf("Digite o valor de A: ");
    scanf("%f", &A);

    printf("Digite o valor de B: ");
    scanf("%f", &B);

    printf("Digite o valor de C: ");
    scanf("%f", &C);

    // Soma de A + B
    soma = A + B;

    // Comparação e saída
    if (soma < C) {
        printf("A soma de A e B e MENOR que C\n");
    } else if (soma > C) {
        printf("A soma de A e B e MAIOR que C\n");
    } else {
        printf("A soma de A e B e IGUAL a C\n");
    }

    return 0;
}
