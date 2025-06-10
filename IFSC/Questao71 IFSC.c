#include <stdio.h>
#include <stdlib.h>
int main()
{

 char nome[50];
 int peso;
 float altura;

    printf("Digite o nome: ");
    scanf(" %[^\n]", nome);
    //fgets(nome, sizeof(nome), stdin);

    printf("Digite a altura e peso: ");
    scanf("%f%d", &altura, &peso);

    printf("Nome informado: %s\n", nome);
    printf("Altura informada: %.2f\n", altura);
    printf("Peso informado: %d\n", peso);

  char nome2[50];
  int peso2;
  float altura2;

    printf("Digite o nome: ");
    scanf(" %[^\n]", nome2);
    //fgets(nome, sizeof(nome), stdin);

    printf("Digite a altura e peso: ");
    scanf("%f%d", &altura2, &peso2);

    printf("\n--- Resultados ---\n");
    if (peso > peso2)
        printf("%s e mais pesado(a).\n", nome);
    else if (peso2 > peso)
        printf("%s e mais pesado(a).\n", nome2);
    else
        printf("Os dois possuem o mesmo peso.\n");

    if (altura > altura2)
        printf("%s e mais alto(a).\n", nome);
    else if (altura2 > altura)
        printf("%s e mais alto(a).\n", nome2);
    else
        printf("Os dois tem a mesma altura.\n");

 return 0;
}