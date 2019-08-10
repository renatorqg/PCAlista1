#include <stdio.h>
#include <stdlib.h>

float fsoma( float n1,float n2);
float fsub( float n1,float n2);
float fmult( float n1,float n2);
float fdiv( float n1,float n2);

int main(int argc, char *argv[])
{
    float a,b, soma, sub, mult, div;
    printf ("digite os dois numeros:");
    scanf ("%f %f",&a, &b);
    soma=fsoma(a,b);
    printf("soma:%.2f\n",soma);
    sub=fsub(a,b);
    printf("subtracao:%.2f\n",sub);
    mult=fmult(a,b);
    printf("multiplicacao:%.2f\n",mult);
    div=fdiv(a,b);
    printf("divisao:%.2f\n",div);
    return 0;
}

    float fsoma( float n1,float n2){
          float z;
          z=n1+n2;
          return z;}
    float fsub( float n1,float n2){
          float z;
          z=n1-n2;
          return z;}
    float fmult( float n1,float n2){
          float z;
          z=n1*n2;
          return z;}
    float fdiv( float n1,float n2){
          float z;
          z=n1/n2;
          return z;}

