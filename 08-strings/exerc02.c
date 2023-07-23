/*Exercício 02
Comparação de strings (insensível ao caso)

A função _stricmp(s), declarada em string.h, compara strings sem considerar
que maiúsculas e minúsculas correspondentes são distintas. Usando essa função, altere e
teste o programa do exercício anterior.
*/

//INCOMPLETO

#include <stdio.h>
#include <string.h>

int main(void){

    char s[513];
    printf("Senha? ");

    gets(s);

    //if( s=="Abracadabra" ) puts("Senha correta!");
    //if( strcmp(s, "Abracadabra") ) puts("Senha correta!");
    if( _stricmp(s, "Abracadabra") ) puts("Senha correta!");
    else puts("Senha incorreta!");

    return 0;
}