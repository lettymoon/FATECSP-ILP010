/*O quadrado de um número natural n é igual à soma dos n primeiros ímpares consecutivos. 
Com base nessa ideia, crie uma função que devolve o quadrado de um número natural n, dado como entrada.

Por exemplo: 52 = 1 + 3 + 5 + 7 + 9 = 25
*/


#include <stdio.h>

int quadrado_perfeito(int n){

    int soma = 0;
    for(int i = 1; i < n*2; i++){
        if(i%2 != 0)
            soma += i; 
    }

    return soma;
}

int main(void){

    int n;
    scanf("%d", &n);

    printf("%d\n", quadrado_perfeito(n));

    return 0;
}