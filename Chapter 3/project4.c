#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Ingrese numero de telefono [(xxx) xxx-xxxx]: \n");
    scanf("(%d) %d-%d", &a, &b, &c);

    printf("Usted ingreso %d.%d.%d\n", a, b, c);

    return 0;
}
