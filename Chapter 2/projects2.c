#include<stdio.h>
#define PI 3.1416
int main(void){
    int radio = 10, radio_cubo;
    float volume;
    radio_cubo=radio*radio*radio;
    volume = ((4.0f)/(3.0f))*(float)radio_cubo*PI;
    printf("Volume  : %.2f\n",volume);
    return 0;
}