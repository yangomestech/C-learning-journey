#include <stdio.h>
int main (){

    const float taxa = 0.1;

    float salario;
    float desconto;
    float salarioLiquido;
    
    printf("Digite seu salario: ");
    scanf("%f",&salario);

    desconto = salario * taxa;
    salarioLiquido = salario - desconto;

    printf("Seu salario liquido será: %f\n",salarioLiquido);

    return 0;
}