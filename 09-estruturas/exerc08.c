/*Exercício 07
Complete o programa a seguir, de modo que ele funcione como está
exemplificado na janela de execução ao lado.
*/

#include <stdio.h>
#include <math.h>

typedef struct ponto{
  int x;
  int y;
} Ponto;

float distancia(Ponto a, Ponto b){
  return sqrt(pow((a.x - b.x),2) + pow((a.y - b.y),2));
}

float perimetro(Ponto v[], int n){
    float perimetro = 0;
    for(int i = 0; i < n-1; i++){
        float dist = distancia(v[i],v[i+1]);
        perimetro += dist;
    }
    //fechar poligono
    perimetro += distancia(v[0],v[n-1]);
    return perimetro;
}

int main(void){
    Ponto v[4] = {{0,2},{2,2},{2,0},{0,0}};

    printf("Perimetro: %.1f\n",perimetro(v,4));

    return 0;
}