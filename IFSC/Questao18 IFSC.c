#include <stdio.h>


int main()
{
    //Declaraçao de Variaveis 
    float comp, alt, larg, vol;
    
    printf("Informe o comprimento em cm: ");//Definiçao do comrpimento
    scanf("%f",&comp);
    
    printf("\nInforme a altura em cm: ");//Definçao da Altura
    scanf("%f",&alt);
    
    printf("\nInforme a largura em cm: ");//Definiçao da Largura
    scanf("%f",&larg);
    
    vol = comp * alt * larg; //
    
    printf ("\n\n O volume da caixa retangular e igual a: %.2f  cm3", vol);

    return 0;
    
}