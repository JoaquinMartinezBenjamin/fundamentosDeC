/*Alumno: Benjamin Joaquin Martinez
Ejercicio 131) Hacer un algoritmo que llene una matriz de 5 * 5 y que almacene la diagonal principal en un vector.
 Imprimir el vector resultante. 
 */
 
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <time.h>

main(){
	
	int matriz[5][5];
	int x,y;
    int diagonal[5];
    int z;

	
    //variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    int limiteInferior=1;
    int limiteSuperior=9;
    srand(time(NULL));
    /////////////////////
    
 for(x=0;x<5; x++){
 for(y=0;y<5; y++){
                     matriz[x][y]=limiteInferior + rand() % ((limiteSuperior+1) - limiteInferior); 
                   }
                   }
                   
               
               
               
  for(x=z=0;x<5; x++){
  for(y=0;  y<5; y++){
  	                  printf("%d,%d[%d]\t",x,y,matriz[x][y]);
                     }
  diagonal[x]=matriz[x][z];
  z++;
  printf("\n");
                    }



//DIAGONAL
printf("\nDIAGONAL\n");
 for(x=z=0;x<5; x++){ printf("%d[%d]\t",x,diagonal[x]);}

}
