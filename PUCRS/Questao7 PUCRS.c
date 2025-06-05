#include <stdio.h>
#include <string.h>

int main() {
    char cod[30] = "1";

    while (1) {
        printf("Digite o codigo de aluno (ou 0 para sair): ");
        fgets(cod, sizeof(cod), stdin);

        // Remove o '\n' se existir
        cod[strcspn(cod, "\n")] = '\0';

        // Se for 0, encerra
        if (strcmp(cod, "0") == 0)
            break;

        float nota[3];
        float total = 0;
        float media;

        for (int i = 0; i < 3; i++) {
            printf("Digite a %d nota: ", i + 1);
            while (scanf("%f", &nota[i]) != 1) {
                printf("Entrada invalida. Tente novamente: ");
                while (getchar() != '\n'); // limpa buffer
            }
            total += nota[i];
        }

        while (getchar() != '\n'); // limpa o \n deixado pelo ultimo scanf

        media = total / 3;
        printf("\nMedia das notas: %.1f\n\n", media);
    }

    printf("Programa encerrado.\n");
    return 0;
}
