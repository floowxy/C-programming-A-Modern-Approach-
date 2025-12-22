#include <stdio.h>

int main(void) {
    int gs1, grupo, editor, item, digito;

    printf("Ingrese ISBN (xxx-x-xxx-xxxxx-x): \n");
    scanf("%d-%d-%d-%d-%d", &gs1, &grupo, &editor, &item, &digito);

    printf("Prefijo GS1: %d\n", gs1);
    printf("Identificador de grupo: %d\n", grupo);
    printf("Codigo del editor: %d\n", editor);
    printf("Numero de articulo: %d\n", item);
    printf("Digito de verificacion: %d\n", digito);

    return 0;
}
