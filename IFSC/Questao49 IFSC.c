#include <stdio.h>

int main()
{
    
    int vx [3];
    
    printf("Insira 3 valores de comprimento: ");
    scanf("%d",&vx[0]);
    scanf("%d",&vx[1]);
    scanf("%d",&vx[2]);
    
    printf("\n\n");
    
    
    if(vx[0] < (vx[1] + vx[2]) && vx [1] < (vx[2] + vx[0]) && vx[2] < (vx[0] + vx [1])){
        printf("E um triangulo\n\n");
        
        if (vx[0] == vx [1] && vx[1] == vx [2] && vx[2] == vx [0])
            printf("Triangulo equilatero");
            
        else if(vx[0] != vx [1] && vx[1] != vx [2] && vx[2] != vx [0])
            printf("Triangulo escaleno");
            
        else 
            printf("Triangulo isosceles");
    }    
    else
        printf("Nao e um triangulo");
    
           
return 0;
}