/*Adicione as diretivas #define necessárias para a compilação do programa a seguir.

#include <stdio.h>
int main(void) {
printf("Inteiro minimo = %+d\n", MIN_INT);
printf("Inteiro maximo = %+d\n", MAX_INT);
return 0;
}
*/

#include <stdio.h>
#define MIN_INT -4294967295
#define MAX_INT 4294967295

int main(void) {
    printf("Inteiro mínimo = %ld\n", MIN_INT);
    printf("Inteiro máximo = %ld\n", MAX_INT);
return 0;
}