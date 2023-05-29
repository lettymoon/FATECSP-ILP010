/*Exercício 03
Comprimento de strings
Crie a função len(s), que devolve a quantidade de caracteres na string s.
*/

#include <stdio.h>

int len(char v[]){

    int i = 0;
    while(v[i] != '\0')
        i++;
    
    return i;
}

int main(void){

    char v[10] = "teste";

    printf("Comprimento: %d\n",len(v)); // 5

    return 0;
}