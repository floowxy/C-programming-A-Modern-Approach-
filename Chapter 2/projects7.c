#include <stdio.h>

int main(void) {
    int saldo;
    int b20, b10, b5, b1; 

    printf("Digite su saldo: ");
    scanf("%d", &saldo);

    b20 = saldo / 20;           
    saldo = saldo - (b20 * 20); 

    b10 = saldo / 10;
    saldo = saldo - (b10 * 10);

    b5 = saldo / 5;
    saldo = saldo - (b5 * 5);
    b1 = saldo / 1; 

    printf("$20 bills: %d\n", b20);
    printf("$10 bills: %d\n", b10);
    printf("$5 bills: %d\n", b5);
    printf("$1 bills: %d\n", b1);

    return 0;
}