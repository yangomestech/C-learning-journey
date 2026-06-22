#include <stdio.h>
#include <string.h>

int main (){
    char user[4], pass[5];

    printf("Digite o nome de usuario: ");
    scanf("%3s",user);

    printf("Digite a senha: ");
    scanf(" %4s",pass);


if (strcmp(user,"yan") == 0 && strcmp(pass,"tech") == 0){


    printf("-------------------\n");
    printf("Acesso permitido.\n");
    printf("-------------------\n");
    printf("Seja bem vindo, %s!\n",user);
}
else if (strcmp(user, "yan") != 0)
    printf("\nUsuario não existe.\n");
else if (strcmp(pass, "tech") !=0)
    printf("Senha incorreta.\n");

    return 0;
}