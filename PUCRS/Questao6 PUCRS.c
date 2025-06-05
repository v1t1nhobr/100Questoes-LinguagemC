#include <stdio.h>

int main() {
    
    printf("\nEleicoes\n"); //Digite 0 para finalizar 
    
    int count[6] = {0, 0, 0, 0, 0, 0};
    int voto;
    
    do{
        printf("Informe seu voto: ");
        scanf("%d", &voto);
        
        if(voto == 1)
            count[0] += 1;
        if(voto == 2)
            count[1] += 1;
        if(voto == 3)
            count[2] += 1;
        if(voto == 4)
            count[3] += 1;
        if(voto == 5)
            count[4] += 1;
        if(voto == 6)
            count[5] += 1;
            
    }while(voto != 0);
    
    printf("Numero de votos:\n\n");
    
    for(int i = 0; i < 6; i++){
        if (i == 4)
            printf("Nulos: %d\n", count[i]);
        else if (i == 5)
            printf("Brancos: %d", count[i]);
        else
            printf("Candidato %d : %d\n", i + 1, count[i]);
    
    }
    
    return 0;
}