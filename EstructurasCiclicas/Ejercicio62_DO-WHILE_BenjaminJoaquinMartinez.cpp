/* Alumno: Benjamín Joaquín Martínez
Ejercicio 62 Una persona debe realizar un muestreo con 50 personas para determinar el promedio 
de peso de los niños, jóvenes, adultos y viejos que existen en su zona habitacional.
 Se determinan las categorías con base en la sig, tabla:
		CATEGORIA			EDAD
		Niños				0 - 12
		Jóvenes				13 - 29
		Adultos				30 - 59
		Viejos				60 en adelante
*/


#include<stdio.h>
#include<conio.h>

main () {
	int edad;
	int peso;
	
	int contador;
	
	int ninios;
	int jovenes;
	int adultos;
	int viejos; 
	
	int sumNinios;
	int sumJovenes;
	int sumAdultos; 
	int sumViejos;  
	
	
	float   promedioN;
	float   promedioJ;
	float   promedioA;
	float   promedioV;
	   	
edad=peso=ninios=jovenes=adultos=viejos=sumNinios=sumJovenes=sumAdultos=sumViejos=contador=0;
	 do  {
	 printf ("Introduzca la edad de la persona %d :    ", contador+1);
	 scanf("%i",&edad);
     printf ("\nIntroduzca el peso de la persona %d :    ", contador+1);
	 scanf("%i",&peso);
	 printf ("\n :::::::::::::::::::::::::::::\n ");
	 
	 if(edad<=12)           {ninios++;     sumNinios+=peso;}else
	 if(edad>12&&edad<=29)  {jovenes++;   sumJovenes+=peso;}else
	 if(edad>29&&edad<=59)  {adultos++;   sumAdultos+=peso;}else
   	 if(edad>59)            {viejos++;    sumViejos+=peso;}
	 
	 contador++;
	 
         } while (contador<40); 
	 
	     promedioN= (float)sumNinios/(float)ninios;
	     if(promedioN>0)  printf ("\nPESO PROMEDIO NINIOS   %.2f",promedioN);
       	 promedioJ= (float)sumJovenes/(float)jovenes;
       	 if(promedioJ>0)  printf ("\nPESO PROMEDIO JOVENES    %.2f ",promedioJ);
	     promedioA= (float)sumAdultos/(float)adultos;
	     if(promedioA>0)   printf ("\nPESO PROMEDIO ADULTOS    %.2f",promedioA);
	     promedioV= (float)sumViejos/(float)viejos;
	     if(promedioV>0)   printf ("\nPESO PROMEDIO VIEJOS    %.2f",promedioV);
	   

	 

	  
	 }




