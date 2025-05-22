#include <stdio.h>

int main()

{
    
    float numA, numB, aux; //Declaraçao de Valores
    
    printf("Informe o valor de NumA : ");
    scanf("%f", &numA);
    
    printf("Informe o valor de NumB : ");
    scanf("%f", &numB);
    
    aux = numA;
    numA = numB;
    numB = aux;
    
    printf("Número B = %.2f", numA);
    printf("\nNúmero A = %.2f", numB);
    
    
    return 0;
}