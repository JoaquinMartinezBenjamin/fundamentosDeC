/* Alumno: Benjamín Joaquín Martínez
Ejercicio 28
 Calcular el total que una persona debe pagar en un llantera, 
si el precio de cada llanta es de $800 si se compran menos de 5 llantas y de $700 si se compran 5 o mas. 
*/


#include<stdio.h>
#include<conio.h>

main () {
	
	int totalLlantas;
	float total;

	


printf("Introduzca el total de llantas compradas\n");
scanf("%i",&totalLlantas);

if (totalLlantas<5) total= totalLlantas * 800; 
    else total = totalLlantas * 700;



printf("El total a pagar por %i llantas es %.2f ",totalLlantas,total);
}
