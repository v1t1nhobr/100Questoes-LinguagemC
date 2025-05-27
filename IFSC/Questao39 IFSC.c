#include <stdio.h>

int main() {
    int valorCompra, valorPago, troco;
    int notas100, notas10, notas1;

    // Entrada dos valores
    printf("Digite o valor da compra: ");
    scanf("%d", &valorCompra);

    printf("Digite o valor pago: ");
    scanf("%d", &valorPago);

    // Verifica se o valor pago é suficiente
    if (valorPago < valorCompra) {
        printf("Valor pago e insuficiente para cobrir a compra.\n");
        return 1; // Encerra o programa com erro
    }

    // Cálculo do troco
    troco = valorPago - valorCompra;

    // Cálculo da quantidade mínima de notas
    notas100 = troco / 100;
    troco = troco % 100;

    notas10 = troco / 10;
    troco = troco % 10;
    // O que sobra são as notas de 1 real
    notas1 = troco; 

    // Exibição dos resultados
    printf("\n--- TROCO ---\n");
    printf("Valor da compra: R$ %d\n", valorCompra);
    printf("Valor do troco: R$ %d\n", valorPago - valorCompra);
    printf("Notas de R$100: %d\n", notas100);
    printf("Notas de R$10:  %d\n", notas10);
    printf("Notas de R$1:   %d\n", notas1);

    return 0;
}
