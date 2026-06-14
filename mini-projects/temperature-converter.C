#include <stdio.h>
int main(){ 
    float f,c;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f",&c);
    f = c * 1.8 + 32;

    printf("A temperatura em farenheit é: %f\n",f);

    return 0;
}