#include<stdio,h>

int main (void ){

    int x;
    int a;
    int b;
    int c;
    int d;
    int e;

    printf("Digite un numero entre 0 y 32767 : ");
    scanf("%d",&x);

    a = x % 8;
    x = x / 8;

    b = x % 8;
    x = x / 8;

    c = x & 8;
    x = x / 8;

    d = x % 8;
    x = x / 8;
    
    e = x %8;
    
    printf("El numero en base 8 es : %d%d%d%d%d\n",e,d,c,b,a);





    return 0;
}