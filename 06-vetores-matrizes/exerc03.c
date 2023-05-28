/*Exercício 03:
Crie a função histograma(), que exibe um gráfico com a variação de temperatura
ao longo da semana. Nesse gráfico, cada barra deve ser composta por n caracteres
ASCII 220 (sendo n a temperatura correspondente). Ademais, a cor de cada barra deve
indicar se a temperatura é igual à media (verde), menor (azul) ou maior (vermelho).
Para simplificar, suponha que as temperaturas são valores entre 0ºC e 50ºC.
*/


#include <stdio.h>

void preenche(float v[7]){
    printf("1a temperatura: ");
    scanf("%f", &v[0]);
    printf("2a temperatura: ");
    scanf("%f",&v[1]);
    printf("3a temperatura: ");
    scanf("%f",&v[2]);
    printf("4a temperatura: ");
    scanf("%f",&v[3]);
    printf("5a temperatura: ");
    scanf("%f",&v[4]);
    printf("6a temperatura: ");
    scanf("%f",&v[5]);
    printf("7a temperatura: ");
    scanf("%f",&v[6]);
}

float media(float v[7]){
    float soma = 0;
    for(int i=0; i < 7;i++){
        soma += v[i];
    }
    return soma/7;
}

void histograma(float v[7], float media){
    //colorir usando _textcolor para azul, verde e vermelho
    printf("\n");
    for(int i=0; i < 7;i++){
        if(v[i] < media){
            //pinta de azul
            for(int j=0; j < v[i];j++){
                printf("*");
            }
        }else if (v[i] == media){
            //pinta de verde
            for(int j=0; j < v[i];j++){
                printf("-");
            }
        }else{
            //pinta de vermelho
            for(int j=0; j < v[i];j++){
                printf("+");
            }
        }
        printf("\n");
    }
}

int main(){
    float v[7];
    preenche(v);
    histograma(v,media(v));

    return 0;
}