#include <stdio.h>
#include <stdbool.h> 

void main(){
bool run_program = true;

int cantidad_original = 0;
printf("Ejercicio 3.- Ingrese un número entero positivo: "); 
scanf("%d", &cantidad_original);

while(run_program){
//A)

    //Valide que sea positivo
while( cantidad_original <= 0 ){
    printf("\n");
    printf("***ERROR***\n");
    printf("El número debe ser positivo, intente nuevamente: ");
    scanf("%d\n", &cantidad_original);
}


//B) Vector de tamaño 3, numeros inmediatamente superiores
int cantidad_b = cantidad_original;
int vector3_1[3];

    //Guardando los valores del vector
for(int i = 0; i<3; i++){
    vector3_1[i] = cantidad_b + (i+1) ;
}

    //Imprimiendo el vector
printf("\n");
printf("B) Vector de tamaño 3, numeros inmediatamente superiores\n");
for(int i = 0; i<3; i++){
    printf("Posición[%d] = %d   ", i,vector3_1[i]);
}
printf("\n");printf("\n");


//C) Vector de tamaño 3, numeros inmediatamente inferiores
int vector3_2[3];

    //Guardando los valores del vector
for(int i = 0; i<3; i++){
    vector3_2[i] = cantidad_original - (i+1) ;
}

    //Imprimiendo el vector
printf("\n");
printf("C) Vector de tamaño 3, numeros inmediatamente inferiores\n");
for(int i = 0; i<3; i++){
    printf("Posición[%d] = %d   ", i,vector3_2[i]);
}
printf("\n");printf("\n");
break; 
}



}
