/*Leer 10 numeros y obtener su cubo y su cuarta*/

#include<stdio.h>

void getCubo (int n){
	int cubo= n*n*n;
	

	    printf("\t cubo= %d",cubo);
	    	printf("\n");
}

void getCuarta (int n){
	int cuarta= n*n*n*n;
	

	    printf("\t cuarta= %d",cuarta);
	    	printf("\n");
}


void getCuarta(){
	
}


main (){
	
	int contador=0; 
	int numero=0;
	while (contador<10){
		printf("Introduzca un numero:  "); 
		scanf("%d",&numero);
		getCubo(numero);
		getCuarta(numero);
		contador++;
	    
	}
	
	
}
