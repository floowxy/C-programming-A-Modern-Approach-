#include <stdio.h>

int main(void) {
    int a, b, c, d;

    printf("Ingrese dos fracciones separadas por + : \n");
    scanf("%d/%d+%d/%d", &a, &b, &c, &d);

    printf("La suma es %d/%d\n", a*d + b*c, b*d);

    return 0;
}
