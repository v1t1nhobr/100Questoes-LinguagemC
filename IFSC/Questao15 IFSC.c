#include <stdio.h>

int main() {
    float tempo, velocidade, distancia, litros;

    // Tempo gasto na viagem
    printf("Digite o tempo gasto na viagem (horas): ");
    scanf("%f", &tempo);

    // Velocidade média durante a viagem
    printf("Digite a velocidade media (km/h): ");
    scanf("%f", &velocidade);

    // Calculo da distancia percorrida
    distancia = tempo * velocidade;

    // Calculo da quantidade de litros de combustivel utilizada
    litros = distancia / 12.0;

    // Exibicao dos resultados
    printf("\n--- Relatorio da Viagem ---\n");
    printf("Velocidade media:        %.2f km/h\n", velocidade);
    printf("Tempo gasto:             %.2f horas\n", tempo);
    printf("Distancia percorrida:    %.2f km\n", distancia);
    printf("Combustivel utilizado:   %.2f litros\n", litros);

    return 0;
}
