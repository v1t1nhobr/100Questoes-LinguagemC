#include <stdio.h>

int main()
{
    
    int data, sign, mes, dia;
    
    printf("Digite a data de aniversario em formato DDMM: "); 
    scanf("%d", &data);
    
    mes = data%100;
    dia = data/100;
    
    printf("Dia: %d\nMês: %d", dia, mes);
    
    if(mes==12){
        if(dia >= 1 && dia <= 21)
            sign = 11;
        if(dia >= 22 && dia <= 31)
            sign = 12;
    }
    if(mes==1){
        if(dia >= 1 && dia <= 20)
            sign = 12;
        if(dia >= 21 && dia <= 31)
            sign = 1;
    }
    if(mes==2){
        if(dia >= 1 && dia <= 19)
            sign = 1;
        if(dia >= 20 && dia <= 29)
            sign = 2;
    }
    if(mes==3){
        if(dia >= 1 && dia <= 20)
            sign = 2;
        if(dia >= 21 && dia <= 31)
            sign = 3;
    }
    if(mes==4){
        if(dia >= 1 && dia <= 21)
            sign = 3;
        if(dia >= 22 && dia <= 30)
            sign = 4;
    }
    if(mes==5){
        if(dia >= 1 && dia <= 20)
            sign = 4;
        if(dia >= 21 && dia <= 31)
            sign = 5;
    }
    if(mes==6){
        if(dia >= 1 && dia <= 20)
            sign = 5;
        if(dia >= 21 && dia <= 30)
            sign = 6;
    }
    if(mes==7){
        if(dia >= 1 && dia <= 21)
            sign = 6;
        if(dia >= 22 && dia <= 31)
            sign = 7;
    }
    if(mes==8){
        if(dia >= 1 && dia <= 22)
            sign = 7;
        if(dia >= 23 && dia <= 31)
            sign = 8;
    }
    if(mes==9){
        if(dia >= 1 && dia <= 22)
            sign = 8;
        if(dia >= 23 && dia <= 30)
            sign = 9;
    }
    if(mes==10){
        if(dia >= 1 && dia <= 22)
            sign = 9;
        if(dia >= 23 && dia <= 31)
            sign = 10;
    }
    if(mes==11){
        if(dia >= 1 && dia <= 21)
            sign = 10;
        if(dia >= 22 && dia <= 30)
            sign = 11;
    }
    
    printf("\n\nVocê é do seguinte signo do zodíaco: ");
    
    switch (sign){
        
        case 12 : printf("Capricórnio");
        break;
        
        case 1 : printf("Aquário");
        break;
        
        case 2 : printf("Peixes");
        break;
        
        case 3 : printf("Áries");
        break;
        
        case 4 : printf("Touro");
        break;
        
        case 5 : printf("Gêmeos");
        break;
        
        case 6 : printf("Câncer");
        break;
        
        case 7 : printf("Leão");
        break;
        
        case 8 : printf("Virgem");
        break;
        
        case 9 : printf("Libra");
        break;
        
        case 10 : printf("Escorpião");
        break;
        
        case 11 : printf("Sagitário");
        break;
        
    }

    return 0;
}