/*
Alumno: Benjamín Joaquín Martínez
Hacer un algoritmo que imprima el nombre de un articulo, clave, precio original y su precio con descuento.
 El descuento lo hace en base a la clave, si la clave es 01
 el descuento es del 10% y si la clave es 02 
 el descuento en del 20% (solo existen dos claves).

*/

#include<stdio.h>
#include<conio.h>

main () {

char articulo;
int clave;
float precioOriginal, precioDescuento; 


printf ("Introduzca el articulo comprado\n c = camisa \t p = pantalon \t f = falda \t s= sombrero\n");
printf("\n*****************************************************\n");
scanf("%c",&articulo);
printf("\n*****************************************************\n");

printf(" Introduzca la clave del articulo  01/02\n");
printf("\n*****************************************************\n");
scanf("%d",&clave);
printf("\n*****************************************************\n");



printf(" Introduzca el precio del articulo  \n");
printf("\n*****************************************************\n");
scanf("%f",&precioOriginal);
printf("\n*****************************************************\n");


if((articulo == 'c' || articulo == 'p' || articulo == 'f' || articulo == 's')&& (clave == 1 || clave == 2)){
            	
            	if (clave==1){precioDescuento = precioOriginal - (precioOriginal * .10) ;}
            	if (clave==2){precioDescuento = precioOriginal - (precioOriginal * .20) ; }
		
if(articulo == 'c') {
                    printf ("\nEl articulo comprado fue una camisa\n");
                    printf ("La clave es 0%d\n",clave);
					printf ("Su precio original es %.2f\n",precioOriginal);
				    printf ("Su precio con descuento es %.2f",precioDescuento); 
			    	}
	else
						  
						  
        if(articulo == 'p') {
                     printf ("\nEl articulo comprado fue un pantalon\n");
                     printf ("La clave es 0%d\n",clave);
				   	 printf ("Su precio original es %.2f\n",precioOriginal);
				     printf ("Su precio con descuento es %.2f",precioDescuento); 
			    	        }
		       
		    else
		    
		    
                 if(articulo == 'f'){
                        printf ("\nEl articulo comprado fue una falda\n");
                        printf ("La clave es 0%d\n",clave);
				    	printf ("Su precio original es %.2f\n",precioOriginal);
				         printf ("Su precio con descuento es %.2f",precioDescuento); 
			                    	}
				 
				 
				 
				         else
				         
				         
                              if(articulo == 's') {
                                 printf ("\nEl articulo comprado fue un sombrero\n");
                                 printf ("La clave es 0%d\n",clave);
				               	 printf ("Su precio original es %.2f\n",precioOriginal);
				                 printf ("Su precio con descuento es %.2f",precioDescuento); 
			                                   	}
			                                   	
			                                   	
    } else { printf(" El articulo introducido o la clave no existe");  }

  
	   


return 0; 


}

