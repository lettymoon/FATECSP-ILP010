/*Dados o número de faltas e a média de um aluno, informe se ele está aprovado ou reprovado.
Considere que a aprovação requer no máximo 5 faltas e no mínimo média 6.0. Use uma condição
composta por um operador lógico e exiba as possíveis situações em cores distintas.*/

#include <stdio.h>

int main(void){

    float p1, p2;
    printf("Notas? ");
    scanf("%f %f", &p1, &p2);

    int f;
    printf("Faltas? ");
    scanf("%d", &f);

    float m = (p1+p2)/2;


    if(m>=6 && f<=6)
        puts("Aprovado");
    else
        puts("Reprovado");

    return 0;
}