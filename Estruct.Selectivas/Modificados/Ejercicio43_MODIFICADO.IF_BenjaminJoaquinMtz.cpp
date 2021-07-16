/* Alumno: Benjamín Joaquín Martínez
Ejercicio 43 MODIFICADO PARA IF
En una tienda de descuento se efectúa una promoción en la cual se hace un descuento 
sobre el valor de la compra total según el color de la bolita que el cliente saque al pagar en caja.
 Si la bolita es de color blanco no se le hará descuento alguno, si es verde se le hará un 10% de descuento,
  si es amarilla un 25%, si es azul un 50% y si es roja un 100%. 
  Determinar la cantidad final que el cliente deberá pagar por su compra. 
  se sabe que solo hay bolitas de los colores mencionados.
  */


#include<stdio.h>
#include<conio.h>

main(){
	int color;
	float compra,descuento, total ; 
	 printf ("Total compra = ");
	 scanf  ("%f",&compra);
	 printf ("\n 1.Blanco \n 2. Verde \n 3. Amarillo \n 4. Azul \n 5. Rojo \n Opcion: ");
	 scanf  ("%d",&color);
	 /*
	 switch (color){
	 	
	 	case 1: descuento = 0;             break;
	 	case 2: descuento = compra * 0.10; break;
	 	case 3: descuento = compra * 0.25; break;
	 	case 4: descuento = compra * 0.50; break;	 	
	 	case 5: descuento = compra;        break;
	 	default: printf ("Opcion incorrecta");
		 	 }
	*/
		if(color==1 || color==2 || color==3 || color==4 || color==5){
			
	if(color==1) descuento = 0;             
	if(color==2) descuento = compra * 0.10; 
	if(color==3) descuento = compra * 0.25; 
	if(color==4) descuento = compra * 0.50; 	 	
    if(color==5) descuento = compra;       
		          	 	 
		 	 total = compra - descuento;
		 	 printf ("descuento = %f",descuento);
		 	 printf ("\n Total con descuento = %f", total);
		 }else
		     printf ("Opcion incorrecta"); 
}
