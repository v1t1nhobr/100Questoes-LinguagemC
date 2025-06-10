#include <stdio.h>

int main() {
    int numero;
    int somaPares = 0, somaTotal = 0;
    int contPares = 0, contImpares = 0, contTotal = 0;

    printf("Digite numeros positivos (0 para encerrar):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break; // Encerra a leitura
        }

        if (numero < 0) {
            printf("Numero invalido. Digite apenas positivos ou 0 para sair.\n");
            continue;
        }

        somaTotal += numero;
        contTotal++;

        if (numero % 2 == 0) {
            contPares++;
            somaPares += numero;
        } else {
            contImpares++;
        }
    }

    printf("\nQuantidade de numeros pares: %d\n", contPares);
    printf("Quantidade de numeros impares: %d\n", contImpares);

    if (contPares > 0)
        printf("Media dos valores pares: %.2f\n", (float)somaPares / contPares);
    else
        printf("Nenhum numero par foi digitado.\n");

    if (contTotal > 0)
        printf("Media geral dos numeros: %.2f\n", (float)somaTotal / contTotal);
    else
        printf("Nenhum numero valido foi digitado.\n");

    return 0;
}
