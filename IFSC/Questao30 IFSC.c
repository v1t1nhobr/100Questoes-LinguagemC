#include <stdio.h>

int main() {
    char matr[8];    
do{
    printf("Digite sua matricula: ");
    scanf("%s",matr);
    
    if(matr[2]== '1' || matr[2] == '2' ){
        printf("\n\nAno de matrícula: 20%c%c", matr[0],matr[1]);
        printf("\n%cº semestre",matr[2]);
    }
    else
        printf("Matrícula inválida\n");
  } while (matr[2]!= '1' && matr[2] != '2');
    
    return 0;
}