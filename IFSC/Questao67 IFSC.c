#include <stdio.h>

int main()
{
    
    float salario, aumento;
    
    printf("Digite o salario atual: "); 
    scanf("%f", &salario);
    
    if(salario >= 1500.0 && salario < 1750.0)
        aumento = salario * 0.12;
    else if(salario >= 1750.0 && salario < 2000.0)
        aumento = salario * 0.10;
    else if(salario >= 2000.0 && salario < 3000.0)    
        aumento = salario * 0.07;
    else if(salario >= 3000.0)
        aumento = salario * 0.05;
    else
        aumento = salario * 0.15;
        
    printf("Aumento: %.2f\n", aumento);
    printf("Salário: %.2f", salario + aumento);

    return 0;
}