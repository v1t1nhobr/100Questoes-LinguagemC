#include <stdio.h>

int main()
{
    
    int saldo;
    float credito = 0;
    
    printf("Informe saldo: "); scanf("%d", &saldo);

    if(saldo>=201 && saldo<=400)
        credito = saldo * 20/100.0;
    if(saldo>=401 && saldo<=600)
        credito = saldo * 30/100.0;
    if(saldo>=601)
        credito = saldo * 40/100.0;
        
    printf("saldo: %.d\n", saldo);
    printf("crédito: %.2f", credito);
    
    return 0;
}