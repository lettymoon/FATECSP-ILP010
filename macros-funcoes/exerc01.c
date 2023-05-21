/*Adicione as diretivas #define necessárias para a compilação do programa a seguir.

#include <stdio.h>
programa
inicio
diga("Oi!");
fim
*/


#include <stdio.h>
#define DIGA printf("Oi!\n")

int main(void){

    DIGA;

    return 0;
}