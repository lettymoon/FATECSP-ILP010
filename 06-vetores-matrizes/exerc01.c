

#include <stdio.h>


void binario(int n){
    int b[1000] = {0};
    int i = 0;

    while(n > 0){
        b[i] = n%2;
        n = n / 2;
        i++;
    }

    for(int j = i; j >= 0; j--)
        printf("%d", b[j]);

}


int main(void) {
    
    int n;
    printf("Numero? ");
    scanf("%d",&n); 
    binario(n);

    return 0;
}