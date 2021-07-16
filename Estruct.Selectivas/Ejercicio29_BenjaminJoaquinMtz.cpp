/* 
Alumno: Benjamín Joaquín Martínez
Ejercicio 29 En un supermercado se hace una promoción,
 mediante la cual el cliente obtiene un descuento dependiendo de un numero que se escoge al azar. 
 Si el numero escogido es menor que 74 el descuento es del 15% sobre el total de la compra, 
 si es mayor o igual a 74 el descuento es del 20%. Obtener cuanto dinero se le descuenta. 
 */
 
 
 
#include<stdio.h>
#include<conio.h>
#include <time.h>
#include <stdlib.h>
main () {
	float totalCompra;

srand(time(NULL)); 
int azar = rand() % 149; // para que haya un 50% de probabilidad de ser mayor o menor
                         // en un rango de 0 a 148 
//printf("%i",test);


printf("Introduzca el total de su compra\n");
scanf("%f",&totalCompra);

if(azar<74) totalCompra= totalCompra - (totalCompra * .15);
  else totalCompra= totalCompra - (totalCompra * .20);
  
  
  printf("\nTotal con descuento %.2f\nSu numero al azar fue %i",totalCompra,azar);



}
