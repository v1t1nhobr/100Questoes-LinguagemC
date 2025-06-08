#include <stdio.h>

int main()
{
    int num = 1;
    int i = 0, soma = 0;
    float media;
    while(num != 0){
        printf("Digite um numero par: ");
        scanf("%d", &num);
        
        if(num == 0)
            break;
        
        if (num%2 == 0){
            soma = soma + num;
            i += 1;
            media = soma / i;
        }
        
    }
    
    printf("\nMedia dos numeros pares: %.3f", media);
    
    return 0;
}
