#include <stdio.h>
#include <stdlib.h>

int eounaopar(int N);

int main()
{	
	int PI;
	printf("Digite um numero para eu te dizer se ele e par ou impar\n");
	scanf("%d",&PI);
	if(eounaopar(PI)==0)
	{
		printf("O numero e PAR meu chapa\n");
	}
	else
	{
		printf("o numero e IMPAR meu velho\n");
	}
	system("pause");
	return 0;
}	
int eounaopar(int N)
{
	if(N%2==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
