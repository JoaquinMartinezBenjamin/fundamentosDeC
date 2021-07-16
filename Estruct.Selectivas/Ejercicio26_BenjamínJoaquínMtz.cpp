/*
Alumno: Benjamín Joaquín Mtz
Ejercicio 26
Hacer un algoritmo que calcule el total a pagar por la compra de camisas. 
Si se compran tres camisas o mas se aplica un descuento del 20% sobre el total de la compra 
y si son menos de tres camisas un descuento del 10%

*/


#include<stdio.h>
#include<conio.h>

main () {
	
	int totalCamisas;
	float totalCompra;
	float totalDescuento;
	
printf("Introduzca el total de la compra\n");
scanf("%f",&totalCompra);

printf("Introduzca el total de camisas compradas\n");
scanf("%i",&totalCamisas);

if (totalCamisas>=3) totalDescuento= totalCompra - (totalCompra * .20); 
    else totalDescuento = totalCompra - (totalCompra * .10);



printf("El total a pagar por %i camisas es %.2f ",totalCamisas,totalDescuento);
}
