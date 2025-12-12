#include <stdio.h>

int main(void) {
    int x, function;
    printf("Digite un numero: ");
    scanf("%d", &x);
    
    function = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("Function result: %d\n", function);

    return 0;
}