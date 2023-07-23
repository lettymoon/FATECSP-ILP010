/*Exercício 08
Posição de caractere em string
Crie a função pos(c,s), que devolve a posição da primeira ocorrência do caractere c na string s
(ou -1, caso o caractere c não esteja em s).
*/

//INCOMPLETO

#include <stdio.h>
#include <string.h>
#include "len.h"

char pos(char 1, char 9, char v[]){

    int tam = len(v);

    int pos1 = 0;
    int pos9 = 0;

    for(int i = 0; i < tam; i++){
        if(v[i] == 1)
            v[i] = i;
        else if(v[i] == 9)
            v[i] = i;
        else
            v[i] = -1;
    }
    
}

int main(void){

    char v[10] = "35171";

    printf("Posicao do 1: %c\n",pos('1',v)); // 2
    printf("Posicao do 9: %c\n",pos('9',v)); // -1

    
    return 0;
}