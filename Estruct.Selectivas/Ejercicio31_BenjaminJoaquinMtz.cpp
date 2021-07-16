/*Alumno: Benjamín Joaquín Martínez
Ejercicio 31
Una compañía de seguros esta abriendo un depto. de finanzas y estableció un programa para captar clientes, 
que consiste en lo siguiente: Si el monto por el que se efectúa la fianza es menor que $50 000 la cuota a pagar será por el 3% del monto, 
y si el monto es mayor que $50 000 la cuota a pagar será el 2% del monto. 
La afianzadora desea determinar cual será la cuota que debe pagar un cliente. 
*/



#include<stdio.h>
#include<conio.h>

main () {

float montoFianza;
float cuotaCliente;

printf("Introduzca el monto por el que se efectua la fianza\n");
scanf("%f",&montoFianza);

if(montoFianza < 50000) cuotaCliente = montoFianza * .03; 
else cuotaCliente = montoFianza * .02;
printf("\n******************************************************\n");
printf("\nEl cliente debe pagar %.2f de cuota ",cuotaCliente);


}
