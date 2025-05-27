#include <stdio.h>

int main()
{

    float av1, av2, av3, mediaP;
    
    printf("Informe a nota das seguintes provas: ");
    
    printf("\n\n1ª Prova: ");
    scanf("%f",&av1); 
    
    printf("2ª Prova: ");
    scanf("%f",&av2); 
    
    printf("3ª Prova: ");
    scanf("%f",&av3); 
    
    printf("\nAv1 = %f | Av2 = %f | Av3 = %f", av1, av2, av3);
    
    mediaP = (av1 * 2 + av2 * 3 + av3 * 5) / 10;
    
    printf("\n\nMédia do aluno: %.1f", mediaP);
    
    return 0;
}