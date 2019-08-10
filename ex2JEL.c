#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Eduardo Kobe, João Gabriel, Leonardo Vargas

float compara(float A, float B, float C), d;

int main ()
{
	float a,b,c,d,maior;
	printf("Digite 3 numeros:");
	scanf("%f %f %f", &a, &b, &c);
	
	maior = compara(a,b,c);
	
	printf("\nNumeros digitados: %.2f %.2f %.2f", a, b, c);
	printf("\nMaior numero: %.2f", maior);

}

float compara(float A, float B, float C)
{
	float d;
	
	if (A>=B && A>=C)
	{
		d=A;
	}
	if(B>=A && B>=C)
	{
		d=B;
	}
	if (C>=A && C>=B)
	{
		d=C;
	}
	
	return (d);
}
