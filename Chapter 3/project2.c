#include<stdio.h>


int main (void){
    int numero_articulo, dia, mes, anho;
    float precio_unitario;

    printf("Ingrese el numero del articulo : \n");
    scanf("%d",&numero_articulo);

    printf("Ingrese el precio unitario \n");
    scanf("%f",&precio_unitario);

    printf("Ingrese la fecha de compra (mm/dd/yyyy) : \n");
    scanf("%d%d%d",&dia,&mes,&anho);

    printf("Articulo\t Precio Unitario \t Fecha de compra \n");
    printf("%d\t\t$%.2.f\t\t%d/%d/%d\n",numero_articulo,precio_unitario)

    return 0;
}