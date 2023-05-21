/*Uma pessoa está obesa se seu IMC (peso dividido pela altura ao quadrado) é
superior a 30. Dados o peso e a altura de uma pessoa, informe se ela está obesa.*/

#include <stdio.h> //entrada e saída padrão
#include <math.h> //funções matemáticas

int main(void){

    float peso, altura;
    scanf("%f %f", &peso, &altura);

    float imc = peso/ pow(altura, 2);
    printf("IMC = %.1f\n", imc);
    
    if(imc <= 30)
        printf("Não está obesa.\n");
    else
        printf("Está obesa.\n");



    return 0;
}