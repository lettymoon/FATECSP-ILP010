/*Crie um programa que, dada uma data, se ela for válida, informe a data do dia seguinte.
O programa deve ser composto pelas seguintes funções:

int main(void): que realiza a interface com o usuário.
int valida(int d,int m,int a): que informa se a data fornecida é válida.
int ultimo_dia(int m,int a): que informa o último dia do mês m no ano a.
int bissexto(int a): que informa se o ano a é bissexto.
void exibe_ds(int d,int m,int a): que exibe a data do dia seguinte àquele dado.*/

#include <stdio.h>

int valida(int d,int m, int a){
    if(a >= 1 && a <= 2023 && m >= 1 && m <= 12 && d >= 1 && d <=30)
        return 1;
    else
        return 0;
}

int bissexto(int a){
    if(a % 4 == 0 && a % 400 == 0 && a % 100 !=0)
        return 1;
    else
        return 0;
}

int ultimo_dia(int m, int a){
    switch(m){
        case 1:
            return 31;
        case 2:
            if (bissexto(a))
                return 29;
            return 28;
        case 3:
            return 31;
        case 4:
            return 30;
        case 5:
            return 31;
        case 6:
            return 30;
        case 7:
            return 31;
        case 8:
            return 31;
        case 9:
            return 30;
        case 10:
            return 31;
        case 11:
            return 30;
        case 12:
            return 31;
    }

}

void exibe_ds(int d, int m, int a){
    //Ano é bissexto, o mês é fevereiro e o dia é 28, entao retorna 29
    if(bissexto(a) && m == 2 && d == 28){
        printf("29/%d/%d\n", m,a);
        return;
    }
    //Ano não é bissexto
    
    //Verificar se é ultimo dia do mês 
    int ultimoDiaMes = ultimo_dia(m, a);

    if (d == ultimoDiaMes && m != 12){
        //Se o for o ultimo dia do mês e não for dezembro, retorna o dia 1 do mês seguinte
        printf("1/1/%d\n", a+1);
        return;
    } else if (d == ultimoDiaMes){
        //Se o for o ultimo dia do mês e é dezembro, retorna o dia 1 do ano seguinte
        printf("1/%d/%d\n", m+1,a);
        return;
    }

    //Calcula o dia
    printf("%d/%d/%d\n", d+1,m,a);
    return;
}


int main(void){

    int a, m, d;
    scanf("%d", &d);
    scanf("%d", &m);
    scanf("%d", &a);


    if(valida(d,m,a)){
        printf("Ano válido\n");
        if(bissexto(a))
            printf("Ano bissexto\n");
        else
            printf("Ano não bissexto\n");
        exibe_ds(d,m,a);
    } else
        printf("Data inválida\n");

    return 0;
}


