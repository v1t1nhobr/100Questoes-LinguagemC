#include <stdio.h>
#include <math.h>
// Funções da biblioteca math.h retornam valor do tipo DOUBLE

int main()
{
    
    int a, b, soma; //Declaraçao de Variaveis
    double squareSoma;
    
    printf("Informe um valor inteiro de A: ");
    scanf("%d", &a);
    
    printf("Informe um valor inteiro de B: ");
    scanf("%d", &b);
    
    soma = a + b;
    squareSoma = pow(soma, 2);
    
    printf("\n%d + %d = %d", a, b, soma);
    printf("\n(%d + %d) ² = %.0lf", a, b, squareSoma);

    return 0;
}