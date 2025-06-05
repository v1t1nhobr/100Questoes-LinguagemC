#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b ,c;

    printf("Digite o primeiro valor: ");
    scanf("%i", &a);

    printf("Digite o segundo valor: ");
    scanf("%i", &b);

    printf("Digite o terceiro valor: ");
    scanf("%i", &c);

    if(a > b || a > c){
        printf("A e o maior valor");

    }else if(b > a || b > c){
        printf("B e o maior valor");

    }else if(c > a || c > b){
    printf("C e o maior valo");
    }

    return 0;
}