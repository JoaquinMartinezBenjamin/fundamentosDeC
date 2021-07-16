/*Alumno: Benjamin Joaquín Martínez
Ejercicio
118) Llenar un vector de 20 elementos, imprimir la posición y el valor del elemento mayor almacenado en el vector.
 Suponga que todos los elementos del vector son diferentes. 
 */
 
#include<stdio.h>
#include<stdlib.h>


main(){
int vector[20];
vector[20]=0;
int mayor=vector[0];
int posicion=0;
for(int x=0;x<20; x++){
printf("\n Introduzca un numero en la posicion %d:   ",x); 
scanf("%d",&vector[x]);
if(mayor< vector[x]) {mayor= vector[x]; posicion=x;}
}


printf("\nEl numero mayor es %d en la posicion %d del vector",mayor,posicion);

}
