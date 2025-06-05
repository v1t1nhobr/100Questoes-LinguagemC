#include <stdio.h>

int main(){

float SaldoInicial = 1000;
float Retirada;


printf("Saldo inicial %.2f \n", SaldoInicial);

printf("Digite o valor a ser retirado: ");
scanf("%f", &Retirada);



float Saldo = SaldoInicial - Retirada;


printf("Saldo da conta %.2f\n", Saldo);

if(Saldo < 0){
    printf("Conta estourada procure o gerente\n\n\n\n");

}


return 0 ;

}