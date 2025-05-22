#include <stdio.h>

int main(){
    
    float HT, VH, PD; //Horas Trabalhadas, Valor da Hora, Percentual de Desconto
    float SB, TD, SL; //Salario Bruto, Total de Desconto, Salario Liquido

    //a) Valor para a variavel HT
    printf("Digite as horas trabalhadas no mes: \n", HT);
    scanf("%f", &HT);

    //b) Valor para a variavel VH
    printf("Digite o valor da hora: \n");
    scanf("%f", &VH);

    //c) Valor para a variavel PD
    printf("Digite o percentual de desconto: \n");
    scanf("%f", &PD);

    //d) Calculo do salario bruto 
    SB= HT * VH;

    //e) Total de desconto
    TD = (PD/100) * SB;

    //f) Salario liquido
    SL = SB - TD;

    //g) Apresentacao dos valores
    printf("\n----FOLHA DE PAGAMENTOS----\n ");
    printf("Horas Trabalhadas: %.2fh \n", HT);
    printf("Salario Bruto: R$%.2f \n", SB);
    printf("Descontos: R$%.2f \n", PD);
    printf("Salario Liquido: R$%.2f", SL);

    return 0;

}