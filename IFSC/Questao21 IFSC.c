#include <stdio.h>
#include <math.h>
// Funções da biblioteca math.h retornam valor do tipo DOUBLE

int main()

{
    
    int a, b, soma; //Declaraçao de Variaveis
    double squareA, squareB;
    
    printf("Informe um valor inteiro de A: ");
    scanf("%d", &a);
    
    printf("Informe um valor inteiro de B: ");
    scanf("%d", &b);
    
    
    squareA = pow(a, 2);
    squareB = pow(b, 2);
    soma = squareA + squareB;
    
    printf("A² = %d² = %.0lf", a, squareA);
    printf("\nB² = %d² = %.0lf", b, squareB);

    printf("\n%.0lf + %.0lf = %d", squareA, squareB, soma);
    
    return 0;
}