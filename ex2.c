//Dupla : Pedro Zanon e Mateus Costa.
 

#include <stdio.h>

float maior_valor(float x, float y, float z);

int main()
{
    float a,b,c,r;
    printf("Escreva um numero:");
    scanf("%f",&a);
    printf("Escreva outro numero:");
    scanf("%f",&b);
    printf("Escreva um terceiro numero:");
    scanf("%f",&c);
    
    r = maior_valor(a,b,c);
    

    
    printf("%f ",a);
    printf("%f ",b);
    printf("%f ",c);
    printf("maior valor:%f",r);
    
    return 0;
}


float maior_valor(float x, float y, float z){
    
    float comp;
    
    comp = x;
    
    if( comp < y){
    comp = y;
    }
    if ( comp < z){
    comp = z;
        
    }
    return comp;
}
