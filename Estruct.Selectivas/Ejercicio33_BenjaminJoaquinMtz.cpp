/* Alumno: Benjamín Joaquín Martinez
Ejercicio 33
Una empresa de bienes raíces ofrece casas de interés social, bajo las siguientes condiciones: 
Si los ingresos del comprador son menores de $8000 o mas el enganche será del 15% del costo de la casa
 y el resto se distribuirá en pagos mensuales, a pagar en diez años.
 
  Si los ingresos del comprador son menos(corregi aquí y puse mayor) de $8000 o mas el enganche será del 30% del costo de la casa 
  y el resto se distribuirá en pagos mensuales a pagar en 7 años.
La empresa quiere obtener cuanto debe pagar un comprador por concepto de enganche y cuanto por cada pago parcial. 


*/

#include<stdio.h>
#include<conio.h>

main () {

float ingresosComprador;
float enganche;
float mensualidad;
float precioCasa;

printf("Introduzca los ingresos del comprador\n");
scanf("%f",&ingresosComprador);
printf("\nIntroduzca el precio de la casa\n");
scanf("%f",&precioCasa);
if (ingresosComprador<8000){
                            enganche = precioCasa * 0.15;
                            mensualidad = (precioCasa - enganche) / (10 * 12);
                           }
                           else
                           {
                           	enganche = precioCasa * 0.30;
                            mensualidad = (precioCasa - enganche) / (7 * 12);
						   }
						   
						   
					printf("\n El comprador debe pagar %.2f de enganche y un mensualidad de %.2f ",enganche,mensualidad);	   
						   
}








