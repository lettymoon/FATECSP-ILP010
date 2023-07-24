/*Exercício 02 - Ordenação de uma tabela de funcionários

A função a seguir implementa o algoritmo Bubble Sort para ordenar um vetor v com n
inteiros. Com base nela, crie a função ordenatab(v,n), que ordena um vetor v com n
funcionários (usando o campo codigo como chave de ordenação).

void bsort(int v[],int n) {
for(int i=1; i<=n-1; i++)
for(int j=0; j<n-i; j++)
if( v[j]>v[j+1] )
troca(v,j,j+1);
}
*/

#include <stdio.h>

struct funcionario {
    int codigo;
    char nome[100];
    float salario;
};

void exibetab(struct funcionario v[], int n) {
    for (int i = 0; i < n; i++) { // criar um for para exibir os n (3) funcionários
        printf("%d - %s - %.2f\n", v[i].codigo, v[i].nome, v[i].salario);
    }
}

// função que vai ser responsável por fazer a troca no bsort
void troca(struct funcionario *a, struct funcionario *b){
    struct funcionario temp = *a;
    *a = *b;
    *b = temp;
}

void bsort(struct funcionario v[], int n){ // função bubble sort
    for (int i = 1; i <= n - 1; i++) {
        for (int j = 0; j < n - i; j++) {
            if (v[j].codigo > v[j + 1].codigo)
                troca(&v[j], &v[j + 1]); // chamada da função troca
        }
    }
}

int main(void) {
    // Exemplo de vetor com funcionários
    struct funcionario f[3] = {
        {25, "Letícia Cândido", 8750.00},
        {666, "Øystein Aarseth", 666.00},
        {9, "John Lennon", 9999.99}
    };

    // Chamada da função para ordenar
    bsort(f, 3);

    // Chamada da função para exibir o vetor de funcionários
    exibetab(f, 3);

    return 0;
}