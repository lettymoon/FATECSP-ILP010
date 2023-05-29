/*Exercício 04 - Alternativo
Inversão de strings (strings reversa)
Crie a função rev(s), que inverte a ordem dos caracteres na string s. Use len().
*/

#include <stdio.h>

int len(char v[]){ // função len do exercício 3 que mostra o tamanho de um vetor de char 

    int i = 0;
    while(v[i] != '\0')
        i++;
    
    return i;
}

void rev(char v[]){
    int inicio = 0; // contador a partir do início do vetor de char v
    int fim = len(v) - 1; // contador a partir do final do vetor de char v
    
    while(inicio < fim){ // faz a troca enquanto não se cruzarem
        char temp = v[inicio]; // salva o valor do início em uma variável temporaria
        v[inicio] = v[fim]; // atribui o ultimo caracter do vetor v ao início do vetor v
        v[fim] = temp; // atribui o primeiro caracter do vetor v ao final do vetor v
        inicio++; 
        fim--;
    }
}

int main(void){

    char v[10] = "ROMA";
    rev(v); // Ela inverte o vetor de char "v"
    puts(v); // Escreve na tela o v que foi invertido na função rev que é AMOR

    return 0;
}