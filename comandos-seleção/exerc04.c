/*Dadas as duas notas de prova de um aluno, informe se ele está aprovado ou reprovado. Con-
sidere que a média mínima necessária para aprovação é 6.0.*/

#include <stdio.h>

int main(void){

    float p1, p2;
    printf("Notas? ");
    scanf("%f %f", &p1, &p2);

    float m = (p1+p2)/2;

    if(m>=6)
        puts("Aprovado");
    else
        puts("Reprovado");

    return 0;
}