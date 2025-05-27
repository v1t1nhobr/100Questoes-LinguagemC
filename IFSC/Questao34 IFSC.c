#include <stdio.h>

int main()
{
    
    int Valor1, Valor2, Valor3;
    
    printf("Imprima 3 valores: ");
    scanf("%d",&Valor1);
    scanf("%d",&Valor2);
    scanf("%d",&Valor3);
    
    printf("\n\n");
    // Valor1/Valor2/Valor3 ou Valor1/Valor3/Valor2
    if(Valor1 < Valor2 && Valor1 < Valor3) {                
        printf("%d , ", Valor1);
        if (Valor2 < Valor3){
            printf("%d , ", Valor2);
            printf("%d", Valor3);
        }
        else if (Valor3 < Valor2) {
            printf("%d , ", Valor3);
            printf("%d", Valor2);
        }
    }                       
     // valor2/valor1/valor3 ouvalor2/valor3/valor1                 
    else if (Valor2 < Valor1 && Valor2 < Valor3) {          
        printf("%d , ", Valor2);
        if (Valor1 < Valor3){
            printf("%d , ", Valor1);
            printf("%d", Valor3);
        }
        else if (Valor3 < Valor1){
            printf("%d , ", Valor3);
            printf("%d", Valor1);
        }
    }   
    // valor3/valor1/valor2 ou valor3/valor2/valor1
    else if (Valor3 < Valor1 && Valor3 < Valor2) {          
        printf("%d , ", Valor3);
        if (Valor1 < Valor2){
            printf("%d , ", Valor1);
            printf("%d", Valor2);
        }
        else if (Valor2 < Valor1){
            printf("%d , ", Valor2);
            printf("%d", Valor1);
        }
    }       
return 0;
}