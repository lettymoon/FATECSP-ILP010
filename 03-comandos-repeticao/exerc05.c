/*O fatorial de um número natural n é igual ao produto dos n primeiros naturais positivos (por
definição, o fatorial de 0 é 1). Dado um número natural n, calcule e exiba o seu fatorial.
*/

#include <stdio.h>

int main(void){

    int n;
    scanf("%d", &n);
    int fat = 1;

    for(int i = n; i != 0; i--){
        if(n == 0){
            printf("Fatoral de %d é 1.", n);
            break;
        }
        fat *= i;
    }

    printf("Fatorial de %d é %d.\n", n, fat);

    return 0;
}