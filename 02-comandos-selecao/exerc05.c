/*Dados dois números distintos, informe qual deles é o maior.*/

#include <stdio.h>

int main(void){

    int n1, n2;
    printf("Números? ");
    scanf("%d %d", &n1, &n2);

    int maior = 0;

    if(n1 > maior)
        maior = n1;
    if(maior < n2)
        maior = n2;

    printf("Maior número é: %d\n", maior);

}