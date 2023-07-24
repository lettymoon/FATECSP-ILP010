/*Exercício 01:
Crie a função exibetab(v,n), que exibe um vetor v com n funcionários.
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

int main(void) {
    // Exemplo de vetor com funcionários
    struct funcionario funcionarios[3] = {
        {25, "Letícia Cândido", 8750.00},
        {666, "Øystein Aarseth", 666.00},
        {9, "John Lennon", 9999.99}
    };

    // Chamada da função para exibir o vetor de funcionários
    exibetab(funcionarios, 3);

    return 0;
}