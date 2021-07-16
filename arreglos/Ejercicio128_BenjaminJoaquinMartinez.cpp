/*Alumno: Benjamin Joaquin Martinez
Ejercicio 128) Hacer un algoritmo que llene una matriz de 10 * 10 
y determine la posición [renglon ,columna] del numero mayor almacenado en la matriz.
 Los números son diferentes. 
 
 */
 
 
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <time.h>

main(){
	
	int matriz[10][10];
	int x,y;
	int mayor;
	int posicionX;
	int posicionY;

	
    //variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    int limiteInferior=1;
    int limiteSuperior=50;
    srand(time(NULL));
    /////////////////////
    
 for(x=0;x<10; x++) {
 for(y=0;y<10; y++) {
 
                   matriz[x][y]=limiteInferior + rand() % ((limiteSuperior+1) - limiteInferior);
                   
                   }
                   }
                   //introduje un numero mayor a los demas en una posicion al azar
                    limiteInferior=0;
                    limiteSuperior=9;
                    x=limiteInferior + rand() % ((limiteSuperior+1) - limiteInferior);
                    y=limiteInferior + rand() % ((limiteSuperior+1) - limiteInferior);
                    matriz[x][y]=99;
                   ///////////////////////////////////////////////////////
  mayor=matriz[0][0];
  //Busque el numero mayor
  for(x=0;x<10; x++){
  for(y=0;y<10; y++){
  	
   printf("%d,%d[%d]\t",x,y,matriz[x][y]);
   if(mayor<matriz[x][y]) {mayor=matriz[x][y]; posicionX=x; posicionY=y; }
   
}
printf("\n");
}

printf("\nEl numero mayor es %d,%d[%d]",posicionX,posicionY,mayor);

}
