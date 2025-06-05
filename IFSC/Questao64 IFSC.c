 #include <stdio.h>
#include <string.h>

int main() {
    char codigo[10]; // armazena como "ABCD"
    int quantidade;
    float preco_unitario, total;

    printf("Digite o código do produto (ex: ABCD): ");
    scanf("%s", codigo);

    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);

    if (strcmp(codigo, "ABCD") == 0) {
        preco_unitario = 5.30;
    } else if (strcmp(codigo, "XYPK") == 0) {
        preco_unitario = 6.00;
    } else if (strcmp(codigo, "KLMP") == 0) {
        preco_unitario = 3.20;
    } else if (strcmp(codigo, "QRST") == 0) {
        preco_unitario = 2.50;
    } else {
        printf("Código inválido.\n");
        return 1; // Encerra o programa
    }

    total = preco_unitario * quantidade;
    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}