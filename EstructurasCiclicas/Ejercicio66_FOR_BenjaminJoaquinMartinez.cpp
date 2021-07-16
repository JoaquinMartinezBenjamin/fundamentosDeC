
/*Alumno: BenjaminJoaquinMartinez 
Ejercicio 66)
 Un Zoólogo pretende determinar el porcentaje de animales que hay en las siguientes tres categorías de edades: 
 de 0 a 1 año, de mas de 1 año y menos de 3 y de 3 o mas años.
  El zoológico todavía no esta seguro del animal que va a estudiar. 
  Si se decide por elefantes solo tomara una muestra de 20 de ellos;
   si se decide por las jirafas, tomara 15 muestras, y si son chimpancés tomara 40. 
   
   */
    
#include<stdio.h>
#include<conio.h>

main () {
int categoria0a1=0; //0 a 1 año
int categoria1a3=0; //mas de un año y menos de 3
int categoria3an=0; //de 3 años o mas


char selector; 
int contador; 


	printf("\nPara elefantes presione 1");
	printf("\nPara jirafas presione 2");
	printf("\nPara chimpances presione 3");
	printf("\n_________________________\n");
	
       selector = getch();
       
       switch (selector){
	   
       case '1': 
       	
       	for(contador=0; contador<20; contador++){
       		printf("\nIntroduzca la edad del especimen %d", contador + 1);
       	    printf("\nDe 0 a 1 anio presione la tecla 1");
       	    printf("\nDe mas de 1 anio y menos de 3 presione la tecla 2");
       	    printf("\nDe 3 anios o mas presione la tecla 3");
       	   	printf("\n_________________________________________________\n");
       	    selector = getch();
       	    if (selector=='1') categoria0a1++;
       	    if (selector=='2') categoria1a3++;
       	    if (selector=='3') categoria3an++;
			   
		   }
       	  printf("\n Porcentaje de especimenes entre 0 y 1 anio:   %.2f por ciento", (((float)categoria0a1*100) / 20));
       	  printf("\n Porcentaje de especimenes entre 1 y 3 anios:  %.2f por ciento", (((float)categoria1a3*100) / 20));
       	  printf("\n Porcentaje de especimenes de 3 anios o mas:   %.2f por ciento", (((float)categoria3an*100) / 20));
	   
	    break;
	   
	   
	    case '2':
	     	for(contador=0; contador<15; contador++){
       		printf("\nIntroduzca la edad del especimen %d", contador + 1);
       	    printf("\nDe 0 a 1 anio presione la tecla 1");
       	    printf("\nDe mas de 1 anio y menos de 3 presione la tecla 2");
       	    printf("\nDe 3 anios o mas presione la tecla 3");
       	   	printf("\n_________________________________________________\n");
       	    selector = getch();
       	    if (selector=='1') categoria0a1++;
       	    if (selector=='2') categoria1a3++;
       	    if (selector=='3') categoria3an++;
			   
		   }
       	   printf("\n Porcentaje de especimenes entre 0 y 1 anio:   %.2f por ciento", (((float)categoria0a1*100) / 15));
       	   printf("\n Porcentaje de especimenes entre 1 y 3 anios:  %.2f por ciento", (((float)categoria1a3*100) / 15));
       	   printf("\n Porcentaje de especimenes de 3 anios o mas:   %.2f por ciento", (((float)categoria3an*100) / 15));
		   break;
	  
	   case '3':

	    	 	for(contador=0; contador<40; contador++){
       		printf("\nIntroduzca la edad del especimen %d", contador + 1);
       	    printf("\nDe 0 a 1 anio presione la tecla 1");
       	    printf("\nDe mas de 1 anio y menos de 3 presione la tecla 2");
       	    printf("\nDe 3 anios o mas presione la tecla 3");
       	   	printf("\n_________________________________________________\n");
       	    selector = getch();
       	    if (selector=='1') categoria0a1++;
       	    if (selector=='2') categoria1a3++;
       	    if (selector=='3') categoria3an++;
			   
		   }
       	  printf("\n Porcentaje de especimenes entre 0 y 1 anio:   %.2f por ciento", (((float)categoria0a1*100) / 40));
       	  printf("\n Porcentaje de especimenes entre 1 y 3 anios:  %.2f por ciento", (((float)categoria1a3*100) / 40));
       	  printf("\n Porcentaje de especimenes de 3 anios o mas:   %.2f por ciento", (((float)categoria3an*100) / 40));
	   break;
	
	default:  printf("Opcion incorrecta");
}

} 

 

