//Esta es una ej de tienda en terminal

#include <stdio.h>
#include<string.h>
char opcion[2]; 
int var1 = 0 , total_var1_cash = 0, seguirComprando =0;

void main() {


while (seguirComprando != 1) {
    printf("Elige el producto que buscas\n");
    printf("A) Codeina\n");
    printf("B) Weed\n");
    printf("C) Coke\n");
    printf("D) LSD\n");
    printf("E) Tussi\n");
    printf("X) Salir\n");    
    scanf("%s", opcion);

    if(strcmp(opcion, "A")== 0){
        printf("El valor es de: $15 USD\n Ingrese la cantidad deseada\n");
        scanf("%d", &var1);

        total_var1_cash = (total_var1_cash + (var1*15));

        printf("Su total de Codeina es : %d \n", total_var1_cash);

    }else if(strcmp(opcion, "B")==0){
        
    }else if(strcmp(opcion, "C")==0){
    
    }else if(strcmp(opcion, "D")==0){
    
    }else if(strcmp(opcion, "E")==0){
        
    }else{
       
        printf("Para salir escriba 1 sino, oprima cualquier tecla \n");
        scanf("%d", &seguirComprando);       
        
  }


}



}



