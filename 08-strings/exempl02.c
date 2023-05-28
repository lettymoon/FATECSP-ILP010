//Exemplo 02
//Iniciação de strings

#include <stdio.h>

int main(void){

    char v[] = {'D','I','G','A'}; // genérica
    char w[] = "OI"; // específica

    printf("v: %s\nw: %s\n",v,w);

    return 0;
}




/*
Um vetor de caracteres que será usado como string pode ser iniciado de duas formas:
Genérica: usando uma lista de caracteres, separados por vírgulas, entre chaves.
Específica: usando uma lista de caracteres entre aspas.

A forma específica para iniciação de string é sempre preferível!
*/