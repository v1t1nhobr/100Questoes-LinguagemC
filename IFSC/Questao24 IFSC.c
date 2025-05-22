#include <stdio.h>

int main()

{
    
    float quiloH, metrosS; //Declaraçao de Variaveis
    
    printf("Informe velocidade média em Km/h : ");
    scanf("%f", &quiloH);
    
    metrosS = quiloH * 1000 / 3600 ;
    
    printf("%0.2f Km/h = %.2f m/s", quiloH, metrosS);
    
    
    return 0;
}