#include <stdio.h>

int main() {
    int codigo, quantidade;
    float preco_unitario, total;

    printf("Digite o código do produto: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);

    // Atribuicao de preco e verificacao de codigo
    switch (codigo) {
        case 1001:
            preco_unitario = 5.32;
            break;
        case 1324:
            preco_unitario = 6.45;
            break;
        case 6548:
            preco_unitario = 2.37;
            break;
        case 987: 
            preco_unitario = 5.32;
            break;
        case 7623:
            preco_unitario = 6.45;
            break;
        default:
            printf("Código de produto inválido.\n");
            return 1; // Encerra o programa

    total = preco_unitario * quantidade;
    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}