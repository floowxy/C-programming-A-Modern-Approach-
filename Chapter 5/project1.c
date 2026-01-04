#include<stdio.h>

int main(void){
    int x;
    printf("Digite un numero : ");
    scanf("%d",&x);

    if((x>0)&&(x<=9)){
        printf("El numero tiene un digito\n");
    }
    else if ((x>=10)&&(x<=99)){
        printf("El numero tiene dos digitos.\n");
    }
    else{
        printf("El numero tiene 3 digitos\n");
    }

    return 0;
}