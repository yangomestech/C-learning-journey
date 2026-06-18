#include <stdio.h>
int main (){
    char user, pass;

    printf("Digite o nome de usuario: ");
    scanf("%c",&user);

    printf("Digite a senha: ");
    scanf(" %c",&pass);


    if (user == 'a')
    if (pass == 'r')

    printf("-------------------\nAcesso permitido.\n-------------------\nSeja bem vindo, %c!\n",user);
    else if ((user != 'a' && pass == 'r'))
    printf("Usuario não existe.\n");
    else if ((user == 'a' && pass !='r'))
    printf("Senha incorreta.\n");

    return 0;
}