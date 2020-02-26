


#include <stdio.h>
float f, G, m, r;

void main(){

    
    
    printf("***************\n");
    printf("---- Valor de F ---\n");
    printf("***************\n");

    printf("Ingrese el valor de G:\n");
    scanf("%f", &G);
    printf("\nIngrese el vaor de m:\n");
    scanf("%f", &m);
    printf("\nIngrese el valor de r:\n");
    scanf("%f", &r);


    f = G * ( ((m*1)*(m*2)) / (r*r)  ); 

    printf("El valor de F es: %f\n", f);

}
