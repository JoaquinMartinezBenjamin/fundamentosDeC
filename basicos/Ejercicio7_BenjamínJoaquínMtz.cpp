/*
Materia: Fundamentos de programaci�n
Alumno: Benjam�n Joaqu�n Mart�nez 
Ejercicio 7:
Dada un cantidad en pesos, obtener la equivalencia en d�lares, 
asumiendo que la unidad cambiar�a es un dato desconocido. 
*/
#include <stdio.h>
#include <conio.h>
main()
{       
    #define p printf
    
	int peso,dolar;
	float equivalencia;

	p("Introduzca la cantidad de pesos: ");
	p("\n");
	scanf("%d",&peso);
	
	p("Introduzca el valor actual del dolar: ");
	p("\n");
	scanf("%d",&dolar);

	
    equivalencia = (float)peso / (float)dolar;
	p("\n");
	p("Los %d pesos equivalen a ",peso); p ("%f dolares", equivalencia);
	
	
	
}
