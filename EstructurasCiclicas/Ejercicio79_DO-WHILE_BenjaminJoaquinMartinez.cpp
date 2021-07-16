/*
Alumno: Benjamin Joaquin Martinez
Ejercicio 79
 En una tienda de descuento las personas que van a pagar el importe de su compra 
llegan a la caja y sacan una bolita de color, que les dirá que descuento tendrán
 sobre el total de su compra. 
 Determinar la cantidad que pagara cada cliente desde que la tienda abre hasta que cierra.
 Se sabe que si el color de la bolita es roja el cliente obtendrá un 40% de descuento;
  si es amarilla un 25% y si es blanca no obtendrá descuento. 
  */
  
#include<stdio.h>
#include<conio.h>
#include <time.h>
#include<iostream>
#include<stdlib.h>

main () {
	float importeCompra;
	float descuento;
	int num;
    char centinela='1';

do{
srand(time(NULL));
//variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
 num = 1 + rand() % (4 - 1);
 
 printf("\nIntroduzca el importe de la compra del cliente:   ");
 scanf("%f",&importeCompra);
 if(num==1){importeCompra= importeCompra - (importeCompra * 0.40);
            printf("\nEste cliente pagara %.2f por sacar esfera roja",importeCompra);}
            
 if(num==2){importeCompra= importeCompra - (importeCompra * 0.25);
            printf("\nEste cliente pagara %.2f por sacar esfera amarilla",importeCompra);}
            
 if(num==3){printf("\nEste cliente pagara %.2f por sacar esfera blanca",importeCompra);}
            
      
		printf("\nPara continuar con otro cliente presione la tecla 1");
		printf("\nPara salir presione cualquier tecla\n");
		printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        centinela = getch();
        
}while(centinela=='1');
}

