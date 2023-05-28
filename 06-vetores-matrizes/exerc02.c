/*O programa a seguir deve ler as temperaturas registradas diariamente, durante uma se-
mana, e informar em quantos dias a temperatura esteve acima da média para o referido
período. Crie as funções necessárias para a correta execução desse programa.
*/


#include <stdio.h>

void preenche(float v[7]){

    for(int i = 0; i < 7; i++)
        scanf("%f", &v[i]);
}

float media(float v[7]){

    float soma = 0;
    for (int i = 0; i < 7; i++)
        soma += v[i];

    float media = soma / 7;
    return media;
}

int conta(float v[7], float m){

    int c = 0;

    for(int i = 0; i < 7; i++){
        if(v[i] > m)
            c++;
    }
    return c;
}

int main(void) {
    float v[7];

    preenche(v);

    float m = media(v); 

    printf("Media: %.1f %cC\n",m,248);
    printf("Dias acima da media: %d\n",conta(v,m));

    return 0;
}