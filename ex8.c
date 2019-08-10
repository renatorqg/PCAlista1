#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void menu ();
float area (int opcao);

int main (){
	int escolha=0;
	float AREA=1;
	menu();
	while (AREA != -1){	
		
		printf("\n\nEscolha uma opcao\n");
		scanf("%d", &escolha);
		AREA = area(escolha); 
		if(AREA>=0){
			printf("Area = %f", AREA);
		}
	}
	return 0;
}

void menu (){
	printf ("\n\n1 - circulo\n2 - quadrado\n3 - trapezio\n4 - retangulo\n5 - fim\n\n");
}

float area(int opcao){
	float A=0, R, l, b1, b2, h;
	if (opcao==1){
		printf("Digite o valor da raio.\n");
		scanf ("%f",&R);
		if (R>0){
			A=M_PI*R;
		} else{
			printf("O valor inserido e invalido\n\n");
		}
		
	} else if (opcao==2){
		printf("Digite o valor do lado\n");
		scanf("%f", &l);
		if (l>0){
			A=l*l;
		} else{
			printf("O valor inserido e invalido\n\n");
		}
	} else if (opcao==3){
		printf("Digite os valores para as duas bases\n");
		scanf("%f %f", &b1, &b2);
		printf("Digite o valor para a altura\n");
		scanf ("%f", &h);
		
		if (b1>0 && b2>0 && h>0){
			A=(b1+b2)*h/2;
		} else{
			printf("Algum(ns) valor(es) inserido(s) e(sao) invalido(s)\n\n");
		}
	} else if (opcao==4){
		printf("Digite os valores da base e da altura\n");
		scanf("%f %f", &b1, &h);
		if (b1>0 && h>0){
			A=b1*h;
		} else{
			printf("Algum(ns) valor(es) inserido(s) e(sao) invalido(s)\n\n");
		}
	} else if (opcao==5){
		A=-1;
	}
	return A;	
	}
