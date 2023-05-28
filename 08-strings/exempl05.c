//Exemplo 05
//Atribuição de Strings

#include <stdio.h>

int main(void){

    char v[5] = "um";
    char w[5];

    w = v; // erro!

    puts(v);
    puts(w);

    return 0;
}

/*Como o nome de um vetor representa o seu endereço na memória (que é constante),
não é possível copiar uma string para outra usando o operador de atribuição.*/