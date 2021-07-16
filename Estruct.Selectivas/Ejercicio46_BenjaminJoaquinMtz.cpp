
/* Alumno: Benjamín Joaquín Martínez
Ejercicio 46
 En una llantera se ha establecido una promoción de las llantas marca "Ponchadas",
 dicha promoción consiste en lo siguiente: 
 
 Si se compran menos de cinco llantas el precio es de $300 cada una, 
 de $250 si se compran de cinco a 10 y de $200 si se compran mas de 10.
Obtener la cantidad de dinero que una persona tiene que pagar por cada una de las llantas que compra 
y la que tiene que pagar por el total de la compra. 
*/


#include<stdio.h>
#include<conio.h>

main () {

int numeroLlantas;
float totalCompra;
float precioLlanta;

printf("Introduzca el numero de llantas compradas\n");
scanf("%d",&numeroLlantas);



              if(numeroLlantas<5)    {totalCompra= (float)numeroLlantas * 300; precioLlanta=300;} else {
                if (numeroLlantas<=10){totalCompra= (float)numeroLlantas * 250; precioLlanta=250;}
				                          else 
				                          {totalCompra= (float)numeroLlantas * 200; precioLlanta=200;}
                                                                               }

  
  printf("\nEl cliente debe pagar %.2f por %d llantas a %.2f cada una",totalCompra,numeroLlantas,precioLlanta);
  
  
}
