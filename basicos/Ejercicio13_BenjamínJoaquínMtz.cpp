/*
Materia: Fundamentos de programación
Alumno: Benjamín Joaquín Martínez 
Ejercicio 13:
 El dueño de una tienda compra un articulo a un precio determinado.
  Obtener el precio en que lo debe vender para obtener una ganancia del 30%. 
*/
#include <stdio.h>
#include <conio.h>
main()
{       
    #define p printf
    
    float articulo,precioVenta;


	p("Introduzca el precio del articulo comprado : \n");
	scanf("%g",&articulo);
	
precioVenta = articulo + (articulo * 0.30);

	p("\nEl precio al que debe vender el articulo para obtener 30 por ciento de ganancia es \n %.2f", precioVenta);

}
