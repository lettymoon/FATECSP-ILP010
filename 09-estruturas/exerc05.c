/*Exercício 05
Total da folha de pagamento
Crie a função total_salarios(v,n), que devolve a soma dos salários dos n fun-
cionários armazenados no vetor v. Faça também um programa para testar a sua função.
*/

#include <stdio.h>

struct funcionario{ // definição da struct
    int codigo;
    char nome[100];
    float salario;
};

// função que vai fazer a soma dos salários
float total_salarios(struct funcionario v[], int n){
    float soma = 0;
    for(int i = 0; i < n; i++){
        soma += v[i].salario;
    }

    return soma;
}

int main(void){

    struct funcionario v[3] = {
        {25, "Letícia Cândido", 8750.00},
        {666, "Øystein Aarseth", 666.00},
        {9, "John Lennon", 9999.99}
    };

    total_salarios(v,3); // chamar a função 

    printf("%3.f\n", total_salarios(v,3)); // exibir o resultado da função

    return 0;
}