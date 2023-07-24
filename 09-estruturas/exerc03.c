/* Exercício 03
Crie um programa para ordenar e exibir a tabela de funcionários do Exemplo 12, usando as
funções ordenatab(v,n) e exibetab(v,n).


INCOMPLETO*/

#include <stdio.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct{
    int codigo;
    char nome[21];
    float salario;
    Data admissao;
} f;

void exibetab(struct f v[], int n) {
    for (int i = 0; i < n; i++) { // criar um for para exibir os n (3) funcionários
        printf("%d - %s - %.2f\n", v[i].codigo, v[i].nome, v[i].salario);
    }
}

// função que vai ser responsável por fazer a troca no bsort
void troca(struct f *a, struct f *b){
    struct f temp = *a;
    *a = *b;
    *b = temp;
}

void bsort(struct f v[], int n){ // função bubble sort
    for (int i = 1; i <= n - 1; i++) {
        for (int j = 0; j < n - i; j++) {
            if (v[j].codigo > v[j + 1].codigo)
                troca(&v[j], &v[j + 1]); // chamada da função troca
        }
    }
}

int main(void) {
    // Exemplo de vetor com funcionários
    f v[5] = {
        {561,"Eva Maranhao",9200.00,{2,7,2012}},
        {295,"Ana Teixeira",6100.00,{5,9,2015}},
        {473,"Denise Lagoa",8500.00,{1,6,2013}},
        {102,"Catia Telles",7300.00,{3,8,2014}},
        {384,"Beatriz Lira",5400.00,{4,9,2016}}};

    // Chamada da função para ordenar
    bsort(v, 5);

    // Chamada da função para exibir o vetor de funcionários
    exibetab(v, 5);

    return 0;
}