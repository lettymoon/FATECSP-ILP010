/*Exemplo 9 
Vetor de strings
*/

#include <stdio.h>

int main(void){

    char v[][8] = {"Eduardo",
                    "Catia",
                    "Ana",
                    "Denise",
                    "Beatriz"};

    for(int i=0; i<5; i++)
    puts(v[i]);

    return 0;
}