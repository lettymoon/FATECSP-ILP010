/*#include <stdio.h>
#define maiuscula(c) ... // complete essa definição!

int main(void) {
    char x;
    printf("Caractere? ");
    scanf("%c",&x);
    printf("Maiuscula: %s\n",maiuscula(x) ? "sim" : "nao");
    return 0;
}
*/


#include <stdio.h>
#define maiuscula(c) ((c-65) > 0)

    int main(void) {
    char x;
    printf("Caractere? ");
    scanf("%c",&x);
    printf("Maiuscula: %s\n",maiuscula(x) ? "sim" : "nao");
    return 0;
}