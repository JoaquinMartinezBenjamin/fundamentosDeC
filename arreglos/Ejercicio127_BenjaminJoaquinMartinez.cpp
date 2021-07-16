/* Alumno: Benjamin Joaquin Martinez
Ejercicio 127) 
Hacer un algoritmo que almacene números en una matriz de 5 * 6. 
Imprimir la suma de los números almacenados en la matriz. */


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <time.h>

main(){
	
	int matriz[5][6];
	int x,y;
	int suma=0;
	
	///////////////////77
    //variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    int limiteInferior=1;
    int limiteSuperior=9;
    srand(time(NULL));
    /////////////////////
    
 for(x=0;x<5; x++)  for(y=0;y<6; y++) 
                   matriz[x][y]=limiteInferior + rand() % ((limiteSuperior+1) - limiteInferior);

 for(x=0;x<5; x++) {
  for(y=0;y<6; y++){
  	
   printf("%d,%d[%d]\t",x,y,matriz[x][y]);
   suma+= matriz[x][y];
   
}
printf("\n");
}


                   
 printf("\n La suma de los numeros de la matriz es ",suma);
	
}
	
