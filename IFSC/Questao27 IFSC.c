#include <stdio.h>

int main()
{
    
    int codigo, digitoV;
    
    printf("Informe o código (até 5 dígitos): ");
    scanf("%5d",&codigo); // %5d aceita apenas 5 dígitos
    
    digitoV = codigo % 7;
    
    printf("\nDígito verificador de %05d = %d", codigo, digitoV);
    // %05d alinha a impressão à direita, e preenche os espaços vazios à esquerda com '0'
    
    return 0;
}