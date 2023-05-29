/*Exercício 01
Comparação de strings (sensível ao caso)

Usando a função strcmp(), declarada em string.h, faça as correções necessárias
para que o programa a seguir funcione corretamente.
*/

#include <stdio.h>
#include <string.h>

int main(void){

    char s[513];
    printf("Senha? ");

    gets(s);

    //if( s=="Abracadabra" ) puts("Senha correta!");
    if( strcmp(s, "Abracadabra") ) puts("Senha correta!");
    else puts("Senha incorreta!");

    return 0;
}