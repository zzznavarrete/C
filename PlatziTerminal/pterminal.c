
#include <stdio.h>
#include <string.h>
//strcmp, para evaluar cadenas de texto, si retorna 0 es pq son iguales


void main(){
    
    char userName[25];
    int decision;

    printf("Bienvenidos a Platzi Terminal\n");
    printf("Ingresa tu nombre de usuario\n");
    
    scanf("%s", userName);

    printf("Bienvenido %s, vamos a acceder a tu sección\n", userName);

    if (strcmp(userName, "nnn")==0){
        printf("Versión gratuita\n");
        printf("Ingrese 1 para estudiar, 2 para leer el blog \ny cualquier otro valor para salir\n");
        scanf("%d", &decision);

            if(decision ==1){
                printf("Elegiste estudio\n");
            }else if(decision == 2){
                printf("Elegiste el blog\n");
            }else{
                printf("Adiós");
            }
    }else if(strcmp(userName, "nico")==0){
    
        printf("Versión Standar\n");
        printf("Ingrese 1 para estudiar, 2 para leer el blog, 3 para mentoria\ny cualquier otro valor para salir\n");
        scanf("%d", &decision);
            
            if(decision ==1){
                printf("Elegiste estudio\n");
            }else if(decision == 2){
                printf("Elegiste el blog\n");
            }else if(decision == 3){
                printf("Elegiste mentoria\n");
            }else{
                printf("Adiós");
            }
            
    }else{
        printf("No eres un usuario registrado\n");
    }
        

}
