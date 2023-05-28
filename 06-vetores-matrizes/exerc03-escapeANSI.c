// Usando o escape ANSI como alternativa para conio.h e _textcolor no linux

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
    //colorir usando escape ANSI para azul, verde e vermelho
    printf("\n");
    for(int i=0; i < 7;i++){
        if(v[i] < media){
            //pinta de azul
            printf("\x1b[0;34m");
            for(int j=0; j < v[i];j++){
                printf("\u2586");
            }
        }else if (v[i] == media){
            //pinta de verde
            printf("\x1b[0;32m");
            for(int j=0; j < v[i];j++){
                printf("\u2586");
            }
        }else{
            //pinta de vermelho
            printf("\x1b[0;31m"); // Mudar cor do cursor para vermelho
            for(int j=0; j < v[i];j++){
                printf("\u2586");
            }
        }
        printf("\n");
    }
    printf("\x1b[0m"); // Voltar para cursor sem cor
}

int main(){
    float v[7];
    preenche(v);
    histograma(v,media(v));
    return 0;
}