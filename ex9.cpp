//Lista 1 -- Exercício 9
//Luiz Eduardo Acciari -- 10/08/2019

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float convert(float gr)
{
	float rad;
	rad=gr*(3.1415/180);
	return(rad);
}

int main()
{
	float grau,r;
	do{
		printf("Digite o ângulo ou 0 para parar:");
		scanf("%f",&grau);
		if(grau==0)
		{
			printf("Saindo do programa..");
		}
		else
		{
			r=convert(grau);
			printf("Valor em radianos = %f\n",r);	
		}
	}while(grau!=0);
}
