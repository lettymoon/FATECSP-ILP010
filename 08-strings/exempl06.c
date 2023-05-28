//Exemplo 06
//Cópia de strings 

#include <stdio.h>
void cpy(char s[],char t[]){

    int i=0;
    while( s[i]=t[i] )
    i++;
}
int main(void) {

    char v[5] = "dois";
    char w[5];

    cpy(w,v);

    puts(v);
    puts(w);

    return 0;
}

//A função strcpy(), que copia uma string para outra, está declarada em string.h!