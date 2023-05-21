// Operador condicional (?:)

// Dados dois números inteiros distintos, informe qual dele é o maior.

#include <stdio.h>

int main(void) {
    int a, b;
    printf("Numeros? ");
    scanf("%d %d",&a,&b);
    printf("Maior = %d\n",(a>b ? a : b));
return 0;
}

/*

Sintaxe: (condição ? expressão1 : expressão2)
Se a condição é verdadeira, o resultado é a expressão1; senão, ele é a expressão2.

*/