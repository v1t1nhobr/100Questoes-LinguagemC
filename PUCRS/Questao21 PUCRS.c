#include <stdio.h>

int main() {
    int numero;
    unsigned long long produtorio = 1; 
    int temPar = 0; 

    printf("Digite numeros inteiros e positivos ou 0 para encerrar:\n");

    do {
        scanf("%d", &numero);

        if (numero > 0 && numero % 2 == 0) {
            produtorio *= numero;
            temPar = 1;
        }

    } while (numero != 0);

    if (temPar)
        printf("Produtorio dos numeros pares: %llu\n", produtorio);
    else
        printf("Nao houve numero par.\n");

    return 0;
}
