#include <stdio.h>
int main (){
    float p, a, a2, imc;
    printf("Digite seu peso: ");
    scanf("%f",&p);
    printf("Digite sua altura: ");
    scanf("%f",&a);
    a2 = a*a;
    imc = p/a2;
    printf("----------------------------------\nSeu IMC é: '%f'\n----------------------------------\n",imc);

    if (imc < 18.5)
    printf("Abaixo do peso.\n");
else if (imc < 25)
    printf("Peso ideal.\n");
else if (imc < 30)
    printf("Levemente acima do peso.\n");
else if (imc < 35)
    printf("Obesidade grau I.\n");
else if (imc < 40)
    printf("Obesidade grau II (severa).\n");
else
    printf("Obesidade grau III (mórbida).\n");

    return 0;
}