/*Dadas as duas notas de prova de um aluno, informe a sua média.*/

#include <stdio.h>

int main (void){

    int nota1, nota2;
    scanf("%d %d", &nota1, &nota2);

    float media = (nota1+nota2) / 2;
    printf("Está é a sua média = %.1f\n", media);

    return 0;
}