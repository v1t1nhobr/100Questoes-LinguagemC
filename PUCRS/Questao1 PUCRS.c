#include <stdio.h>

int main() {
       
    int a,  Negativos = 0;
    int i;
  
    for (i = 1; i <= 5; i++) {
        printf("Digite o valor %d: \n", i);
        scanf("%d", &a);
        if (a < 0){
            Negativos++;
        }
    }
    
    printf("Quantidade de valores negativos: %d\n", Negativos);
    
    printf("Pressione Enter para sair...\n");
    getchar(); 
    getchar();
    return 0;
}