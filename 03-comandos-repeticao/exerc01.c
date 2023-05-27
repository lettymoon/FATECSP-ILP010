// Dado um número natural n, exiba uma contagem regressiva de n até 0.

#include <stdio.h>

int main(void){

    int n;
    scanf("%d", &n);

    while(n>0){
        printf("%d\n", n);
        --n;
    }

    return 0;
}