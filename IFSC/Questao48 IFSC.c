#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite o numero A: ");
    scanf("%d", &a);

    printf("Digite o numero B: ");
    scanf("%d", &b);

    printf("Digite o numero C: ");
    scanf("%d", &c);

    if (a < b && a < c) {
        printf("A e o menor valor\n");
    } else if (b < a && b < c) {
        printf("B e o menor valor\n");
    } else if (c < a && c < b) {
        printf("C e o menor valor\n");
    } else {
        printf("Possui numeros iguais ou nao foi possivel determinar um unico menor.\n");
    }

    return 0;
}
