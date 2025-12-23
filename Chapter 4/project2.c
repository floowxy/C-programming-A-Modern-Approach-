#include<stdio.h>

int main (void){
    int x;
    int y;
    int z;
    int w;
    printf("Digite un numero de 3 digitos : ");
    scanf("%d",&x);
    y = x/100;  // 125 /100 1
    x = x %100; // 25 
    
    z = x/10; // 2 
    w = x%10; // 5

    printf("El numero en reversa es : %d%d%d\n",w,z,y);
    return 0;
}