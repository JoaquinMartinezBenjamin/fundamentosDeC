/*
Materia: Fundamentos de programación
Alumno: Benjamín Joaquín Martínez 
Ejercicio 9:
La presión, el volumen y la temperatura de una masa de aire se relacionan por la formula:
	masa = (presión * volumen)/(0.37 * (temperatura + 460))
*/
#include <stdio.h>
#include <conio.h>
main()
{       
    #define p printf
	int presion, volumen, temperatura;
	float masa;
	
	p("Introduzca la presion: ");
	p("\n");
	scanf("%d",&presion);
	
	p("Introduzca el volumen: ");
	p("\n");
	scanf("%d",&volumen);
	
    p("Introduzca la temperatura:");
    p("\n");
	scanf("%d",&temperatura);
	
    masa= (float)(presion * volumen) / (float)(0.37 * (temperatura + 460));	
	p("\n");
	p("La masa optenida es: %f",masa);
	
	
	
}
