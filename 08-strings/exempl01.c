//Exemplo 01
//Tamanho de cadeia literal (ou string constante)

#include <stdio.h>

int main(void) {

    printf("Tamanho em bytes: %ld\n",sizeof("CADEIA"));
    return 0;
}

// O espaço para armazenar o caractere '\0' numa cadeia literal é alocado automaticamente!