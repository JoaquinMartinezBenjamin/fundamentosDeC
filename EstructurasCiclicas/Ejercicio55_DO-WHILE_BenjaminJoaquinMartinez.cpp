/*
Alumno: Benjamín Joaquín Martínez
Ejercicio 55- do while
Leer 10 números y obtener su cubo y su cuarta.
*/


#include<stdio.h>
#include<conio.h>

main () {
	
int num,contador,contadorTercera,contadorCuarta,acumulador;
num=contador=contadorTercera=contadorCuarta=acumulador=0;

do{
contadorTercera=0;
contadorCuarta=0;
printf("Introduzca un numero:");
scanf("%d",&num);
acumulador=num;

do{
	acumulador = num * acumulador;
	contadorTercera++;
	}while(contadorTercera<2);
	
	printf("Cubo de %d es : %d \t",num,acumulador);
    acumulador= num;
    
do{
	acumulador = num * acumulador;
	contadorCuarta++;
	}while(contadorCuarta<3);
	
	
	
printf("Cuarta de %d es : %d \n",num,acumulador);
contador++;

}while (contador <10 );

}
