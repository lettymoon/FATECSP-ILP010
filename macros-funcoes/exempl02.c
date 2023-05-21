// #define macro(parâmetros) texto_parametrizado

#include <stdio.h>
#define par(n) ((n)%2==0)

int main(void) {
    int a;
    printf("Numero? ");
    scanf("%d",&a);
    puts(par(a) ? "Par" : "Impar");
    return 0;
}