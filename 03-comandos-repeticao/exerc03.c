/*O quadrado de um número natural n é igual à soma dos n primeiros ímpares
consecutivos. Com base nessa ideia, crie um programa que, dado um número
natural n, calcula e exibe o quadrado de n.
Por exemplo: 5² = 1 + 3 + 5 + 7 + 9 = 25
*/

#include <stdio.h>

int main(void){

    int n;
    scanf("%d", &n);
    int soma = 0;

    for(int i = 1; i < n*2; i++){
        if(i%2 != 0)
            soma += i; 
    }

    printf("%d\n",soma);

    return 0;
}