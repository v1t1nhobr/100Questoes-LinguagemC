#include <stdio.h>

int main()
{
    
    float anos;
    
    printf("Funcao de crescimento: \n");
    printf("Chico(x)= 1.50 + 0.02 * x | x = ano\n");
    printf("Ze(x) = 1.10 + 0.03 * x | x = ano\n");
    
    printf("Quantos anos para que Chico(x) < Ze(x) ?\n");
    printf("Chico(x) = Ze(x) <=> 1.50 + 0.02 * x = 1.10 + 0.03 * x\n");
    
    anos = (1.50 - 1.10) / (0.03 - 0.02);
    
    printf("Anos em que a idade dos dois e igual: %.0f anos\n", anos);
    printf("Para Ze(x) > Chico(x) = %.0f anos\n", anos + 1.0);

    return 0;
}
