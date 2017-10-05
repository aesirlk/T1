#include <stdio.h>
#include <stdlib.h>   //Bibliotecas
#include <math.h>

//*************************************
//*   T1 - Calculo - Parte 1          *
//*   Geremias S. Novais, RA 3042     *
//*   Lucas Valim Magalhães, RA 3023  *
//*   Maicon Tagliaferro, RA 3027     *
//*************************************

float a(float x, float h);  //Para usar as funções em case
float b(float x, float h);
float c(float x, float h);
float d(float x, float h);
float e(float x, float h);
float ff(float x, float h);
float g(float x, float h);


int main(int argc, char *argv[])
{
    float h, x,  f;     //Variaveis   //Números racionais
    int op ;    //Números inteiros

    printf("Digite o valor de X em graus:\n");
    scanf("%f", &x);     //Recebe os valores
    printf("Digite o valor de H :\n");   //Aparece na tela
    scanf("%f", &h);

    printf("Menu das Funcoes a serem Derivadas:\n");

    printf("\n");  // pular linha
    printf("1. Raiz quadrada\n"); //Completar o menu com todas as funções
    printf("2. Cubica\n");
    printf("3. exp(x)\n");
    printf("4. Logaritmo de x\n");
    printf("5. seno de x\n");
    printf("6. cosseno de x\n");
    printf("7. tangente de x\n");
    printf("\n");

    printf("Digite sua opcao\n");
    scanf("%d", &op);

    switch(op){

    case 1:
        if(x<=0){
             printf ("Valor invalido para raiz quadrada");
        }
        else{
        f = a(x, h);

        printf("A derivada da funcao eh: %f \n",f);
        }
        break;

    case 2:
        f = b (x, h);

        printf("A derivada da funcao eh: %f \n",f);
        break;

    case 3:
        f = c (x, h);

        printf("A derivada da funcao eh: %f \n",f);
        break;

    case 4:
        if(x<=0){
        printf ("Valor invalido para logaritimo\n");
        }

        else{
        f = d (x, h);
        printf("A derivada da funcao eh: %f \n",f);}
        break;

    case 5:
        f= e (x, h);

        printf("A derivada da funcao eh: %f \n",f);
        break;

    case 6:
        f= ff (x, h);

        printf("A derivada da funcao eh: %f \n",f);
        break;

    case 7:
        f= g (x, h);

        printf("A derivada da funcao eh: %f \n",f);
        break;

    default:
        printf("opcao invalida\n"); // Se digitar valor que não tem no menu
    }




  system("PAUSE");
  return 0;
}

float a(float x, float h){
    float f;

    f= (sqrt(x+h) - sqrt(x))/h;

    return f;
}

float b(float x, float h){
    float f;

    f= (((x+h)*(x+h)*(x+h)) - (x*x*x))/h;
return f;     //f recebe a função e leva pra cima

}
float c(float x, float h){
    float f;
    f= (exp(x+h) - exp(x))/h;
    return f;

}

float d(float x, float h){
    float f;
    f=  (log(x+h) - log(x))/h;
    return f;

}

float e(float x, float h){
    float f;
    f=  (sin(x+h) - sin(x))/h;
    return f;

}

float ff(float x, float h){
    float f;
    f=  (cos(x+h) - cos(x))/h;
    return f;

}

float g(float x, float h){
    float f;

    x = x*M_PI/180;

    f=  (tan(x+h) - tan(x))/h;
    return f;
}
