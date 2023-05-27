/*O termial de um número natural n é igual à soma dos n primeiros naturais positivos (por definição,
o termial de 0 é 0). Dado um número natural n, calcule e exiba o seu termial.
*/

#include <stdio.h>

int main(void){

    int n;
    scanf("%d", &n);
    int termial = 0;

    for(int i = n; i != 0; i--){
        if(n == 0){
            printf("Fatoral de %d é 0.", n);
            break;
        }
        termial += i;
    }

    printf("Termial de %d é %d.\n", n, termial);

    return 0;
}