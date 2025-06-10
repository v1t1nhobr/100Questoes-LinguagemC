#include <stdio.h>

int main() {
    int N, i;
    float H = 0.0;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        H += 1.0 / i;
    }

    printf("O valor da soma H e: %.4f\n", H);

    return 0;
}
