#include<math.h>
#include<stdio.h>


float potencia(int n, float r)
{
  float x;
  x = pow(n,r);
  return(x);
 }


int main()
{
  int a;
  float b, c;
  printf("Escreva base da potencia: ");
  scanf("%d",&a);
  printf("\nEscreva o expoente: ");
  scanf("%f",&b); 
  c = potencia(a, b);
  printf("\nO resultado e = %f", c);
 }
  
