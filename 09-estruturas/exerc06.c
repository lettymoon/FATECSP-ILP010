/*Exercício 06 
Cadastro de livros
Crie um programa que usa o tipo Livro (que guarda o título, o autor e o ano de publica-
ção de um livro) para representar e exibir a tabela a seguir.
*/

#include <stdio.h>

struct Livro {
    char titulo[100];
    char autor[100];
    int ano;
};

void exibetab(struct Livro book[], int n) {
    for (int i = 0; i < n; i++) { // criar um for para exibir os livros
        printf("%s - %s - %d\n", book[i].titulo, book[i].autor, book[i].ano);
    }
}

int main(void) {
    // Exemplo de vetor com os livros
    struct Livro book[3] = {
        {"O morro dos ventos uivantes", "Emily Brontë", 1847},
        {"O retrato de Dorian Gray", "Oscar Wilde", 1880},
        {"Alice no país das maravilhas", "Lewis Carroll", 1865}
    };

    // Chamada da função para exibir os livros
    exibetab(book, 3);

    return 0;
}