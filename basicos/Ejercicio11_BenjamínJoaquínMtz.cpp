/*
Materia: Fundamentos de programación
Alumno: Benjamín Joaquín Martínez 
Ejercicio 11:
Calcular el nuevo salario de un obrero si obtuvo un incremento del 25% sobre su salario anterior. 

*/
#include <stdio.h>
#include <conio.h>
main()
{       
    #define p printf
    
	int salario;
	float incremento;

	p("Introduzca el salario anterior del obrero: ");
	p("\n");
	scanf("%d",&salario);
	
	incremento= (float)salario + ((float)salario * 0.25);
	
	p("Salario anterior: %d",salario); p("\n");
	p("Incremento: 25 por ciento",salario); p("\n");
	p("Salario actual: %.2f",incremento); p("\n");
	
	
	
}
