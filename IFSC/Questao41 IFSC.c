#include <stdio.h>
#define SMINIMO 1518.0

int main()
{
    int car, comFixa; //Atribuiçao 
    
    printf("Qual a quantidade de carros vendidos no mes: "); //Le as vendas de carros vendidas
    scanf("%d", &car);
    
    comFixa = car * 50.0;
    
    float totalVendas = 0;
    float vendaCar;
    int i = 1;
    while ( i <= car ){
        
        printf("Informe o valor do  %d  carro: ", i); //Le o valor do carro
        scanf("%f", &vendaCar);
        
        totalVendas = totalVendas + vendaCar;
        
        i += 1;
        
    }
    
    float salario;
    
    salario = SMINIMO * 2 + comFixa + totalVendas * 0.05;
    
    printf("\nSalario minimo atual: R$: %.2f", SMINIMO);
    printf("\nCarros vendidos: %d", car);
    printf("\nComissao fixa: R$ %d * 50.0 = %d", car, comFixa);
    printf("\nTotal de vendas: R$ %.2f", totalVendas);
    printf("\nComissao de 5 porcento sobre as vendas:  %.2f * 5 porcento = R$ %.2f", totalVendas, totalVendas * 0.05);
    
    printf("\n\nSalario: %.2f", salario);
    
    return 0;
}