#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int primos[20] = {1, 2, 3};
    int count = 3;              
    int num = 4;

    while (count < 20) {
        if (ehPrimo(num)) {
            primos[count] = num;
            count++;
        }
        num++;
    }

    // Exibe os 20 numeros primos
    printf("20 numeros primos:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", primos[i]);
    }
    printf("\n");

    return 0;
}
