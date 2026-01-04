#include <stdio.h>

int main(void){
    int hora, minuto;

    printf("Ingrese hora en formato 24 horas (hh:mm): ");
    scanf("%d:%d", &hora, &minuto);

    if(hora == 0){
        hora = 12;
        printf("Hora equivalente: %d:%02d AM\n", hora, minuto);
    }
    else if(hora < 12){
        printf("Hora equivalente: %d:%02d AM\n", hora, minuto);
    }
    else if(hora == 12){
        printf("Hora equivalente: %d:%02d PM\n", hora, minuto);
    }
    else{
        hora = hora - 12;
        printf("Hora equivalente: %d:%02d PM\n", hora, minuto);
    }

    return 0;
}
