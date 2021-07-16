/* Alumno: Benjamín Joaquin Martínez
Ejercicio 32
En una escuela la colegiatura de los alumnos se determina según el numero de materias que cursan. 
El costo de todas las materias es el mismo.
Se ha establecido un programa para estimular a los alumnos, el cual consiste en lo siguiente:
 si el promedio obtenido por un alumno en el ultimo periodo es mayor o igual que 9,
  se le hará un descuento del 30% sobre la colegiatura y no se le cobrara IVA; 
  si el promedio obtenido es menor que 9 deberá pagar la colegiatura completa,
   la cual incluye el 10% de IVA.
Obtener cuanto debe pagar un alumno. 
*/

#include<stdio.h>
#include<conio.h>

main () {
	
	int numeroMaterias;
	float costoMateria;
	float costoTotal;
	float promedio;
	float descuento;
	float IVA;
	
	printf("\nIntroduzca el numero de materias que desea cursar el alumno\n");
	scanf("%d",&numeroMaterias);
	
	printf("\nIntroduzca el costo actual por materia\n");
	scanf("%f",&costoMateria);
	
	
	printf("\nIntroduzca el promedio obtenido en el ultimo periodo escolar\n");
	scanf("%f",&promedio);
	
	  costoTotal = (float)numeroMaterias * costoMateria;
	  
	if(promedio>=9)   {
	                  descuento = costoTotal * 0.30;
	                  costoTotal= costoTotal - descuento;
	                  } 
	                  
	                  else
	                  {
	                    IVA = costoTotal * 0.10;
	                    costoTotal = costoTotal + IVA ; 
					  }
					  
	printf ("\n\nEl alumno debera pagar %.2f de colegiatura",costoTotal);
}


