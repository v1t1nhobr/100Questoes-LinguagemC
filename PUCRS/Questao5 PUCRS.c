#include <stdio.h>

int main()
{
    
    int valor = 0, soma = 0;
    float media;
    
    int i = 0;
    
    while(valor >= 0){
    
        printf("Informe um numero inteiro positivo: (Informe um negativo para finalizar): ");
        scanf("%d",&valor);
        
        if (valor < 0)
            break;
            
        soma = soma + valor;
        i += 1;
    }
    
    media = soma / i;
    
    printf("Soma dos inteiros = %d \n", soma);
    printf("Quantidade de numeros lidos = %d \n", i);
    printf("Media dos numeros lidos: = %d / %d = %f\n", soma, i, media);
    
    return 0;
}