#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    char picoles[3][20] = {"Picole1", "Picole2", "Picole3"};
    float valores[3] = {0.50, 0.60, 0.75};
    int quantidade[3];
    float total_geral = 0.0;

    printf("=== Vendas de Picolés ===\n\n");

    for (int i = 0; i < 3; i++) {
        printf("%s - R$ %.2f\n", picoles[i], valores[i]);
        printf("Quantidade vendida de %s: ", picoles[i]);
        scanf("%d", &quantidade[i]);

        float total_por_item = valores[i] * quantidade[i];
        printf("Total vendido de %s: R$ %.2f\n\n", picoles[i], total_por_item);

        total_geral += total_por_item;
    }

    printf("Total arrecadado com todos os picoles: R$ %.2f\n", total_geral);

    return 0;
}
