/* Campos de tipos vetor e estrutura

Uma estutura pode ter campos de quaisquer tipos. Por exemplo, o tipo Func tem campos
de tipos primitivos (codigo e salario), vetor (nome) e estrutura (admissao):
*/

typedef struct {
    int dia; // tipo primitivo
    int mes; // tipo primitivo
    int ano; // tipo primitvo 
} Data;

typedef struct {
    int codigo;
    char nome[21]; // tipo vetor
    float salario; 
    Data admissao; // tipo estrutura
} Func;

// Um tipo não primitivo só pode ser usado depois de ter sido definido no programa!

/*Tipo primitivo (ou tipo básico) é um tipo de dado que é fornecido diretamente pela linguagem e não é composto de outros tipos.
ex:
int, float, char, double, void, short, long, unsigned.
*/