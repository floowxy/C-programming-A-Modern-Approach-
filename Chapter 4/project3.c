#include<stdio.h>

int main (void){
    int x,y,z;

    printf("Digite un numero de 3 cifras : ");
    scanf("%d%d%d",&x,&y,&z);
    printf("El numero en reversa es : %d%d%d\n",z,y,x);
    return 0;
}