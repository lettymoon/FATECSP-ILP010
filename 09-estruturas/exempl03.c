/* Definição de tipo estrutura rotulado e nomeado

A definição a seguir cria um tipo estrutura rotulado e nomeado, para armazenar o código, o
nome e o salário de um funcionário:
*/

typedef struct funcionario{ // rótulo do tipo
int codigo;
char nome[21];
float salario;
} Funcionario; // nome do tipo

//Após a compilação dessa definição, o compilador trata struct funcionario e Funcionario como nomes do mesmo tipo de dados (sinônimos).