
/* Alumno: Benjamin Joaquin Martinez 
Ejercicio110.- 
Un grupo de 100 estudiantes presentan un exámen de Física. 
Diseñe un diagrama que lea por cada estudiante la calificación obtenida y calcule e imprima:
A.- La cantidad de estudiantes que obtuvieron una calificación menor a 50.
B.- La cantidad de estudiantes que obtuvieron una calificación  de 50 o más pero menor que 80.
C.- La cantidad de estudiantes que obtuvieron una calificación de 70 o más pero menor que 80.
D. La cantidad de estudiantes que obtuvieron una calificación de 80 o más.
*/


#include<stdio.h>
#include<conio.h>


main () {
	int contador;
	int calificacion;
	int menor50;
	int entre50y80;
	int entre70y80;
	int mayor80;
	
menor50=entre50y80=entre70y80=mayor80=0;
	
for(contador=0; contador<100; contador++){
   printf("Introduzca la calificacion del alumno %d\n",contador+1);
   scanf("%d",&calificacion); 
    if(calificacion<50)                       menor50++;
    if(calificacion>=50&&calificacion<80) entre50y80++; //aqui el enunciado decia 80, me parece que es 70, pero el cliente manda.
    if(calificacion>=70&&calificacion<80) entre70y80++;
    if(calificacion>=80)                       mayor80++;
}	

  printf("\nestudiantes que obtuvieron una calificacion menor a 50:\t %d",menor50);
  printf("\nestudiantes que obtuvieron una calificacion  de 50 o mas pero menor que 80:\t %d",entre50y80);
  printf("\nestudiantes que obtuvieron una calificacion de 70 o mas pero menor que 80:\t %d",entre70y80);
  printf("\nestudiantes que obtuvieron una calificacion de 80 o mas:\t %d",mayor80);
  
}
