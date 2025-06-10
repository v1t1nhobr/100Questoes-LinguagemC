#include <stdio.h>
#include <math.h>

int main(){

    float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    printf("Numero digitado %.1f\n", numero);
   
    int opcao;
    printf("Escolha a opcao de calculo\n 101- Raiz quadrada \n 102-A metatde\n 103- 10porcento do numero\n 104-O dobro");
    scanf("%d", &opcao);

    if( opcao == 101){
        printf("A raiz quadrada do numero e: %f", sqrt(numero));

    }else if(opcao == 102){
    printf("A metade do numero e: %.1f", numero /2);

    }else if(opcao == 103){
    printf(" 10%% de %.1f e: %.2f",numero, numero * 10/100);

    }else if(opcao == 104){
    printf("O dobro de %.2f e: ", numero * 2);

    }

    return 0;
}