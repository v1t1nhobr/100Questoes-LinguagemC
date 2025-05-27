#include <stdio.h>

int main()
{
    
    float notaPort, notaMat, notaGerais, media;
    char nome [50];
    
    printf("Informe o nome do candidato: ");
    // scanf("%s[^\n]", nome);
    fgets(nome, 50, stdin);
    
    printf("\nImprima a nota de Portugues: ");
    scanf("%f",&notaPort);
    printf("Imprima a nota de Matematica: ");
    scanf("%f",&notaMat);
    printf("Imprima a nota de Conhecimentos Gerais: ");
    scanf("%f",&notaGerais);
    
    printf("\n\nCandidato: %s", nome);
    
    media = (notaPort + notaMat + notaGerais) / 3;
    printf("\nMedia : %.2f", media);
    
    int logica = notaPort > 5 && notaMat > 5 && notaGerais > 5;
    printf ("\nTodas as notas sao acima de 5: ");
    
    if (logica == 1)
        printf("Sim");
    else
        printf("Nao");
    
    printf("\n\n");
    
    if ( media > 7.0 && ( notaPort > 5 && notaMat > 5 && notaGerais > 5))
        printf ("Aprovado!");
        
    else
        printf ("Reprovado!");
    
    return 0;
}