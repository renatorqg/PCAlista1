// Daniel Francisco da Silva
// Gabriel Sereia

#include <stdio.h>
#include <stdlib.h>

void func(int x,int y);

int main()
{
	int m,p;
	printf("Insira o valor de M e P, o valor de P precisa ser <= M:\n");
	scanf("%d %d",&m ,&p);
   	
	while(p>m)
	{
		printf("O valor digitado para P e maior que M!!!\n");
		printf("Insira o valor de P novamente:\n");
		scanf("%d",&p);
	}
	
	func(m,p);

	return 0;
}


void func(int x,int y)
{
	float C,i,j,k,div,aux,fatx,faty,fatz;
    int M,P;
    M=x;
    P=y;
	if(x!=y)
    {
	
	  fatx=1;
	  faty=1;
	  fatz=1;
	  aux=x-y;
	  for(i=1;i<=x;i++)
	   {
	    	fatx=fatx*i;
	   }
	  for(j=1;j<=y;j++)
	    {
	     	faty=faty*j;
     	}
	       for(k=1;k<=aux;k++)
	       {
		     fatz=fatz*k;
	       }
	     div=faty*fatz;
         C=fatx/div;
		 printf("fat m: %f\n",fatx);
         printf("fayx: %f\n",faty);
         printf("fatz: %f\n",fatz);
         printf("div: %f\n",div);
		 printf("C: %f\n",C);
   }
   else
   {
   	 printf("C: 1\n");
   }
}
