#include <stdio.h>

#define QTD_NOTAS 3

void lerNotas(int notas[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite a %d nota: ", i + 1);
        scanf("%d", &notas[i]);
    }
}

int encontrarMaiorIndice(int notas[], int tamanho) {
    int maior = notas[0];
    int indice = 0;

    for (int i = 1; i < tamanho; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
            indice = i;
        }
    }

    return indice;
}

float calcularMedia(int notas[], int tamanho, int maiorIndice) {
    int soma = 0;

    for (int i = 0; i < tamanho; i++) {
        int peso = (i == maiorIndice) ? 4 : 3;
        soma += notas[i] * peso;
    }

    return soma / (float)(4 + 3 + 3);  // soma dos pesos
}

void mostrarResultado(int cod, int notas[], float mediaFinal) {
    printf("\nCodigo do aluno: %d\n", cod);
    for (int i = 0; i < QTD_NOTAS; i++) {
        printf("Nota %d: %d\n", i + 1, notas[i]);
    }
    printf("Media final: %.2f\n", mediaFinal);
    printf(mediaFinal >= 5.0 ? "Aprovado!\n\n" : "Reprovado!\n\n");
}

int main() {
    int cod;

    while (1) {
        printf("Informe o codigo (negativo para sair): ");
        scanf("%d", &cod);
        if (cod < 0) break;

        int notas[QTD_NOTAS];
        lerNotas(notas, QTD_NOTAS);

        int maiorIndice = encontrarMaiorIndice(notas, QTD_NOTAS);
        float mediaFinal = calcularMedia(notas, QTD_NOTAS, maiorIndice);

        mostrarResultado(cod, notas, mediaFinal);
    }

    return 0;
}
