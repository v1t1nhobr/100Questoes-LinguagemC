#include <stdio.h>

int main()
{
    int nota;
    
    printf("Insira nota do aluno: ");
    scanf("%d",&nota);
    
    printf("\nNota: %d\n", nota);
    
    
    if(nota >= 0 && nota <= 49)
        printf("Insuficiente");
    if(nota >= 50 && nota <= 64)
        printf("Regular");
    if(nota >= 65 && nota <= 84)
        printf("Bom");
    if(nota >= 85 && nota <= 100)
        printf("Ótimo");
    
return 0;
}