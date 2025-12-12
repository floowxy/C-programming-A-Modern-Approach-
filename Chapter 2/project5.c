#include<stdio.h>
int main (void){
    int x, function;
    printf("Digite un numero : \n");
    scanf("%d",&x);

    function = 3*(x*x*x*x*x) +2*(x*x*x*x)-5*(x*x*x)-(x*x)+7*x-6;

    printf("Function : %d \n",function);

}