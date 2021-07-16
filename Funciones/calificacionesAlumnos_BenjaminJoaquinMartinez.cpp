/*El profesor de una materia desea conocer la cantidad de sus alumnos que no tienen derecho al examen de nivelación.
 Diseñe un algoritmo que lea las calificaciones obtenidas en las 5 unidades por cada uno de los 40 alumnos 
 y escriba la cantidad de ellos que no tienen derecho al examen de nivelación. */
 
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <time.h>

	
float randomize(int x,int y){
	
	
	//variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    int limiteInferior=x;
    int limiteSuperior=y;
    

   return	limiteInferior + (rand() % ((limiteSuperior+1) - limiteInferior));

}

 float getCalificacion(){
 
 	float sumaUnidades=0;
 	float promedio=0;
 	for(int i =0; i<5; i++){
 			
 		sumaUnidades += randomize(0,100);
	 }
	 
promedio= sumaUnidades/5;
return promedio;
 }


main(){
	srand(time(NULL));
	int contador=0;
	int nivelacion=0;
	float calificacion=0;
	while(contador<40){
		calificacion=getCalificacion();
		printf("\nLa calificacion del alumno %d es %.2f",contador + 1,calificacion);
		if(calificacion>50) nivelacion++;
		
		contador++;
		}
		
		
    printf("\nEl total de alumnos con derecho a examen de nivelacion es %d",nivelacion)	;	
		}
	

