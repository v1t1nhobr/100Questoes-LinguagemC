#include <stdio.h>

int main()
{

	int opcao, num1, num2, num3;

	printf("Digite 3 numeros: ");
	scanf("%d",&num1);
	scanf("%d",&num2);
	scanf("%d",&num3);

    do{
	printf("\nDigite opcao 2, 3, ou 4: "); scanf("%d", &opcao);
	
	printf ("\n");

	switch (opcao){
	    
	    case 2: printf("%d", num1);
	    break;
	    case 3: printf("%d", num2);
	    break;
	    case 4: printf("%d", num3);
	    break;
	    
	    default: printf("Opcao invalida");
	}
    }while (opcao < 2 || opcao  > 4);
    
	return 0;
}