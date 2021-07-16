/* Alumno: Benjamin Joaquin Martinez 
135) Hacer un algoritmo que llene una matriz de 5 * 6 
y que imprima cuantos de los números almacenados son ceros,
 cuantos son positivos y cuantos son negativos. 
 
 */
 
 
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <time.h>

main(){
	
	int matriz[5][6];
	int x,y;
	int positivos,negativos,neutros;
	positivos=negativos=neutros=0;
   

	
    //variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    int limiteInferior=-10;
    int limiteSuperior=10;
    srand(time(NULL));
    /////////////////////
    
 for(x=0;x<5; x++){
 for(y=0;y<6; y++){
                     matriz[x][y]=limiteInferior + rand() % ((limiteSuperior+1) - limiteInferior); 
                   }
                   }
                   
               
               
               
  for(x=0;x<5; x++){
  for(y=0;  y<6; y++){
  	                  printf("%d,%d[%d]\t",x,y,matriz[x][y]);
  	                  if(matriz[x][y]>0) positivos ++;
  	                  if(matriz[x][y]<0) negativos ++;
  	                  if(matriz[x][y]==0)neutros   ++;
                     }

  printf("\n");
                    }
                    
                    
                     printf("\nPositvos:  %d",positivos);
                     printf("\nNegativos:  %d",negativos);
                     printf("\nNeutros  %d",neutros);
                    
                }
