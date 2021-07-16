/*
Alumno: Benjamín Joaquín Martínez 
Ejercicio 67
Una compañía de seguros tiene contratados a n vendedores. 
Cada uno hace tres ventas a la semana.
 Su política de pagos es que un vendedor recibe un sueldo base, 
 y un 10% extra por comisiones de sus ventas. 
 El gerente de su compañía desea saber cuanto dinero obtendrá 
 en la semana cada vendedor por concepto de comisiones por las tres ventas realizadas, 
 y cuanto tomando en cuenta su sueldo base y sus comisiones. 
 */
 
 
#include<stdio.h>
#include<conio.h>

main () {
	
	float sueldoBase;
	float comision; 
	float totalVenta;
	int ventas;
    char centinela;
	float sueldoTotal;

	centinela= '1';
	sueldoBase=0;
	
    printf("Introduzca el sueldo base de los empleados\n");
	scanf("%f",&sueldoBase);
	
while (centinela=='1'){
	
	sueldoTotal=sueldoBase;
	ventas=0;
 	printf("\n:::::::::::NUEVO EMPLEADO::::::::::::::::::\n");
	while (ventas<3){
		printf("Introduzca el total de la venta %d del empleado\n",ventas+1);
		scanf("%f",&totalVenta);
		comision= totalVenta * 0.10;
		sueldoTotal+= comision;
		printf("Subtotal %f \n",sueldoTotal);
		ventas++;
                	}
	
	printf("El empleado gano %.2f de comision \n",(sueldoTotal - sueldoBase));
	printf("\nEl empleado gano %.2f como sueldo total \n",sueldoTotal);
	
		printf("\n\nPara calcular el sueldo de otro empleado presione 1");
		printf("\nPara salir presione cualquier tecla\n");
     
        //scanf("%c",&centinela);
        centinela = getch();
        
}


}
