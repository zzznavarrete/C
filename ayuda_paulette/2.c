#include <stdio.h>


void main(){

    int cantidad=0;
    int billetes[5] = {20000,10000,5000,2000,1000};
    int cantidad_billetes[5] = {0,0,0,0,0};

    printf("Ingrese la cantidad a retirar:");
    scanf( "%d",&cantidad);

    //IF... Si NO tiene decimales
    if(1==1){
        
        int cant_aux=0, cant_acumulada = cantidad;
        int largo_array = sizeof(billetes)/sizeof(int);

            for(int i=0; i<largo_array; i++){
                
                if(cant_acumulada == 0){
              
                    break;
                }else{
                    
                    for(int i2 = 1; i2 < 1000 ;i2++){
                      
                        //printf("%d", i2);
                        cant_aux = billetes[i] * i2;
                        //printf("BILLETES[i] = %d - ",billetes[i]);
                        //printf("I2 = %d - ",i2);
                        //printf("CANT AUX = %d - ",cant_aux);

                        if(cant_aux == cant_acumulada){
                            //printf("cant_aux == cant_acumulada");
                            cantidad_billetes[i] = i2;
                            cant_acumulada = cant_acumulada - cant_aux;
                            //printf("CANT ACUMULADA REFFRESH = %d - ",cant_acumulada);
                            break;
                        }else if(cant_aux < cant_acumulada){
                            //printf("cant_aux < cant_acumulada");
                            cantidad_billetes[i] = i2;
                        }else{
                            //printf("else");
                            cant_aux = billetes[i] * (i2-1);
                            cant_acumulada = cant_acumulada - cant_aux;
                            //printf("CANT ACUMULADA REFFRESH = %d - ",cant_acumulada);
                            break;
                        }

                       
                    }

                }
            
            }


      for(int loop = 0; loop < largo_array; loop++){
            printf("Billete = %d ", billetes[loop]);
            printf("- Cantidad = %d\n", cantidad_billetes[loop]);
      }
    
      
        
            

    }else{
        printf("Esa cantidad NO se puede retirar con billetes vigentes en Chile, adiós.\n");
    }

}