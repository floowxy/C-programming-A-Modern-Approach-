#include <stdio.h>

int main(void) {
    float prestamo, tasa, pago_mensual;

    printf("Digite el monto del prestamo: ");
    scanf("%f", &prestamo);

    printf("Digite tasa de interes: ");
    scanf("%f", &tasa);

    printf("Digite monto mensual: ");
    scanf("%f", &pago_mensual);

    float tasa_mensual = (tasa / 100.0f) / 12.0f;

    prestamo = prestamo - pago_mensual + (prestamo * tasa_mensual);
    printf("Saldo restante despues del primer pago: $%.2f\n", prestamo);

    prestamo = prestamo - pago_mensual + (prestamo * tasa_mensual);
    printf("Saldo restante despues del segundo pago: $%.2f\n", prestamo);

    prestamo = prestamo - pago_mensual + (prestamo * tasa_mensual);
    printf("Saldo restante despues del tercer pago: $%.2f\n", prestamo);

    return 0;
}