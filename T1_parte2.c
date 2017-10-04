#include <stdio.h>
#include <stdlib.h>   //Bibliotecas
#include <math.h>

//*************************************
//*   T1 - Calculo - Parte 1          *
//*   Geremias S. Novais, RA 3042     *
//*   Lucas Valim Magalhães, RA 3023  *
//*   Maicon Tagliaferro, RA 3027     *
//*************************************


float a(float x, float e,float h, int n);
float b(float x, float e,float h, int n);

int main()
{
    float x, e, res, h;
    int i=0, n, op;
    printf("Digite o valor de x:\n");
    scanf("%f",&x);
    printf("Digite o valor de e:\n");
    scanf("%f",&e);
    printf("Digite o valor de n:\n");
    scanf("%d",&n);
    printf("Digite o valor de h:\n");
    scanf("%f",&h);

    printf("1. Log(x) + sen(x)\n");
    printf("2. e^x + x^3 + 2\n");

    printf("\nDigite sua opcao\n");
    scanf("%d", &op);

    switch (op){

    case 1:
        res = a(x, e, h, n);
        break;

    case 2:
        res = b(x, e, h, n);
        break;

    default:
        printf("Opcao invalida\n");
    }

    printf("\nSolucao: %f",res);
}

float a(float x, float e, float h, int n){
    int i=0;
    float xatual, er, der;
    do{
       der = ((log(x+h) + sin(x+h)) - (log(x) + sin(x)))/h;
       xatual = x - (log(x) + sin(x)) / der;

       er = (fabs(xatual - x)) / (fabs(xatual));

       x = xatual;

       i = i + 1;


    }while((i <= n) || (er >= e));


    return x;
}


float b(float x, float e, float h, int n){
    int i=0;
    float xatual, er, der;
    do{
       der = (exp(x+h)+((x+h)*(x+h)*(x+h))+2) - (exp(x)+(x*x*x)+2)/h;
       xatual = x - (exp(x) + (x*x*x)+2) / der;

       er = (fabs(xatual - x)) / (fabs(xatual));

       x = xatual;

       i = i + 1;


    }while((i <= n) || (er >= e));

    //printf("%f",x);
    return x;
}
