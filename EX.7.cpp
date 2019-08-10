#include<stdio.h>
float soma(float a, float b);
float sub(float a, float b);
float div(float a, float b);
float mult(float a, float b);
void res(float a, float b, float c);

int main()
{
	float A, B, RES;
	int C , D;
	do
	{
		printf("DIGITE O PRIMEIRO NUMERO:\n");
		scanf("%f", &A);
		printf("DIGITE O SEGUNDO NUMERO. (OBS: DIFERENTE DE ZERO):\n");
		scanf("%f", &B);
		printf("DIGITE A OPERACAO DESEJADA:\n 1-SOMA\n 2-SUBTRACAO\n 3-MULTIPLICACAO\n 4-DIVISAO\n");
		scanf("%d", &C);
		if (C==1)
		{
			RES=soma( A,  B);
		}
		if (C==2)
		{
			RES=sub( A, B);
		}
		if (C==3)
		{
			RES=mult( A,B);
		}
		if (C==4)
		{
			RES=div(A, B);
		}
		res(A,B,RES);
	printf("\nDeseja continuar? 0 para parar \n");
	scanf("%d", &D);		
	}while(D!=0);
	return (0);
}

float soma(float a, float b)
	{
		float x;
		x=a+b;
		return x;
	}
float sub(float a, float b)
	{
		float x;
		x=a-b;
		return x;
	}
float div(float a, float b)
	{
		float x;
		x=a/b;
		return x;
	}
float mult(float a, float b)
	{
		float x;
		x=a*b;
		return x;
	}
void res(float a, float b, float c)
{
	printf("os valores inseridos fora %.2f e %.2f. O resultado da operacao foi %.2f", a, b, c);
}
