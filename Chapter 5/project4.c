#include <stdio.h>

int main(void){
    float ingreso, impuesto;

    printf("Ingrese ingreso imponible: ");
    scanf("%f", &ingreso);

    if(ingreso <= 750){
        impuesto = ingreso * 0.01;
    }
    else if(ingreso <= 2250){
        impuesto = 7.5 + 0.02 * (ingreso - 750);
    }
    else if(ingreso <= 3750){
        impuesto = 37.5 + 0.03 * (ingreso - 2250);
    }
    else if(ingreso <= 5250){
        impuesto = 82.5 + 0.04 * (ingreso - 3750);
    }
    else if(ingreso <= 7000){
        impuesto = 142.5 + 0.05 * (ingreso - 5250);
    }
    else{
        impuesto = 230 + 0.06 * (ingreso - 7000);
    }

    printf("Impuesto a pagar: %.2f\n", impuesto);

    return 0;
}
