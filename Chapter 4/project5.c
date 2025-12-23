#include <stdio.h>

int main(void) {

    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11;
    int suma1, suma2, total, digito_control;

    printf("Digite los primeros 11 digitos del UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
          &d1, &d2, &d3, &d4, &d5, &d6,
          &d7, &d8, &d9, &d10, &d11);

    suma1 = d2 + d4 + d6 + d8 + d10;
    suma2 = d1 + d3 + d5 + d7 + d9 + d11;

    total = suma1 * 3 + suma2;
    digito_control = 9 - ((total - 1) % 10);

    printf("El digito de control es: %d\n", digito_control);

    return 0;
}
