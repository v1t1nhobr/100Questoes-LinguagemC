#include <stdio.h>
int main()
{

    char artigo[4][20] = {"Prato","Pote","Caneca","Livro"}; //Atribuicao 
    float valores[4];
    float desconto;
    float soma = 0;





    for(int i = 1; i < 4; i++){ //Determinacao do laço


        printf("Artigo %d: %s\n", i, artigo[i]);
        printf("Digite o valor do produto: R$ ");
        scanf("%f", &valores[i]);
        printf("Valor %.2f\n\n", valores[i]);
        desconto = valores[i] * 0.10;
        float totalParcial = valores[i] - desconto;
        printf("10%% de desconto: R$ %.2f\n\n",totalParcial);



    }




        for(int i = 0; i < 4; i++){
                printf("Artigos %d: %s - R$ %.2f\n", i +1, artigo[i], valores[i]);



        soma = soma + valores[i] - desconto;


        }

        printf("\n\n");

        printf("Valor total com desconto: R$ %.2f\n\n\n\n\n" , soma);




    return 0;
}