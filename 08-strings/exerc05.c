/*Exercício 05
Concatenação de strings
Crie a função cat(s,t), que concatena a string t no final da string s.
*/

#include <stdio.h>

int len(char v[]){ // função len do exercício 3 que mostra o tamanho de um vetor de char 

    int i = 0;
    while(v[i] != '\0')
        i++;
    
    return i;
}

void cat(char v[], char w[]){

    //descobrir o tamanho do vetor de v e w
    int tamv = len(v);
    int tamw = len(w);

    // atribuir o caracteres do vetor w ao vetor v a partir do ultimo caracter de v usando a len
    int i = tamv;  
    int j = 0;     

    while(w[j] != '\0'){
        v[i] = w[j];
        i++;
        j++;
    }
}

int main(void){

    char v[10] = "aba";
    char w[10] = "cate";

    cat(v,w);
    puts(v); // abacate

    return 0;
}