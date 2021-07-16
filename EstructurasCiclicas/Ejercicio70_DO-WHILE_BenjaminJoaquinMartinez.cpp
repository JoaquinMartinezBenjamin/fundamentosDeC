/*Alumno: Benjamin Joaquín Martínez
Ejercicio 70
 El Depto. de Seguridad Publica y Transito del D.F. desea saber, 
 de los n autos que entran a la ciudad de México, cuantos entran con calcomanía de cada color. 
 Conociendo el ultimo dígito de la placa de cada automóvil 
 se puede determinar el color de la calcomanía utilizando la sig. relación: 
		DÍGITO		COLOR
		1 o 2			amarilla
		3 o 4			rosa
		5 o 6			roja
		7 o 8			verde
		9 o 0			azul
		
		*/
		
#include<stdio.h>
#include<conio.h>

main () {

int amarilla,rosa,roja,verde,azul,digito;
amarilla=rosa=roja=verde=azul=digito=0;
char centinela;



	
do{    printf("\n_____________________________________________________\n");
        printf("Introduzca el ultimo digito de la placa del automovil\n");
	    scanf("%d",&digito);
	    
	    
	   if(digito==1 || digito == 2)	 amarilla       ++;
	    if(digito==3 || digito == 4)	rosa        ++;
	     if(digito==5 || digito == 6)	  roja      ++;
	      if(digito==7 || digito == 8)	   verde    ++;
	       if(digito==9 || digito == 0)	     azul   ++;

	    
        printf("\nPara seguir contando presiona la tecla 1");
		printf("\nPara salir presione cualquier tecla\n");
     
       
        centinela = getch();
        
}while (centinela=='1');
printf("\n::::::::::::::::::::::::::::::::::::::::::\n");

printf("\ncalcomania amarilla\t%d\n",amarilla);
printf("\ncalcomania rosa\t%d\n",rosa);
printf("\ncalcomania roja\t%d\n",roja);
printf("\ncalcomania verde\t%d\n",verde);
printf("\ncalcomania azul\t%d\n",azul);

}
