/*Alumno: Benjam�n Joaqu�n Mart�nez
Ejercicio 63 USANDO FOR: Al cerrar un expendio de naranjas, 15 clientes que aun no han pagado 
recibir�n un 15% de descuento si compran mas de 10 kilos.
Determinar cuanto pagara cada cliente y cuanto percibir� la tienda por esas compras. 
*/

 
#include<stdio.h>
#include<conio.h>

main () {

float kilos;
float precioKilo;
float total;
float totalTienda;
float cont;


printf("\nIntroduzca el precio por kilo\n  ");
scanf("%f",&precioKilo);

for(kilos=total=totalTienda=cont=0; cont<15; cont++){

	printf("\nIntroduzca la cantidad de kilos comprados del cliente %.0f \n",(cont+1));
	scanf("%f",&kilos);
	if(kilos>10) total= (kilos * precioKilo) - ((kilos * precioKilo) * 0.15);
	else         total= (kilos * precioKilo);
	totalTienda+=total;
	printf("\nTotal del cliente es %.2f \n",total);
              total=0;
        
                                                     }
              
    printf("\n La tienda recibio %.2f por las compras",totalTienda);
              
}
