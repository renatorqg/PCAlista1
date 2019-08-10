//Dupla : Pedro Zanon e Mateus Costa.
 

#include <stdio.h>

int par_impar(int x);

int main()
{
    int a,r;
    printf("Escreva um numero:");
    scanf("%d",&a);
    
    r = par_impar(a);
    
    if(r == 0){
        printf("Numero par");
    }
    else{
        printf("Numero impar");
    }
    
    return 0;
}


int par_impar(int x){
    
    int resto,z;
    
    resto = x%2;
    
    if (resto == 0){
        z = 0;
    }
    else{
        z = 1;
    }
    return z;
    
}
