
#include <stdio.h>
#include <math.h>


int main()
{
    
    int valor;
    
    printf("Informe um valor: ");
    scanf("%d",&valor);
    
    
    printf ("\n\n %d ^ 2 = %d", valor, valor * valor);
    printf ("\n %d ^ 3 = %d", valor, valor * valor * valor);


    //Aplicaçao da biblioteca Math
    printf ("\n\n %d ^ 2 = %.2lf", valor, pow(valor,2));
    printf ("\n %d ^ 3 = %.2lf", valor, pow(valor,3));
    
    return 0;
    
}