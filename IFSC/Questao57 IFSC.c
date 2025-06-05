#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b;

    printf("Digite o numero A: ");
    scanf("%d", &a);

    printf("Digite o Numero B: ");
    scanf("%d", &b);

    printf("\n\n");

    if( a % b == 0 || b % a == 0 ){
        printf("Sao multiplos entre si");


    }else{
    printf("Nao sao multiplos entre si");
    }

    return 0;
}