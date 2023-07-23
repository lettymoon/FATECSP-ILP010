/*Exercício 07
Valor inteiro de uma string
Crie a função val(s), que devolve o valor numérico de uma string s contendo apenas dígitos.
*/

#include <stdio.h>
#include <string.h>
#include "len.h"

int val(char v[]){

    int res = 0;
    int tam = len(v);
    int base = 1; //a base é 10 (mas começa com 1 pq 10^0 = 1)
    for(int i = tam-1; i >= 0; i--){
        int num = v[i] - '0';
        res += num * base;
        base *= 10;
    }

    return res;
}


int main(void){

    char v[] = "351";
    printf("Valor: %d\n",2*val(v)); // 702

    return 0;
}