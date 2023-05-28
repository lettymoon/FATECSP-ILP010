//Exemplo 04
//Exibição de strings

#include <stdio.h>

    int main(void){
    char v[513];

    printf("Qual o seu nome? ");
    gets(v);
    
    puts(v);
    printf("%s\n", v);

    return 0;
}

/*
Para exibir uma string armazenada num vetor de caracteres v, podemos chamar:
printf("%s",v): exibe a string e mantém o cursor na mesma linha.
puts(v): exibe a string e move o cursor para o início da próxima linha.

As funções gets() e puts() estão declaradas no arquivo stdio.h!
*/