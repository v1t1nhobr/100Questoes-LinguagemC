#include <stdio.h>

int main() {
    char estado;

    // Solicita ao usuário a primeira letra do estado civil
    printf("Digite a primeira letra do estado civil (S, C, V, D): ");
    scanf(" %c", &estado);  // Espaço antes do %c ignora espaços em branco

    if (estado >= 'a' && estado <= 'z') {
        estado = estado - 32;
    }

    switch (estado) {
        case 'S':
            printf("Solteiro\n");
            break;
        case 'C':
            printf("Casado\n");
            break;
        case 'V':
            printf("Viuvo\n");
            break;
        case 'D':
            printf("Divorciado ou Desquitado\n");
            break;
        default:
            printf("Estado civil invalido.\n");
    }

    return 0;
}
