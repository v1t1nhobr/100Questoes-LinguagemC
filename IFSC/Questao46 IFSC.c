#include <stdio.h>

int main() {
    float valor = 60.00;
    int diarias;
    float total, taxa, valor_final;

    char msg[] = "Seja bem-vindo";
    char nome[30];

    printf("Digite o nome do cliente: ");
    scanf(" %30[^\n]", nome);  // espaço antes de %30 elimina o \n pendente

    printf("%s %s\n\n", msg, nome);

    printf("Valor da diária: R$ %.2f\n", valor);
    printf("Digite o número de diárias: ");
    scanf("%d", &diarias);

    total = valor * diarias;

    if (diarias > 15) {
        taxa = 5.50 * diarias;
    } else if (diarias == 15) {
        taxa = 6.00 * diarias;
    } else {
        taxa = 8.00 * diarias;
    }

    valor_final = total + taxa;

    printf("\nValor total das diárias: R$ %.2f", total);
    printf("\nTaxa de serviço: R$ %.2f", taxa);
    printf("\nValor geral a pagar: R$ %.2f\n", valor_final);

    return 0;
}
