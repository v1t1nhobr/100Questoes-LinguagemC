#include <stdio.h>

int main()
{

    int opcao;

    printf("Digite as opcoes de venda \n1-Venda a Vista\n2-Venda a Prazo 30 dias\n3-Venda a Prazo 60 dias\n4-Venda a Prazo com 90 dia\n5-Venda com cartao de debito\n6-Venda com cartao de credito");
    printf("\n\n");
scanf("%d", &opcao);

        switch(opcao){

    case 1:
        printf("Venda a vista");
        break;
         case 2:
        printf("Venda a prazo 30 dias");
        break;
         case 3:
        printf("Venda a prazo 60 dias");
        break;
         case 4:
        printf("Venda a prazo 90 dias");
        break;
         case 5:
        printf("Venda com cartao");
        break;
         case 6:
        printf("Venda com cartao de credito");
        break;

         default:
            printf("Opcao invalida");

        }

    return 0;
}