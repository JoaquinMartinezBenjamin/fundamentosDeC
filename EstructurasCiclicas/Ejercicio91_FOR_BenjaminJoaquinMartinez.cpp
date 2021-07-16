/*
Alumno: Benjamin Joaquin Martínez
Ejercicio 91
Leer 50 calificaciones de un grupo de alumnos. Calcule y escriba el porcentaje de reprobados.
Tomando en cuenta que la calificación mínima aprobatoria es de 70. 
 */
 
#include<stdio.h>
#include<conio.h>

main () {

int contador;
int calificacion;
int reprobados=0;
float porcentajeRep;
 for(contador=0; contador<50; contador++)
{
	printf("\nIntroduzca la calificacion del alumano %d:\t", contador+ 1); 
	 scanf("%d",&calificacion); 
	 if (calificacion<70) reprobados++;
}


porcentajeRep = ((float)reprobados * 100)/50;
printf("\nEl porcentaje de reprobados de los 50 alumnos es %.2f", porcentajeRep); 

}
