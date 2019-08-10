#include <stdio.h>

int maiordos(int N,int M,int K);

int main()
{
    int a, b, c, maior;
    printf("Dig um numero: \n");
    scanf("%d", &a);
    printf("Dig um numero: \n");
    scanf("%d", &b);
    printf("Dig um numero: \n");
    scanf("%d",&c);
    maior = maiordos(a,b,c);
    printf("O maior valor entre eles eh:%d\n",maior);
    system ("pause");
    return 0;
}

int maiordos(int N,int M,int K){
    int  m;
    m =0;
    if ((N>=M)&& (N>=K)){
      m=N;
      }
    if ((M>=N)&& (M>=K)){
      m= M;
      }
    if ((K>M) && (K>N)){
      m= K;
      }     
    return m;
}
