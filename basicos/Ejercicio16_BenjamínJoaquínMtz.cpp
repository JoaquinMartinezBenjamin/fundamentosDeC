/*
Materia: Fundamentos de programación
Alumno: Benjamín Joaquín Martínez 

Ejercicio 16:

 Un alumno desea saber cual será su promedio general en las tres materias mas difíciles
  que cursa y cual será el promedio que obtendrá en cada una de ellas.
  Estas materias se evalúan como se muestra a continuación: 

La calificación de Matemáticas se obtiene de la sig. manera:
	Examen 90%
	Promedio de tareas 10%
	En esta materia se pidió un total de tres tareas.
La calificación de Física se obtiene de la sig. manera:
	Examen 80%
	Promedio de tareas 20%
	En esta materia se pidió un total de dos tareas.
	
La calificación de Química se obtiene de la sig. manera:
	Examen 85%
	Promedio de tareas 15%
	En esta materia se pidió un promedio de tres tareas.

*/
#include <stdio.h>
#include <conio.h>
main()
{       
   

    float examenMate, examenFisica, examenQuimica;
    float tareasMate, tareasFisica, tareasQuimica;
    float calificacionMate, calificacionFisica, calificacionQuimica;
    float sumador;
        
	printf("Introduzca la calificacion obtenida en el examen de Matematicas\n");
	scanf("%g",&examenMate);
		examenMate= examenMate * 0.9;

			printf("Introduzca la calificacion de la primer tarea de matematicas\n");
			 
			 scanf("%g",&tareasMate);
			 sumador+=tareasMate;
			 
			printf("Introduzca la calificacion de la segunda tarea de matematicas\n");
		    
			scanf("%g",&tareasMate);
		    sumador+=tareasMate;
			
	     	printf("Introduzca la calificacion de la tercer tarea de matematicas\n");
	     	
		    scanf("%g",&tareasMate);
		    sumador+=tareasMate;
		    
			tareasMate = sumador/3;
			sumador=0;
		
			tareasMate= tareasMate * 0.1;
			
			calificacionMate= tareasMate + examenMate;
		
			printf("\n***************************************\n");
				printf("Introduzca la calificacion obtenida en el examen de Fisica\n");
	            scanf("%g",&examenFisica);
	            examenFisica= examenFisica * 0.8;
	
			printf("Introduzca la calificacion de la primer tarea de fisica\n");
			 
			 scanf("%g",&tareasFisica);
			 sumador+=tareasFisica;
			 
			printf("Introduzca la calificacion de la segunda tarea de fisica\n");
		    
		    	scanf("%g",&tareasFisica);
		        sumador+=tareasFisica;
			
	     
		    
			tareasFisica = sumador/2;
			sumador=0;
			
			tareasFisica= tareasFisica * 0.2;
			
			calificacionFisica= tareasFisica + examenFisica;
			
			
					printf("\n***************************************\n");
				printf("Introduzca la calificacion obtenida en el examen de Quimica\n");
	            scanf("%g",&examenQuimica);
	            examenQuimica= examenQuimica * 0.85;
	
				printf("Introduzca la calificacion de la primer tarea de Quimica\n");
			 
			 scanf("%g",&tareasQuimica);
			 sumador+=tareasQuimica;
			 
			printf("Introduzca la calificacion de la segunda tarea de Quimica\n");
		    
			scanf("%g",&tareasQuimica);
		    sumador+=tareasQuimica;
		    
		    	printf("Introduzca la calificacion de la tercer tarea de Quimica\n");
		    
			scanf("%g",&tareasQuimica);
		    sumador+=tareasQuimica;
			
	     
		    
			tareasQuimica = sumador/3;
		
			
			tareasQuimica= tareasQuimica * 0.15;
			
			calificacionQuimica= tareasQuimica + examenQuimica;
			
				printf("\n***************************************\n");
				
	printf("\n El promedio obtenido en Matematicas es %.2f   \n",calificacionMate);
    printf("\n El promedio obtenido en Fisica es %.2f   \n",calificacionFisica);
    printf("\n El promedio obtenido en Quimica es %.2f   \n",calificacionQuimica);
    printf("\n El promedio general de las tres materias es %.2f   \n",((calificacionFisica+calificacionMate+ calificacionQuimica)/3));

		

}
