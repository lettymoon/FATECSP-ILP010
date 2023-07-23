/* Iniciação de variável estrutura
A declaração a seguir cria e inicia uma variável do tipo definido no exemplo anterior 04
*/

#include <stdio.h>
#include exempl04.c

int main(void){

    Func f = {413,"Fred Barbosa",8750.00,{25,10,2017}};

    printf("%d - %s - %f", f.codigo, f.nome, f.salario);

    return 0;
}