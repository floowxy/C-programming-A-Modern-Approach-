#include <stdio.h>

int main(void){
    int velocidad;

    printf("Ingrese velocidad del viento: ");
    scanf("%d", &velocidad);

    if(velocidad < 1){
        printf("Calma\n");
    }
    else if(velocidad <= 3){
        printf("Aire ligero\n");
    }
    else if(velocidad <= 27){
        printf("Brisa\n");
    }
    else if(velocidad <= 47){
        printf("Vendaval\n");
    }
    else if(velocidad <= 63){
        printf("Tormenta\n");
    }
    else{
        printf("Huracan\n");
    }

    return 0;
}
