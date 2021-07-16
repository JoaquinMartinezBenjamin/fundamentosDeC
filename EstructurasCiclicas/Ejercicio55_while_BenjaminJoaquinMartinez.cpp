/*
Alumno: Benjamín Joaquín Martínez
Ejercicio 55- while
Leer 10 números y obtener su cubo y su cuarta.
*/


#include<stdio.h>
#include<conio.h>

main () {
	
int num,contador,contadorTercera,contadorCuarta,acumulador;
num=contador=contadorTercera=contadorCuarta=acumulador=0;

while (contador <10 ){
contadorTercera=0;
contadorCuarta=0;
printf("Introduzca un numero:");
scanf("%d",&num);
acumulador=num;

while(contadorTercera<2){
	acumulador = num * acumulador;
	contadorTercera++;
	}
	
	printf("Tercera de %d es : %d \t",num,acumulador);
    acumulador= num;
    
while(contadorCuarta<3){
	acumulador = num * acumulador;
	contadorCuarta++;
	}
	
printf("Cuarta de %d es : %d \n",num,acumulador);
contador++;

}

}
