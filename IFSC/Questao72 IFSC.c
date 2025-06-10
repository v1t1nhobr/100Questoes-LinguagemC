#include <stdio.h>
#include <string.h>

int main()
{
    int idade;
    char nome[50];

    printf("\n.....................Wyden Futebol Clube.........................\n");

    printf("Digite o nome do atleta: ");
    fgets(nome, sizeof(nome), stdin);

    // Remove o '\n' do final da string, se existir
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite a idade do atleta: ");
    scanf("%d", &idade);

    printf("\nNome do atleta: %s\n", nome);

    switch (idade) {
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        printf("Categoria: Infantil\n");
        break;

        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        printf("Categoria: Juvenil\n");
        break;

        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
         printf("Categoria: Junior\n");
        break;

        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        printf("Categoria: Profissional\n");
        break;

        default:
            printf("Fora de categoria\n");
    }

    return 0;
}
