#include <stdio.h>

int main()

{
    
    float salBruto, salPrev, salLiq;
    
    printf("Informe o salário bruto : ");
    scanf("%f", &salBruto);
    
    salPrev = salBruto - (salBruto * 10/100);
    salLiq = salPrev - (salPrev * 5/100);
    
    printf("Salário Líquido = (%0.2f - %0.2f * 10/100) - %0.2f * 5/100 = %0.2f", salBruto, salBruto, salPrev, salLiq);
    printf("\nSalário Líquido = (%0.2f - %0.2f * 14.5/100) = %0.2f", salBruto, salBruto, salBruto * 85.5 /100);
    
    
    
    return 0;
}