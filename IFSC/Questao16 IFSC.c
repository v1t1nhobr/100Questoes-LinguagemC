#include <stdio.h> 

int main() {
  int a, b, temp; //Declaração de variáveis

  printf("Digite um numero inteiro para a: ");
  scanf("%d", &a); //Armazena o primeiro valor

  printf("Digite outro numero inteiro para b: ");
  scanf("%d", &b); //Armazena o segundo valor

  temp = a; //Armazena o valor de a em uma variável temporária
  a = b; //Atribui o valor de b para a
  b = temp; //Atribui o valor de a para b

  printf("Os valores trocados: a = %d e b = %d", a, b);

  return 0;
}