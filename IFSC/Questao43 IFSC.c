#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "");

    char nome[20];
    char categoria;
    float salario;


    printf("Digite o nome do funcionario: ");
    scanf("%s", nome);
    printf("Nome do funcionario: %s\n\n", nome);

    getchar();


    printf("Digite a categoria: ");
    scanf("%c", &categoria);

    printf("Categoria: %c\n\n", categoria);

    printf("Digite o salario atual: ");
    scanf("%f", &salario);
    printf("Salario atual: R$%.2f", salario);
    printf("\n\n");

    if(categoria == 'a' || categoria == 'c' || categoria == 'f' || categoria == 'h' ){
        printf("Reajuste de salario de 10%% ou seja: R$%.2f ", salario * 0.10 );
        printf(" Total após reajuste: %.2f", salario * 0.10 + salario );

    }else if(categoria == 'b' || categoria == 'd' || categoria == 'e' || categoria == 'i'|| categoria == 't'){
        printf("Reajuste de salário de 15%% ou seja: %.2f ", salario * 0.15 );
        printf(" Total após reajuste: %.2f", salario * 0.15 + salario );

    }else if(categoria == 'k' || categoria == 'r' ){
        printf("Reajuste de salario de 25%% ou seja: R$%.2f ", salario * 0.25 );
        printf(" Total após reajuste: R$%.2f", salario * 0.25 + salario );

    }else if(categoria == 'l' || categoria == 'm' || categoria == 'n' || categoria == 'o'|| categoria == 'p'|| categoria == 'q'|| categoria == 's'){
        printf("Reajuste de salario de 35%% ou seja: R$%.2f ", salario * 0.35 );
        printf(" Total apos o reajuste: R$%.2f", salario * 0.35 + salario );

    }else if(categoria == 'u' || categoria == 'v' || categoria == 'x' || categoria == 'y'|| categoria == 'w'|| categoria == 'z'){
        printf("Reajuste de salário de 50%% ou seja: R$%.2f ", salario * 0.50 );
        printf(" Total apos reajuste: R$%.2f", salario * 0.50 + salario );

    }



printf("\n\n");
printf("\n\n");

 return 0;
}