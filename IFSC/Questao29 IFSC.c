#include <stdio.h>

int main()
{
    
    int data, dia, mes, ano;
    
    printf("Informe a data no formato DDMMAA: ");
    scanf("%6d",&data);
    
    dia = data / 10000;
    mes = data % 10000 / 100;
    ano = data % 10000 % 100;
    
    printf("\nInverso da Data %d = %02d%02d%02d", data, ano, mes, dia);
    
    
    return 0;
}