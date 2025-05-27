#include <stdio.h>

int main()

{
    
    int int1, int2;
    
    printf("Informe dois valores inteiros : ");
    scanf("%d", &int1);
    scanf("%d", &int2);
    
    printf("Quociente de %d / %d = %d", int1, int2, int1 / int2);
    printf("\nResto de %d / %d = %d", int1, int2, int1 % int2);
    
    
    return 0;
}