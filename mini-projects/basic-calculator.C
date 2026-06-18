#include <stdio.h>
int main (){
    float n1, n2, soma, sub, multi, div;

    printf("Digite o primeiro número: ");
    scanf("%f",&n1);

    printf("Digite o segundo número: ");
    scanf("%f",&n2);

    soma = n1 + n2;
    sub = n1-n2;
    multi = n1*n2;
    div = n1/n2;
    
    printf("-----------------------------\nSoma = %f\n", soma);
    printf("Subtração = %f\n", sub);
    printf("Multiplicação = %f\n", multi);
    printf("Divisão = %f\n", div);

    return 0;
}