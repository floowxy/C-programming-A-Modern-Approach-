#include<stdio.h>
int main(void){
    float saldo, impuesto, total;

    printf("Digite el saldo : ");
    scanf("%f",&saldo);

    impuesto = ((float)5/(float)100)*saldo;

    total = saldo + impuesto;

    printf("Con impuesto incluido : %.2f\n1",total);

    return 0;
}