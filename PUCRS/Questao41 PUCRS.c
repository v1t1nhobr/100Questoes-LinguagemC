#include <stdio.h>

int main() {
    float n1, n2, n3, media_ponderada, media_soma = 0.0;
    int i;

    for (i = 1; i <= 60; i++) {
        printf("Aluno %d:\n", i);
        printf("Digite a nota 1: ");
        scanf("%f", &n1);
        printf("Digite a nota 2: ");
        scanf("%f", &n2);
        printf("Digite a nota 3: ");
        scanf("%f", &n3);

        media_ponderada = (n1 * 2 + n2 * 4 + n3 * 3) / 10;
        media_soma += media_ponderada;

        printf("Média do aluno %d: %.2f - ", i, media_ponderada);
        if (media_ponderada >= 7.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }

        printf("\n");
    }

    float media_geral = media_soma / 60;
    printf("Média geral da turma: %.2f\n", media_geral);

    return 0;
}
