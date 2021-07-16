/*
Alumno: Benjamín Joaquín Martínez
Ejercicio 30) Calcular el numero de pulsaciones que debe tener una persona por cada 10 segundos de ejercicio aerobico;
 la formula que se aplica cuando el sexo es femenino es:

		num. pulsaciones = (220 - edad)/10
y si el sexo es masculino:
		num. pulsaciones = (210 - edad)/10


*/


#include<stdio.h>
#include<conio.h>

main () {
int pulsaciones;
int edad;
char sexo;


printf ("\nSi la persona es hombre presione h, si es mujer presione m\n");
scanf("%c",&sexo);
printf ("\n______________________________________________________\n");

printf ("Introduzca la edad de la persona\n");
scanf("%d",&edad);
printf ("\n______________________________________________________\n");


if(sexo=='h') {pulsaciones = (210 - edad )/10;}
if(sexo=='m') {pulsaciones = (220 - edad )/10;}

printf("\nEl numero de pulsaciones que debe tener esta persona es %d por cada 10 segundos", pulsaciones);
getch();

return 0;
}
