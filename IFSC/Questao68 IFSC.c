#include <stdio.h>

int main()
{
    float salario, desconto;

    printf("Digite o salario atual: "); 
    scanf("%f", &salario);

    desconto = salario * 0.11;

    if (desconto > 318.2)
        desconto = 318.2;

    printf("Desconto: %.2f\n", desconto);

    return 0;
}
