// Criação de variável de uma estrutura

#include <stdio.h>

struct funcionario{ // definição de uma estrutura
        int codigo;
        char nome[100];
        float salario;
    };


int main (void){

    struct funcionario f; // f é a variável da estrutura funcionário

    scanf("%d", &f.codigo); // declaração de variável de uma estrutura
    scanf("%s", f.nome);
    scanf("%f", &f.salario);

    printf("%d - %s - %2.f\n", f.codigo, f.nome, f.salario);

    return 0;
}