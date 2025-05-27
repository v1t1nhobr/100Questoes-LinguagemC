#include <stdio.h>

int main()
{
    
    float venda, comissao;
    char nome [50];
    
    printf("Informe o nome do vendedor: ");
    // scanf("%s[^\n]", nome);
    fgets(nome, 50, stdin);
    
    printf("\nInforme o valor da venda em R$: ");
    scanf("%f",&venda);
    
    if (venda > 50000.0)
        comissao = venda * 0.12;
    else if (venda >= 30000.0 && venda <= 50000.0)
        comissao = venda * 0.095;
    else
        comissao = venda * 0.07;
        
    printf("\n\nVendedor: %s", nome);
    printf("\nVenda: %.2f R$", venda);
    printf ("\nComissão: %.2f R$", comissao);
    
    return 0;
}