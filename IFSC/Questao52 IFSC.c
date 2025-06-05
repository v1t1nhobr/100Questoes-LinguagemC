#include <stdio.h>

int main(){

int a;
int b;

printf(" Digite o numero de A: ");
scanf("%i",&a);

printf(" Digite o numero de b: ");
scanf("%i",&b);



if (a == b ){
    printf("A e igual a B");


}else if(a != b){
printf("A e diferenete de B\n");

}

if(a < b){
printf("A e menor que b \n");

}else{
printf("B e menor que A");
}

return 0;
}