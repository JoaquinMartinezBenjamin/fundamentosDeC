/*Alumno: Benjamín Joaquín Martínez
Ejercicio 63: Al cerrar un expendio de naranjas, 15 clientes que aun no han pagado 
recibirán un 15% de descuento si compran mas de 10 kilos.
Determinar cuanto pagara cada cliente y cuanto percibirá la tienda por esas compras. 
*/

 
#include<stdio.h>
#include<conio.h>

main () {

float kilos;
float precioKilo;
float total;
float totalTienda;
float cont;

kilos=precioKilo=total=totalTienda=cont=0;
printf("\nIntroduzca el precio por kilo\n  ");
scanf("%f",&precioKilo);

	while (cont<15){
	printf("\nIntroduzca la cantidad de kilos comprados del cliente %.0f \n",(cont+1));
	scanf("%f",&kilos);
	if(kilos>10) total= (kilos * precioKilo) - ((kilos * precioKilo) * 0.15);
	else         total= (kilos * precioKilo);
	totalTienda+=total;
	printf("\nTotal del cliente es %.2f \n",total);
              total=0;
              cont++;
              }
              
    printf("\n La tienda recibio %.2f por las compras",totalTienda);
              
}
