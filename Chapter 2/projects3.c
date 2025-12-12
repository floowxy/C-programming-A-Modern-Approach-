#include<stdio.h>
#define PI 3.1416
int main(void){
    int radio, radio_cubo;
    float volume;
    printf("Digite el radio :");
    scanf("%d",&radio);
    radio_cubo=radio*radio*radio;
    volume = ((4.0f)/(3.0f))*(float)radio_cubo*PI;
    printf("Volume  : %.2f\n",volume);
    return 0;
}