#include <stdio.h>

int main()
{

	int num1, num2, num3;
	float media;

	printf("Digite as notas do aluno: ");
	scanf("%d",&num1);
	scanf("%d",&num2);
	scanf("%d",&num3);
	
	media = (num1 + num2 + num3) / 3.0;

	printf ("\nMedia: %.2f\n", media);

    if (media >= 7)
        printf("Aprovado");
    else if (media < 7 && media >= 4)
        printf("Em prova final");
    else
        printf("Reprovado");
    
	return 0;
}