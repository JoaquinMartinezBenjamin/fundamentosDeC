/*Determinar la cantidad de dinero que recibirá un trabajador por concepto de las horas extras trabajadas en una empresa,
 sabiendo que cuando las horas de trabajo exceden de 40, 
 el resto se consideran horas extras y que estas se pagan al doble de una hora normal cuando no exceden de 8;
 si las horas extras exceden de 8 se pagan las primeras 8 al doble de lo que se pagan las horas normales y el resto al triple.
  */
  
  

#include<stdio.h>
#include<string.h>
#include<conio.h>


float pagoEmpleado(float pagoHora){
int horasTrabajo;
int horasExtra;
float pagoTrabajador;
	
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


return pagoTrabajador;
}

main () {
	char centinela='0';
float pagoHora;

printf("Introduzca la cantidad de dinero por hora de trabajo\n");
scanf("%f",&pagoHora);


while(centinela!='1'){
printf ("\nSe le debe pagar al empleado %.2f",pagoEmpleado(pagoHora));
printf ("\nSi desea calcular el sueldo de otro empleado presione cualquier tecla");
printf ("\nSi desea terminar la ejecucion del programa digite '1':      ");
scanf("%s",&centinela);

}


}
