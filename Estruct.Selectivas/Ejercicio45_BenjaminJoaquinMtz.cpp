/* Alumno: Benjamín Joaquín Martínez
Ejercicio 45 
En una fabrica de computadoras se planea ofrecer a los clientes un descuento 
que dependerá del numero de computadoras que compre. 
Si las computadoras son menos de cinco se les dará un 10% de descuento sobre el total de la compra;
 si el numero de computadoras es mayor o igual a cinco pero menos de diez se le otorga un 20% de descuento; 
 y si son 10 o mas se les da un 40% de descuento. El precio de cada computadora es de $11,000 
 
 */
 
#include<stdio.h>
#include<conio.h>

main () {

int numeroComputadoras;
float totalCompra;
float descuento;

printf("Introduzca el numero de computadoras compradas\n");
scanf("%d",&numeroComputadoras);

totalCompra= ((float) numeroComputadoras) * 11000;

              if(numeroComputadoras<5)    {descuento = totalCompra * .10;} else {
                if (numeroComputadoras<10){descuento = totalCompra * .20;}
				                          else 
				                          {descuento = totalCompra * .40;}
                                                                               }
  totalCompra = totalCompra - descuento;
  
  printf("\nEl cliente debe pagar %.2f",totalCompra);
  
  
}
