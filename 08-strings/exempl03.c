//Exemplo 03
//Leitura de Strings

#include <stdio.h>

int main(void) {
    char v[513];

    printf("Qual o seu nome? ");
    gets(v);

    printf("Oi %s!\n",v);

    return 0;
}


/*
Para ler uma string e armazenar num vetor de caracteres v, podemos chamar:

scanf("%s",v): só funciona quando a string não tem espaços em branco.
gets(v): funciona mesmo quando a string tem espaços em branco.
*/