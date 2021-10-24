#include<stdio.h>
#define con 4.0/3
#define pi 3.14159

int main(){

    float r,vol;
    scanf("%f", &r);

    vol = (con*pi*r*r*r);

    printf("VOLUME = %.3f\n", vol);
    return 0;
}