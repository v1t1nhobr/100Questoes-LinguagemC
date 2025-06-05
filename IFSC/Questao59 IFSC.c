#include <stdio.h>

int main()
{
    
    int numero;
    
    printf("Informe um numero inteiro: "); scanf("%d",&numero);
    
    
    if(numero%2==0)
        printf("%d e par e ", numero);
    else
        printf("%d e impar e ", numero);
        
    if(numero>=0)
        printf("positivo");
    else
        printf("negativo");


    return 0;
}