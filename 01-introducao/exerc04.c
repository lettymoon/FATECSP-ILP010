/*Dado um número inteiro em base 10, exibir o valor correspondente em base 16.*/

#include <stdio.h>

int main(void){

    int dec = 0;
    scanf("%d", &dec);
    int hex[0];
    int i = 0;

    while(dec!=0){
        dec = dec/16;
        hex[i] = dec;
        i++;
    }


    return 0;
}