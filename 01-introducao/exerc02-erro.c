/*
Qual é o erro no programa a seguir?

#include <stdio.h>

int main(void){

    printf("%d\n",0678);

    return 0;
}


Resposta = Não foi declarado uma variável para 0678 e o valor 0678 não é um valor válido para octal*/

#include <stdio.h>

int main(void){

    int variavel = 067; //valor válido para octal, 55
    printf("%d\n", variavel);

    return 0;
}