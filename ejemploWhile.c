

#include <stdio.h>

void main(){
   int decision = 1;
   int incrementa = 0;  

    while(decision == 1){
        incrementa++;
        printf("Ejecucion num %d \n", incrementa);
        printf("Si desea continuar, presione 1 o cualquier tecla para salir\n");
        scanf("%d", &decision);
        if (decision != 1){
            decision++;
        }
   }
    
    printf("\nGracias, adiós\n");
}
