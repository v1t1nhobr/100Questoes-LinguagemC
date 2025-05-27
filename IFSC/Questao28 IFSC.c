#include <stdio.h>

int main()
{
    
    int valorN, c, d, u;
    
    printf("Informe um número de 3 algarismos: ");
    scanf("%3d",&valorN);
    
    c = valorN / 100;
    d = valorN % 100 / 10;
    u = valorN % 100 % 10;
    
    printf("\nInverso do número %d = %d%d%d", valorN, u, d, c);
    
    
    return 0;
}