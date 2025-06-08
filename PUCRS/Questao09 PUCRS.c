#include <stdio.h>

int main()
{
    
    float menor = 99999999999;
    float maior = -99999999999;
    float num;
    for ( int i = 0; i < 50; i++){
        
    printf("Informe um numero: ");
    scanf("%f", &num);
        
        if(num > maior)
            maior = num;
        
        if (num < menor)
            menor = num;
    }

    printf("\nNumero maior: %.3f", maior);
    printf("\nNumero menor: %.3f", menor);
    
    return 0;
}
