/*Dada uma sequência de números naturais (cujo último número é 0), informe quais são os itens
máximo e mínimo nessa sequência.
*/

#include <stdio.h>

int main(void){

    int t;
    scanf("%d", &t);
    int arr[t];
    int c = 1;

    for(int i = 0; i < t-1; i++){
        scanf("%d", &arr[i]);
        c++;
    }
    arr[c] = 0;

    long int maior = -4294967295;
    long int menor = 4294967295;

    for(int i = 0; i < t; i++){
        if(arr[i] <  menor)
            menor = arr[i];
        if(arr[i] > maior)
            maior = arr[i];
    }

    printf("Itém máximo = %ld e Itém mínimo %ld = .", maior, menor);

    return 0;
}