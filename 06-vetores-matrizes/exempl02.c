// Exemplo 02:
// Dada uma sequência composta por 5 números inteiros, exiba-a na ordem inversa.


#include <stdio.h>

    int main(void) {
    int v[5];

    for(int i=0; i<5; i++){
        printf("%do. item? ",i+1);
        scanf("%d",&v[i]);
    }

    puts("Ordem inversa:");

    for(int i=4; i>=0; i--)
        printf("%d\n",v[i]);

    return 0;
}