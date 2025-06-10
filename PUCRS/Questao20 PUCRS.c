#include <stdio.h>

int main() {
    int numero;
    int Negativos = 0;

    printf("Digite numeros inteiros ou 0 para encerrar:\n");

    do {
        scanf("%d", &numero);

        if (numero < 0) {
            somaNegativos += numero;
        }

    } while (numero != 0);

    printf("Somatorio dos numeros negativos: %d\n", Negativos);

    return 0;
}
