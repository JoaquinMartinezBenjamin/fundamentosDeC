/*
Materia: Fundamentos de programación
Alumno: Benjamín Joaquín Martínez 
Ejercicio 10:
Calcular el numero de pulsaciones que una persona debe tener por cada 10 segundos de ejercicio, si la formula es:
			num. pulsaciones = (220 - edad)/10

*/
#include <stdio.h>
#include <conio.h>
main()
{       
    #define p printf
    
	int edad;
	float pulsaciones;

	p("Introduzca la edad de la persona: ");
	p("\n");
	scanf("%d",&edad);
	
	pulsaciones = (float)((220 - edad ) /10);
	p("\n");
	
	p("Esta persona debe tener %2.f pulsaciones ",pulsaciones); p (" por cada 10 segundos de ejercicio");
	
	
	
}
