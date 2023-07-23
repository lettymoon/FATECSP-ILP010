/*Exercício 05
Conversão para maiúsculas
Crie a função upr(s), que converte a string s em maiúsculas. Use toupper() de ctype.h.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "len.h"

void upr(char v[]){
    
    //descobrir o tamanho do vetor de char v[]
    int tam = len(v);
    //salvar os caracteres em maiúsculo usando toupper() numa variável temporária temp[]
    char temp[tam];
    for(int i = 0; i < tam; i++)
        temp[i] = toupper(v[i]);

    //devolver os caracteres de do vetor char de v[] agora em maiúsculo
    for(int i = 0; i < tam; i++)
        v[i] = temp[i];
}


int main(void){

    char v[10] = "Teste";
    upr(v);
    puts(v); //TESTE

    return 0;
}