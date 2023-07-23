/*Exercício 10 
Ocorrências de caractere em string
Crie a função ocorrencias(c,s), que devolve a quantidade de vezes que o caractere c
ocorre na string s
*/

#include <stdio.h>
#include "len.h"

int ocorrencias(char a, char v[]){

    //descobrir o tamanho do vetor de char v[]
    int tam = len(v);

    //usar um contador c para descobrir quantas vezes é mencionado a na string
    int c = 0;
    for(int i = 0; i < tam; i++){
        if(v[i] == a)
            c++;
    }

    return c;
}


int main(void){

    char v[] = "banana";
    printf("Ocorrencias: %d\n",ocorrencias('a',v)); // 3

    return 0;
}