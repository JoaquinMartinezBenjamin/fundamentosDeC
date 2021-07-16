/* Alumno: Benjamín Joaquín Martínez
Ejercicio 49

Una frutería ofrece las manzanas con descuento según la siguiente tabla:
		NUM. DE KILOS COMPRADOS		% DESCUENTO
			   0   -  2					  0%
			  2.01 -  5 				10%
			  5.01 - 10					15%
			10.01 en adelante			20%
	Determinar cuánto pagara una persona que compre manzanas en esa frutería.
*/

#include<stdio.h>
#include<conio.h>

main () {
	float kilos;
	float precioKilo;
	float totalCompra;
printf("Introduzca el total de kilos comprados\n");
scanf("%f",&kilos);

printf("\nIntroduzca el precio por kilo de manzana\n");
scanf("%f",&precioKilo);
         
         if(kilos>=0      &&  kilos<=2 ) totalCompra =  kilos * precioKilo;
         if(kilos>=2.01   &&  kilos<=5 ) totalCompra = (kilos * precioKilo) - ((kilos * precioKilo) * .10);
         if(kilos>=5.01   &&  kilos<=10) totalCompra = (kilos * precioKilo) - ((kilos * precioKilo) * .15);
         if(kilos>=10.01               ) totalCompra = (kilos * precioKilo) - ((kilos * precioKilo) * .20);
         
         printf("\nEl cliente pagara %.2f por %.2f kilos\n",totalCompra,kilos);
}


