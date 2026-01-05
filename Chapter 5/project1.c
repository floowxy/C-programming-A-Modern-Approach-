#include<stdio.h>

int main(void){
    int x;
    printf("Digite un numero : ");
    scanf("%d",&x);

    if (x <= 9){
    printf("1 digito");
    }
    else if (x <= 99){
    printf("2 digitos");
    }
    else if (x <= 999){
    printf("3 digitos");
    }
    else {
    printf("4 digitos");
    }
}