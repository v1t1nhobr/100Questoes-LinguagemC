#include <stdio.h>

int main() {
    int I;
    float A, B, C, temp;

    printf("Digite um valor inteiro positivo (I): ");
    scanf("%d", &I);

    printf("Digite tres valores reais (A, B, C): ");
    scanf("%f %f %f", &A, &B, &C);

    printf("\nValores lidos: A = %.2f, B = %.2f, C = %.2f\n", A, B, C);

    if (I == 1) {
      
        if (A > B) { temp = A; A = B; B = temp; }
        if (A > C) { temp = A; A = C; C = temp; }
        if (B > C) { temp = B; B = C; C = temp; }

        printf("Ordem crescente: %.2f, %.2f, %.2f\n", A, B, C);
    } 
    else if (I == 2) {
    
        if (A < B) { temp = A; A = B; B = temp; }
        if (A < C) { temp = A; A = C; C = temp; }
        if (B < C) { temp = B; B = C; C = temp; }

        printf("Ordem decrescente: %.2f, %.2f, %.2f\n", A, B, C);
    } 
    else if (I == 3) {
    
        float maior;

       
        if (A >= B && A >= C) {
            maior = A; A = B; B = C; C = maior;
        } else if (B >= A && B >= C) {
            maior = B; B = A; A = C; C = maior;
        } else {
            maior = C; 
        }

        printf("Maior valor entre os outros: %.2f, %.2f, %.2f\n", A, C, B);
    } 
    else {
        printf("Valor invalido para I. Deve ser 1, 2 ou 3.\n");
    }

    return 0;
}
