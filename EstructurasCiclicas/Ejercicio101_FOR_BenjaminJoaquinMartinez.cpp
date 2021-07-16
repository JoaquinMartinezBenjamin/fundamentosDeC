/*Alumno: Benjamin Joaquin Martinez
Ejercicio 101.
- Se tiene un conjunto de 1,000 tarjetas cada una contiene la información del censo para una persona:
1.- Número de censo,
2.- Sexo
3.- Edad
4.- Estado civil (a.- soltero, b. Casado, c. Viudo, d. Divorciado )
Diseñe un pseudocódigo estructurado que lea todos estos datos, 
e imprima el número de censo de todas las jóvenes solteras que estén entre 16 y 21 años. 
*/

#include<stdio.h>
#include<conio.h>


main () {
	int numeroCenso;
	char sexo;
	int edad; 
	char estadoCivil; 
	int contador;
	int contadorjs1621=0;
	
	 for (contador=0; contador<10; contador++){    //Reduje a 10 para más rapidez
	 	numeroCenso=contador+1;
	 	printf("::::::::::::::::::: PERSONA %d::::::::::::::::::::\n",contador + 1);
	 	printf("Introduzca m si la persona es de sexo femenino\n");
	    printf("Introduzca h si la persona es de sexo masculino\n");
        sexo = getch();
     
	    printf("Introduzca la edad de la persona\n");
	    scanf("%d",&edad);
	    
	   printf("Introduzca el estado civil de la persona\n");
	    printf("a.- soltero, b. Casado, c. Viudo, d. Divorciado \n");
       estadoCivil = getch();
	 
	 //la consulta es:número de censo de todas las jóvenes solteras que estén entre 16 y 21 años
	 if(sexo=='m'&&(edad>=16&&edad<=21)&&estadoCivil=='a') {
	 printf("\n___________________________________________\n");
	 printf("\n>>>>>Numero de censo de la consulta: %d\n",numeroCenso);
	 printf("\n___________________________________________\n");
                     contadorjs1621++;                             }
	 
	 }
	 
	 printf("\n____________\nEn total %d personas son jovenes solteras entre 16 y 21 anios",contadorjs1621);


}
