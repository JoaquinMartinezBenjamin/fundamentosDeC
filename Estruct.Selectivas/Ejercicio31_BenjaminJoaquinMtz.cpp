/*Alumno: Benjam�n Joaqu�n Mart�nez
Ejercicio 31
Una compa��a de seguros esta abriendo un depto. de finanzas y estableci� un programa para captar clientes, 
que consiste en lo siguiente: Si el monto por el que se efect�a la fianza es menor que $50 000 la cuota a pagar ser� por el 3% del monto, 
y si el monto es mayor que $50 000 la cuota a pagar ser� el 2% del monto. 
La afianzadora desea determinar cual ser� la cuota que debe pagar un cliente. 
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
