#include <stdio.h>
#include <stdlib.h>

int main(){

int numero1;

int numero2;


printf("Digite um numero: ");
scanf("%d", &numero1);
printf("\n\n");

printf("Digite outro numero: ");
scanf("%d", &numero2);


if(numero1 > numero2){
    printf("%d e o maior numero", numero1);


}else{

printf("%d e o maior numero", numero2);
}

return 0;
}