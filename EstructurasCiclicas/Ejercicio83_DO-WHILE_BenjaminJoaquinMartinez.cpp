/*Alumno : Benjamin Joaquin Martinez
Ejercicio 83
Determinar la cantidad semanal de dinero que recibirá cada uno de los n obreros de una empresa.
 Se sabe que cuando las horas que trabajo un obrero exceden de 40, 
 el resto se convierte en horas extras que se pagan al doble de una hora normal, 
 cuando no exceden de 8; cuando las horas extras exceden de 8 se pagan las primeras 8 al doble de lo que se paga por una hora normal 
 y el resto al triple. 
 */
 
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main () {


float pagoHora;
int horasTrabajo;
int horasExtra;
float pagoTrabajador;

char centinela = 's';

do{
printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::\n");
printf("Introduzca la cantidad de dinero por hora de trabajo\n");
scanf("%f",&pagoHora);
printf("\nIntroduzca las horas que el empleado trabajo\n");
scanf("%d",&horasTrabajo);


if (horasTrabajo>40){ 
horasExtra = horasTrabajo - 40;
 
 if(horasExtra > 8){
 pagoTrabajador = (40 * pagoHora) + (((float)horasExtra-8)*(pagoHora*3)) + (8 * (pagoHora * 2));
                   }
				   else 
				   {pagoTrabajador = (40 * pagoHora) + ((float)horasExtra * (2 * pagoHora));}

}else{pagoTrabajador= ((float)horasTrabajo) * pagoHora;}

printf("\nHoras Extra = %d",horasExtra);
printf ("\nSe le debe pagar al empleado %.2f",pagoTrabajador);


	printf("\nSi desea calcular el sueldo de otro empleado presione la tecla s");
	printf("\nPara dejar de calcular sueldos presione cualquier tecla\n");
	
        centinela = getch();
        
        }while(centinela== 's');

 } 
