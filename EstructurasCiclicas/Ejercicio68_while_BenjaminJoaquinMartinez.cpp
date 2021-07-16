/*Alumno: Benjamín Joaquín Martínez
Ejercicio68
En una empresa se requiere calcular el salario semanal de cada uno de los n obreros que laboran en ella.
 El salario se obtiene de la sig. forma:
 
Si el obrero trabaja 40 horas o menos se le paga $20 por hora
Si trabaja mas de 40 horas se le paga $20 por cada una de las primeras 40 horas y $25 por cada hora extra.
*/

#include<stdio.h>
#include<conio.h>

main () {

int horas;
int horasExtra;
float salario;
   char centinela;
   centinela= '1';



while (centinela=='1'){
horas=horasExtra=0;
salario=0;

printf("\n::::::::::::::::::NUEVO OBRERO::::::::::::::::::\n");
printf("Introduzca las horas trabajadas del obrero\n");
scanf("%d",&horas);

if    (horas<=40){ salario = (float)horas * 20;}  
else             {horasExtra = horas - 40;
                  salario = (40 * 20) + ((float)horasExtra * 25);
                 }

                      
 printf("\nEste obrero gano %.2f esta semana",salario);
printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::\n");
                      
       printf("\n\nPara calcular el sueldo de otro obrero presione 1");
	   printf("\nPara salir presione cualquier tecla\n");
     
        
        centinela = getch();               
    }
}
