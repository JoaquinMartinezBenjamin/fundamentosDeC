
/*Diseña un programa que devuelva la sumatoria de los primeros 20 número pares.*/

#include<stdio.h>

 int suma(){
 	int suma,contador=0;
 	int i=1;
 	
	while (contador<20){

		
		if (i%2==0){
			suma+= i;
			contador++;
	            	}
	            	i++;
		
	                        }
	return suma;
}


main(){
	
	printf("La suma de los 20 primeros numeros pares es %d",suma());
}
