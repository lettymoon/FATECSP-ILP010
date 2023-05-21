// Ao definir uma macro cujo texto parametrizado é uma expressão, use parênteses!

#include <stdio.h>
#define quadrado(n) n*n

int main(void) {
    printf("%d\n",quadrado(2+3)); // 11 (errado!)
    return 0;
}

/*
#include <stdio.h>
#define quadrado(n) n*n

int main(void) {
    printf("%d\n",quadrado((2+3))); // 25
    return 0;
}
*/