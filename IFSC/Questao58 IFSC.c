#include <stdio.h>

int main()
{
    
    int nota[3], codigo;
    float mediaP;
    
    printf("Informe o codigo do aluno: "); scanf("%d",&codigo);
    printf("Informe as notas: \n"); 
    
    for(int i = 0; i < 3; i++){
        printf("%d nota: ", i + 1); scanf("%d",&nota[i]);
    }
    
    if(nota[0] > nota[1] && nota[0] > nota[2])
        mediaP = (nota[0] * 4 + nota[1] * 3 + nota[2] * 3)/10.0;
    if(nota[1] > nota[0] && nota[1] > nota[2])
        mediaP = (nota[1] * 4 + nota[0] * 3 + nota[2] * 3)/10.0;
    if(nota[2] > nota[0] && nota[2] > nota[1])
        mediaP = (nota[2] * 4 + nota[0] * 3 + nota[1] * 3)/10.0;
        
    printf("\n\nCodigo do aluno: %d \n", codigo);
    printf("Media: %.2f\n\n", mediaP);
    
    for(int i = 0; i < 3; i++){
        printf("%d nota: %d\n", i + 1, nota[i]);
    }
    
    if(mediaP >= 5)
        printf("\nAprovado!");
    else
        printf("\nReprovado!");

    return 0;
}