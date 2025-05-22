#include <stdio.h>

int main(){
    float raio, altura, volume;
    const float PI = 3.14159;

    //Define o raio da lata
    printf("O raio da lata e: \n");
    scanf("%f", &raio);

    //Define a altura da lata
    printf("A altura da lata e: \n");
    scanf("%f", &altura);

    //Resultado do volume da lata
    volume = PI * raio * altura;
    printf("O volume da lata e: %.2fcm \n",volume);

    return 0;

}