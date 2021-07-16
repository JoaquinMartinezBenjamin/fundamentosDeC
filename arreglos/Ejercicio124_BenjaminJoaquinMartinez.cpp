/*Alumno: Benjamin Joaquin Martinez
Ejercicio 124
Diseñe un algoritmo que lea un numero cualquiera y lo busque en el vector X, 
el cual tiene almacenados 80 elementos. 
Escribir la posición donde se encuentra almacenado el numero en el vector
 o el mensaje "NO" si no lo encuentra. Búsqueda secuencial. 
 
 */
 
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <time.h>
main(){
	int vector[80];
    int numero;
    int posicion=-1;
    
    srand(time(NULL));
    //variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    printf("\t");
    for(int x=0;x<80; x++) vector[x]=  1 + rand() % (101 - 1);
    for(int x=0;x<80; x++) printf("%d[%d]\t",x,vector[x]);
    
    printf("\n\n Introduzca el numero a buscar:  ");
    scanf("%d",&numero);
     for(int x=0;x<80; x++) {if(numero==vector[x]) posicion=x;}
     
     if(posicion>=0) printf("\nEl numero esta en la posicion %d del arreglo",posicion); else
                    printf("\nNO");    
	}
    
	
