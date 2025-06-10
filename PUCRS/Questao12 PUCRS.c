#include <stdio.h>

int main() {
    int valores[20];
    int i, j;

    // Ler 20 valores
    for (i = 0; i < 20; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    for (i = 0; i < 20; i++) {
        int n = valores[i];
        printf("\nTabuada de %d:\n", n);
        for (j = 1; j <= n; j++) {
            printf("%d x %d = %d\n", j, n, j * n);
        }
    }

    return 0;
}
