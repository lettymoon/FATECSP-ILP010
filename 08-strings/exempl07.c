//Exemplo 07
//Comparação de strings

#include <stdio.h>

int main(void){
    char v[5] = "um";
    char w[5] = "um";

    if( v==w ) puts("iguais");
    else puts("diferentes");

    return 0;
}

/*
Como o nome de um vetor representa o seu endereço na memória, não é possível
comparar strings (alfabeticamente) usando os operadores relacionais.

A função strcmp(), que compara duas strings, está declarada em string.h!
*/