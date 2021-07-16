/*
Materia: Fundamentos de programación
Alumno: Benjamín Joaquín Martínez 

Ejercicio 6:
 Realizar un algoritmo que calcule la edad de una persona.
*/
#include <stdio.h>
#include <conio.h>
main()
{       
   
   int diaNac,mesNac,anioNac;
   int diaAct,mesAct,anioAct;
   int edad;
        
	printf("Introduzca el dia en que nacio la persona en un rango del 1 al 31\n");
		scanf("%d",&diaNac);
	printf("Introduzca el mes en que nacio la persona en un rango del 1 al 12\n");
		scanf("%d",&mesNac);
	printf("Introduzca el anio en que nacio la persona\n");
		scanf("%d",&anioNac);


	printf("Introduzca el dia actual en un rango del 1 al 31\n");
		scanf("%d",&diaAct);
	printf("Introduzca el mes actual en un rango del 1 al 12\n");
		scanf("%d",&mesAct);
	printf("Introduzca el anio actual\n");
     	scanf("%d",&anioAct);
		
		edad= anioAct-anioNac;
		edad = ((mesAct<mesNac) || (mesAct==mesNac && diaAct<diaNac )) ?  edad=edad -1 :edad * 1 ;
		
			printf("La persona tiene %d anios cumplidos\n", edad);
		

}
