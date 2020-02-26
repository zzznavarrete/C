#include <stdio.h>

void main(){

    int cantidad = 0,neto = 0,factor_utilidad = 0, utilidad = 0, iva = 19;

    printf("  *****      TIENDA     *****   \n");
    printf("Ingrese la cantidad de productos comprados:\n");
    //Guarda en una variable el valor que el usuario ingrese 
    scanf("%d", &cantidad);

    //Validamos que la cantidad anteriormente ingresada sea mayor a 0
    if(cantidad > 0){

        if(cantidad >=1  || cantidad <=50 ){
            neto = 10000;
            factor_utilidad = 5;
            utilidad = ((neto*factor_utilidad)/100);

        }else if (cantidad >= 51 || cantidad <= 100 ){
            neto = 9000;
            factor_utilidad = 4;
            utilidad = ((neto*factor_utilidad)/100);

        }else{
            neto = 8000;
            factor_utilidad = 3;
            utilidad = ((neto*factor_utilidad)/100);
    
        }

            iva = ((neto *19)/100);

            //Imprimimos por pantalla los valores obtenidos
            printf("\n**** DETALLE DE LA COMPRA *****\n");
            printf("[NETO]: $ %d\n", neto );
            printf("[IVA]: $ %d\n", iva );
            printf("[TOTAL]: $ %d\n", (neto+iva) );
            printf("[Utilidad]: $ %d\n", utilidad );


    }else{
        printf("La cantidad debe ser mayor a 0\n");
    }

    






}