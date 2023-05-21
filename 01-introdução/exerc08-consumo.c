/*Dada uma distância percorrida em quilômetros, e o total de litros de combustível gasto
para percorrê-la, informe o consumo médio do veículo.*/

#include <stdio.h>

int main (void){

    float dist, litros;
    printf("Entre com a distancia em km e a quantidade de gasolina em litros: ");
    scanf("%f %f", &dist, &litros);

    float media = litros/dist;
    printf("O consumo médio pecorrido é = %.1f litros/km\n", media);

    return 0;

}