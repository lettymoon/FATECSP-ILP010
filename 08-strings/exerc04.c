/*Exercício 04
Inversão de strings (strings reversa)
Crie a função rev(s), que inverte a ordem dos caracteres na string s. Use len().
*/

#include <stdio.h>

int len(char v[]){

    int i = 0;
    while(v[i] != '\0')
        i++;
    
    return i;
}

void rev(char v[]){
    //descobrir o tamanho de v
    int tam = len(v);
    //criar um vetor com o tamanho de v reverso para armazenar a string v invertida
    char reverso[tam];
    //encontrar o ultimo caractere de v e ir ate o começo armazenando no vetor reverso (do começo)
    int i = tam-1;
    int j = 0;
    while(i >= 0){
        reverso[j] = v[i];
        i--;
        j++;
    }
    //sobresescrever o vetor v com o reverso dele
    for(i = 0; i < tam; i++){
        v[i] = reverso[i];
    }
}

void rev_melhorado(char v[]) {
    int comeco = 0;
    int fim = len(v) - 1;
    
    while(comeco < fim){
        char temp = v[comeco];
        v[comeco] = v[fim];
        v[fim] = temp;
        comeco++;
        fim--;
    }
}

int main(void){

    char v[10] = "ROMA";
    rev(v); // Ela inverte o vetor de char "v"
    puts(v); // Escreve na tela o v que foi invertido na função rev que é AMOR nesse caso

    return 0;
}