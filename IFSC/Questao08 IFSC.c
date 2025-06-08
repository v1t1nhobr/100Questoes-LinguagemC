#include <stdio.h>

int main(){
    float BASE, ALTURA, AREA;

    //Definir o valor da base
    printf("Qual o valor da base do triangulo: \n");
    scanf("%f", &BASE);

    //Definir a Altura
    printf("Qual o valor da altura do triangulo: \n");
    scanf("%f", &ALTURA);

    //Calculo da area do triangulo
    AREA = (BASE * ALTURA) / 2;

    //Resultado
    printf("A area do triangulo e: %.2f \n", AREA);
    
    return 0;
}
