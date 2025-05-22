#include <stdio.h>
#include <string.h>

int main() {
    char nome[50], sobrenome[50], nome_completo[100];

    // Entrada dos dados
    printf("Digite o nome: ");
    scanf("%s", nome);

    printf("Digite o sobrenome: ");
    scanf("%s", sobrenome);

    // Copia o nome para nome_completo
    strcpy(nome_completo, nome);  
    // Adiciona um espaço       
    strcat(nome_completo, " ");   
    // Adiciona o sobrenome   
    strcat(nome_completo, sobrenome);   

    // Resultado Nome Completo
    printf("Nome completo: %s\n", nome_completo);

    return 0;
}
