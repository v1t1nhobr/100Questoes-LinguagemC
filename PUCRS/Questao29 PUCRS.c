#include <stdio.h>

int main() {
    int numero, soma = 0, contador = 0;

    printf("Digite numeros inteiros ou digite um numero fora do intervalo 13 a 73 para encerrar:\n");

    while (1) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero < 13 || numero > 73) {
            break; 
        }

        soma += numero;
        contador++;
    }

    if (contador > 0) {
        float media = (float)soma / contador;
        printf("A media aritmética entre 13 e 73 e: %.2f\n", media);
    } else {
        printf("Numero invalido.\n");
    }

    return 0;
}
