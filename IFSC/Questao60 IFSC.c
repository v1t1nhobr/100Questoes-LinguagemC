#include <stdio.h>

int main()
{
    
    int codigo, qnt;
    float valor;
    
    printf("Informe o item desejado:\n\n100 Cachorro quente 1,10;");
    printf("\n101 Bauru simples 1,30;\n102 Bauru c/ovo 1,50;\n103 Hamburger 1,10;");
    printf("\n104 Cheeseburger 1,30;\n105 Refrigerante 1,00\n\n");
    
    printf("Item: "); scanf("%d",&codigo);
    printf("Quantidade: "); scanf("%d", &qnt);
    
    
    switch (codigo){
        
        case 100 : valor = 1.10 * qnt; printf("oi");
        break;
        
        case 101 : valor = 1.30 * qnt;
        break;
        
        case 102 : valor = 1.50 * qnt;
        break;
        
        case 103 : valor = 1.10 * qnt;
        break;
        
        case 104 : valor = 1.30 * qnt;
        break;
        
        case 105 : valor = 1.00 * qnt;
        break;
    }

    printf("\nValor total: %.2f",valor);

    return 0;
}