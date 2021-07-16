/*
Alumno: Benjamín Joaquín Mtz
Ejercicio 52
Una institución educativa estableció un programa para estimular a los alumnos con buen rendimiento académico y que consiste en lo siguiente:
Si el promedio es de 9.5 o mas y el alumno es de preparatoria, entonces este podrá cursar 55 unidades y se le hará un 25% de descuento.
Si el promedio es mayor o igual a 9 pero menor que 9.5 y el alumno es de preparatoria, entonces este podrá cursar 50 unidades y se le hará un 10% de descuento.
Si el promedio es mayor que 7 y menor que 9 y el alumno es de preparatoria, este podrá cursar 50 unidades y no tendrá ningún descuento.
Si el promedio es de 7 o menor, el numero de materias reprobadas es de 0 a 3 y el alumno es de preparatoria, entonces podrá cursar 45 unidades y no tendrá descuento.
Si el promedio es de 7 o menor, el numero de materias reprobadas es de 4 o mas y el alumno es de preparatoria, entonces podrá cursar 40 unidades y no tendrá ningún descuento.
Si el promedio es mayor o igual a 9.5 y el alumno es de profesional, entonces podrá cursar 55 unidades y se le hará un 20% de descuento.
Si el promedio es menor de 9.5 y el alumno es de profesional, entonces podrá cursar 55 unidades y no tendrá descuento. 
Obtener el total que tendrá que pagar un alumno si la colegiatura para alumnos de profesional es de $300 por cada cinco unidades y para alumnos de preparatoria es de $180 por cada cinco unidades. 
*/

#include<stdio.h>
#include<conio.h>

main () {
float promedio;
int unidades;
float colegiatura;
float descuento;
char tipoAlumno;
int materiasReprobadas;

printf("Si el alumno es de nivel profesional presione la tecla 'p' si es de preparatoria presione cualquier tecla\n");
scanf("%c",&tipoAlumno);
printf("Introduzca el promedio del alumno\n");
scanf("%f",&promedio);



if(tipoAlumno=='p'){
             	if(promedio>=9.5){
				                  unidades=55;
				                  colegiatura = (float) (unidades/5) * 300; 
				                  descuento = (float)((unidades/5) * 300) * .20;
				                  colegiatura = colegiatura - descuento;
                                   }
                                   else
                                   {
                                   	unidades=55;
				                    colegiatura = (float) (unidades/5) * 300;
								   }
			       }else
			       {
			       	printf("\nIntroduzca el numero de materias reprobadas, presione 0 si no existen\n");
			       	scanf("%d",&materiasReprobadas);
			    if(promedio>=9.5){
			    	              unidades=55;
				                  colegiatura = (float) (unidades/5) * 180; 
				                  descuento = (float)((unidades/5) * 180) * .25;
				                  colegiatura = colegiatura - descuento;
				                 }
				                 
				if(promedio>=9&&promedio<9.5){
			    	              unidades=50;
				                  colegiatura = (float) (unidades/5) * 180; 
				                  descuento = (float)((unidades/5) * 180) * .10;
				                  colegiatura = colegiatura - descuento;
				                 }
				                 
				if(promedio>7&&promedio<9){
			    	              unidades=50;
				                  colegiatura = (float) (unidades/5) * 180; 
				                 }
				                 
				if(promedio<7&&materiasReprobadas<4){
			    	              unidades=45;
				                  colegiatura = (float) (unidades/5) * 180; 
				                 }
				                 
				if(promedio<7&&materiasReprobadas>=4){
			    	              unidades=40;
				                  colegiatura = (float) (unidades/5) * 180; 
				                 }
			       	
			       	
				   }

printf("La colegiatura a pagar es %.2f",colegiatura);

}
