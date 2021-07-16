/* Alumno: Benjamín Joaquín Martínez
Ejercicio39
Leer 2 números; si son iguales que los multiplique, 
si el primero es mayor que el segundo que los reste y si no que los sume.*/


#include<stdio.h>
#include<conio.h>

main () {
int num1;
int num2;
int resultado;
printf("Introduzca un numero\n");
scanf("%d",&num1);
printf("\nIntroduzca un segundo numero\n");
scanf("%d",&num2);

if(num1==num2) resultado = num1 * num2; else
   if(num1>num2) resultado = num1 - num2; else
                   resultado= num1 + num2;
                   
                   printf("\nEl resultado es %d", resultado);

}
