/*
Materia: Fundamentos de programación
Alumno: Benjamín Joaquín Martínez 
Ejercicio 8:
Leer un numero y escribir el valor absoluto del mismo. 

*/
#include <stdio.h>
#include <conio.h>
main()
{       
    #define p printf
    
    int numero;


	p("Introduzca un numero : \n");
	scanf("%i",&numero);
	
numero = (numero<0) ? numero * -1 :numero * 1 ;

	p("\nEl valor absoluto es %d", numero);

}
