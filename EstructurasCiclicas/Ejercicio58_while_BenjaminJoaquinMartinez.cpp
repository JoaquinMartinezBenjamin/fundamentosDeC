/* Alumno: Benjamín Joaquín Martínez
Ejercicio 58 :
Leer 15 números negativos y convertirlos a positivos e imprimir dichos números
*/

#include<stdio.h>
#include<conio.h>

main () {
	
	int num;
	int cont;
	
	num=cont=0;
	
	while (cont<15){
	printf("\nIntroduzca un numero negativo: ");
 	scanf("%d",&num);
 	num=num*(-1);
    printf("\t\t\t\t  | %d",num);
		cont++;
	}

}
