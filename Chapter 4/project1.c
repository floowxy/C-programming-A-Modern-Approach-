#include<stdio.h>

int main (void){
    int x;
    int y;
    int z;
    printf("Digite un numero de 2 digitos : ");
    scanf("%d",&x);
    y = x/10;
    z = x%10;
    printf("El numero en revers es : %d%d\n",z,y);
    return 0;
}


