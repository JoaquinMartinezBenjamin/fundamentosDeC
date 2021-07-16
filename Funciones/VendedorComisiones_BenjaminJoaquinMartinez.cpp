/*Una compañía de seguros tiene contratados a n vendedores. 
Cada uno hace tres ventas a la semana. 
Su política de pagos es que un vendedor recibe un sueldo base,
 y un 10% extra por comisiones de sus ventas. 
 El gerente de su compañía desea saber cuanto dinero 
 obtendrá en la semana cada vendedor por concepto de comisiones 
 por las tres ventas realizadas, y cuanto tomando en cuenta su sueldo base y sus comisiones. 
*/


#include <stdio.h>


void pagoVendedor(float sueldoBase){
	int contador=0;
	float comisiones=0;
	float totalVenta=0;
	float pago=0;
	
	while(contador<3){
		
	printf("\nIntroduzca el total de la venta %d del vendedor",contador+1);
	scanf("%f",&totalVenta);
	comisiones +=(totalVenta*.10);
		contador++;
			}
			pago= sueldoBase + comisiones;
			
			printf("\nEl vendedor gano %.2f este semana",pago);
			
	
}


main (){
	
	int contador =0; 
	int centinela=0;
	float sueldoBase=0;
	printf("Introduzca el sueldo base de un vendedor:   ");
	scanf("%f",&sueldoBase);
	while (contador != -1){
		printf("\nCalculando sueldo del vendedor %d",contador+1);
		pagoVendedor(sueldoBase);
		contador++; 
    printf("\nSi desea calcular otro numero presione cualquier tecla \n");
	printf("Si desea dejar de calcular sueldos presione 1");
	
    scanf("%d",&centinela);  if (centinela==1)contador=-1;
	
	}
	
}
