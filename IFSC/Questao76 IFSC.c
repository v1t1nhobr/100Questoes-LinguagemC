#include <stdio.h>

int main()
{

    int data;
    printf("Digite a data no formato DDMMAAAA: ");
    scanf("%d", &data);

int ano = data % 10000;
int resto = data / 10000;

int mes = resto % 100;
int dia = resto / 100;

printf("\nDia %d\n", dia);
printf("\nMes %d\n", mes);
printf("\nAno %d\n", ano);

if ((mes == 9 && dia < 23) || (mes == 6 && dia >= 21) || (mes == 7) || (mes == 8)) {
    printf("Estacao: Inverno");
}
else if ((mes == 9 && dia >= 23) || (mes == 10) || (mes == 11) || (mes == 12 && dia < 21)) {
    printf("Estacao: Primavera");
}
    
return 0;
}