#include <stdio.h>

int main() {
    int mes, ano, dias;

    printf("Digite o mes: ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);


    switch(mes) {
        case 1:
            dias = 31;
            break;

        case 2:
            // Verifica se e ano bissexto
            if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
                dias = 29;
            } else {
                dias = 28;
            }
            break;

        case 3:
            dias = 31;
            break;

        case 4:
            dias = 30;
            break;

        case 5:
            dias = 31;
            break;

        case 6:
            dias = 30;
            break;

        case 7:
            dias = 31;
            break;

        case 8:
            dias = 31;
            break;

        case 9:
            dias = 30;
            break;

        case 10:
            dias = 31;
            break;

        case 11:
            dias = 30;
            break;

        case 12:
            dias = 31;
            break;

        default:
            printf("Mes invalido.\n");
            return 1;
    }

    printf("O mes %d do ano %d tem %d dias.\n", mes, ano, dias);

    return 0;
}
