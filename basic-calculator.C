#include <stdio.h>
int main (){
    int n1, n2, soma, sub, multi;
    float  div;

    printf("Digite o primeiro número: ");
    scanf("%d",&n1);

    printf("Digite o segundo número: ");
    scanf("%d",&n2);

    soma = n1 + n2;
    sub = n1-n2;
    multi = n1*n2;
    div = n1/n2;
    
    printf("-----------------------------\nSoma = %d\n", soma);
    printf("Subtração = %d\n", sub);
    printf("Multiplicação = %d\n", multi);
    printf("Divisão = %f\n", div);

    return 0;
}