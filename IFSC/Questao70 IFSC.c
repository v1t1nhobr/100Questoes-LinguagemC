#include <stdio.h>

int main()
{
    
    int n;
    
    printf("Digite o numero: "); 
    scanf("%d", &n);
    
    if(n%2==0)
        printf("Retorno: %d = verdadeiro", n%2==0);

    return 0;
}