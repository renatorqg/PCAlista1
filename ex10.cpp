#include<stdio.h>

float perimetro(int r);
float area(int r);


int main(){
	float raio,ar,per;
	
	printf("Digite um valor de raio: \n");
	scanf("%f",&raio);
	ar=area(raio);
	per=perimetro(raio);
	
	printf("O valor do raio: %f\n",raio);
	printf("O valor do perimetro: %f\n",per);
	printf("O valor do area: %f\n",ar);		
	
	
}


float perimetro(int r){
	float per;
	per=2*3.14*r;
	return per;
}

float area(int r){
	float ar;
	ar=3.14*r*r;
	return ar;
}
