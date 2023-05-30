#include <stdio.h>

int len(char v[]){

    int i = 0;
    while(v[i] != '\0')
        i++;
    
    return i;
}