/* Alumno: Benjamín Joaquín Martínez
Ejercicio 53
Que lea tres números diferentes y determine el numero medio del conjunto de los tres números 
(el numero medio es aquel numero que no es ni mayor, ni menor). 
*/


#include<stdio.h>
#include<conio.h>

main () {

int num1,num2,num3;
int mayor,menor,medio;

printf("Introduzca un primer numero\n");
scanf("%d",&num1);
printf("Introduzca un segundo numero\n");
scanf("%d",&num2);
printf("Introduzca un tercer numero\n");
scanf("%d",&num3);

 
 if((num1>num2 && num1<num3)||(num1>num3 && num1<num2))
                             printf("\nEl numero medio es %d",num1);
                            else
 if((num2>num1 && num2<num3)||(num2>num3 && num2<num1))
                             printf("\nEl numero medio es %d",num2);
                            else
                             printf("\nEl numero medio es %d",num3);

}
