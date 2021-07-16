
/*Alumno: Benjamín Joaquín Martínez
Ejercicio 57
 Leer 20 números e imprimir cuantos son positivos, cuantos negativos y cuantos neutros.
*/

#include<stdio.h>
#include<conio.h>

main () {

int num,positivos,negativos,neutros,contador;
num=positivos=negativos=neutros=contador=0; 

 while (contador<20){
 	printf("\nIntroduzca un numero:\n");
 	scanf("%d",&num);
 	if(num>0)  positivos++;
 	if(num<0)  negativos++;
 	if(num==0)   neutros++;
            	contador++;
 	                }

 printf("\n Positivos %d \n Negativos %d \n Neutros %d \n",positivos,negativos,neutros);

}
