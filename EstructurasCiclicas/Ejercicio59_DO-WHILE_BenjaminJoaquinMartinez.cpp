/*
Alumno: Benjamín Joaquín Martínez
Ejercicio 59
Suponga que se tiene un conjunto de calificaciones de un grupo de 40 alumnos.
 Realizar un algoritmo para calcular la calificación media y 
 la calificación mas baja de todo el grupo.*/
 
#include<stdio.h>
#include<conio.h>

main () {


int contador;
float calificacion;
float media;
float masBaja;
float acumulador;

contador=1;
printf("introduzca la calificacion del alumno %d\n",contador);
scanf("%f",&calificacion);
masBaja = calificacion;
acumulador+=calificacion;

do{
	printf("introduzca la calificacion del alumno %d\n",contador + 1);
	scanf("%f",&calificacion);
	acumulador+=calificacion;
	if(masBaja>calificacion) masBaja=calificacion;
	contador++;
}while(contador<40);

printf("\n La calificacion media es %.2f",(acumulador/40));
printf("\n La calificacion mas baja es  %.2f",masBaja);

}

 
