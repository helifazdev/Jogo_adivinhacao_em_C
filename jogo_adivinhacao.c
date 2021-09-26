#include <stdio.h>

int main()
{
    printf("****************************************\n");
    printf("*********Jogo de Adivinhação************\n");
    printf("****************************************");

    printf("A dica é:\n");
    char resposta;
    printf("---Plataforma Online para armazemento e compartilhamento de projetos de liguagens de computadores na internet----");
    gets(resposta);

        if (resposta == "Github")
    {
        printf("Parabens você acertou!!!");
    }
    else
    {
        printf("QUe pena não foi dessa vez,mas tente novamente!");
    }
}