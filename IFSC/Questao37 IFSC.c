#include <stdio.h>

int main() {
    int anos, meses, dias, total_dias;

    // Entrada de dados
    printf("Digite a idade da pessoa:\n");
    printf("Anos: ");
    scanf("%d", &anos);

    printf("Meses: ");
    scanf("%d", &meses);

    printf("Dias: ");
    scanf("%d", &dias);

    // Cálculo do total de dias vividos
    total_dias = (anos * 360) + (meses * 30) + dias;

    // Saída do resultado
    printf("Voce já viveu aproximadamente %d dias.\n", total_dias);

    return 0;
}
