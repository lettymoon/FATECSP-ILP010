// Omissão de else

/*Um posto de combustíveis dá um desconto de 5% para abastecimentos com valores superiores a
R$ 100,00. Dados o número de litros abastecidos e o preço do litro de combustível, informe o
valor total e o valor do desconto (apenas se houver um desconto).*/

#include <stdio.h>

int main(void){

    float preco, litros, total, desconto;
    scanf("%f %f", &preco, &litros);

    total = litros*preco;

    if( total>100.00 ) {
    desconto = 0.05*total;
    printf("Desconto: R$ %.2f\n",desconto);
    total = total - desconto;
    }

    printf("Total: R$ %.2f\n",total);

    return 0;
}

/*
- Num comando if, a parte else não é obrigatória e pode ser omitida.
- Nesse caso, se a condição for falsa, a execução segue para o próximo comando.
*/