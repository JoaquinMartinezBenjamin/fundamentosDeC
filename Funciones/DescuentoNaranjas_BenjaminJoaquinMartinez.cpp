/*Al cerrar un expendio de naranjas, 15 clientes que aun no han pagado recibirán un 15% de 
 si compran mas de 10 kilos. Determinar cuanto pagara cada cliente. 
*/

#include <stdio.h> 

 void pagoCliente(int kilos, float costoKilo){
 	
 	float total= (float)kilos * costoKilo;
 	if (kilos > 10) {
 		
 		total = total - (total * .15);
	 }
	 
	 printf("\nEl cliente pagara un total de %.2f\n",total);
 	
 }
 
 
 
main () {
	
	int contador=0;
	int kilos=0;
	float costoKilo=0;
	
	printf("Introduzca el precio del kilo de naranja:  ");
	scanf("%f",&costoKilo);
	
	while (contador< 15){
			printf("Introduzca los kilos comprador por el cliente %d:  ",contador+1);
			scanf("%d",&kilos);
			pagoCliente(kilos,costoKilo);
		
		
		contador++;
	}
	
}
