#include <stdio.h>

int main() {
    char nomeCliente[100];
    int qtdParafusos, qtdPorcas, qtdArruelas;
    float precoParafuso = 1.50;  // exemplo de preço unitário
    float precoPorca = 1.00;
    float precoArruela = 0.50;
    float totalParafusos, totalPorcas, totalArruelas;
    float descontoParafusos, descontoPorcas, descontoArruelas;
    float totalDesconto, totalPagar;

    // Entrada de dados
    printf("Digite o nome do cliente: ");
    fgets(nomeCliente, sizeof(nomeCliente), stdin);

    printf("Quantidade de parafusos comprados: ");
    scanf("%d", &qtdParafusos);

    printf("Quantidade de porcas compradas: ");
    scanf("%d", &qtdPorcas);

    printf("Quantidade de arruelas compradas: ");
    scanf("%d", &qtdArruelas);

    // Cálculo dos totais por tipo de peça
    totalParafusos = qtdParafusos * precoParafuso;
    totalPorcas = qtdPorcas * precoPorca;
    totalArruelas = qtdArruelas * precoArruela;

    // Cálculo dos descontos
    descontoParafusos = totalParafusos * 0.20;
    descontoPorcas = totalPorcas * 0.10;
    descontoArruelas = totalArruelas * 0.30;

    // Total de desconto
    totalDesconto = descontoParafusos + descontoPorcas + descontoArruelas;

    // Total a pagar com descontos aplicados
    totalPagar = (totalParafusos + totalPorcas + totalArruelas) - totalDesconto;

    // Exibição dos resultados
    printf("\n--- RESUMO DA COMPRA ---\n");
    printf("Cliente: %s", nomeCliente);
    printf("Parafusos comprados: %d\n", qtdParafusos);
    printf("Porcas compradas:    %d\n", qtdPorcas);
    printf("Arruelas compradas:  %d\n", qtdArruelas);
    printf("Total de desconto:   R$ %.2f\n",
