/*Crie a função minuscula(c), que devolve a letra minúscula correspondente ao caractere c (ou
o próprio caractere c, se ele não for uma letra maiúscula).
*/

#include <stdio.h>

int minuscula(char c){
    
    char maiuscula;

    if(c >= 97){
        maiuscula = c - 32;
        return maiuscula;
    }else
        return c;
}

int main(void){

    char c;
    scanf("%c", &c);

    printf("%c\n", minuscula(c));

    return 0;
}