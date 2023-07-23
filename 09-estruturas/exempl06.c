/* Acesso aos campos de variável estrutura

O acesso aos campos de uma estrutura é feito com o operador de seleção de campo,
representado por “.”. Por exemplo, f.codigo acessa o primeiro campo de f.
Se um campo de uma estrutura é:

um vetor, podemos indexá-lo: f.nome[0]
uma estrutura, podemos selecionar um subcampo: f.admissao.dia
*/

#include <stdio.h>

typedef struct funcionario{
    int codigo;
    char nome[100];
    float salario;
}Func;

int main(void){

    Func f = {25,"Letícia Cândido",8750.00};
    printf("%d - %c - %2.f", f.codigo, f.nome[0], f.salario); // 25 - L - 8750.00

    return 0;
}
