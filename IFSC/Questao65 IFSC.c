#include <stdio.h>

int main()
{

    float media, nota1, nota2;

    printf("Insira a primeira nota bimestral: "); scanf("%f", &nota1);
    printf("Insira a segunda nota bimestral: "); scanf("%f", &nota2);
    
    media = 1.0 * (nota1 + nota2) / 2.0;
    
    if(media>5)
        printf("Aprovado!");
    else
        printf("Reprovado!");

    return 0;
}