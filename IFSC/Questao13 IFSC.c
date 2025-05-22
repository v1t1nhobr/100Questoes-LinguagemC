#include <stdio.h>

int main(){
    float f, c;

     // Solicita a temperatura em Fahrenheit
     printf("Qual a temperatura em fahrenheit: ");
     scanf("%f", &f);

     //Conversao para Celsius 
     c =(f - 32)*(5.0 / 9.0);

     //Resultado
     printf("A temperatura em celsius e: %.2f Graus Celsius \n", c);

     return 0;
     
}