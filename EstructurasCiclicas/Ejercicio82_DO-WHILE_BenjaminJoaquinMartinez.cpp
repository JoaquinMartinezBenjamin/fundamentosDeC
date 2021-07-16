/*Alumno: Benjamín Joaquín Martínez 
Ejercicio82 
La presión, volumen y temperatura de una masa de aire se relacionan por la formula:

		masa=	      presión * volumen      .
			0.37 * (temperatura + 460)
Calcular el promedio de masa de aire de los neumáticos de n vehículos 
que están en compostura en un servicio de alineación y balanceo.
 Los vehículos pueden ser motocicletas o automóviles. 
 
 */
 
#include<stdio.h>
#include<conio.h>
#include <time.h>
#include<iostream>
#include<stdlib.h>

main () {
int num;

float masa; 
float presion; 
float volumen; 
float temperatura;
char selector;

int contadorMotos=0;
int contadorAutos=0;
float acumuladorMasaM=0;
float acumuladorMasaA=0;
char centinela = 's';




do{

	printf("\nSi el vehiculo es una motocicleta presione 1");
	printf("\nSi el vehiculo es un automovil presione cualquier tecla \n");
	
        selector = getch();

if (selector == '1'){

printf("Introduzca la presion del nehumatico\n");
scanf("%f",&presion);
printf("Introduzca el volumen del neumatico\n");
scanf("%f",&volumen);
printf("Introduzca la temperatura del neumatico\n");
scanf("%f",&temperatura);

masa= (presion * volumen)/ (0.37 * (temperatura + 460));
acumuladorMasaM+=masa;
contadorMotos++;
printf("\nLa masa del aire es %.2f", masa);
	}
	else{
printf("Introduzca la presion del nehumatico\n");
scanf("%f",&presion);
printf("Introduzca el volumen del neumatico\n");
scanf("%f",&volumen);
printf("Introduzca la temperatura del neumatico\n");
scanf("%f",&temperatura);

masa= (presion * volumen)/ (0.37 * (temperatura + 460));
acumuladorMasaA+=masa;
contadorAutos++;
printf("\nLa masa del aire es %.2f ", masa);
		}
		


	printf("\nSi desea calcular la masa de otro vehiculo presione la tecla s");
	printf("\nPara dejar de calcular la masa presione cualquier tecla\n");
	
        centinela = getch();

}while(centinela== 's');

    printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("\nEl promedio de masa de aire de las llantas de motos es %.2f", acumuladorMasaM / contadorMotos);
    printf("\nEl promedio de masa de aire de las llantas de autos es %.2f", acumuladorMasaA / contadorAutos);

}

