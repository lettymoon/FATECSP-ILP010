/*Crie a função dds(n), que exibe por extenso o dia da semana correspondente ao natural n. 
Se n não for um número entre 1 e 7, a função deve abortar a execução do programa.
*/

#include <stdio.h>

void dds(int n){

    switch (n){
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda-feira\n");
        break;
    case 3:
        printf("Terça-feira\n");
        break;
    case 4:
        printf("Quarta-feira\n");
        break;
    case 5:
        printf("Quinta-feira\n");
        break;
    case 6:
        printf("Sexta-feira\n");
        break;
    case 7:
        printf("Sábado\n");
        break;

    }

}

int main(void){

    int n;
    scanf("%d", &n);

    dds(n);
}