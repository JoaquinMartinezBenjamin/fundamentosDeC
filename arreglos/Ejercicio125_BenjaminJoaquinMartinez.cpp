/* Alumno: Benjamin Joaquin Martinez
Ejercicio 125
Diseñe un algoritmo que lea dos vectores A y B de 20 elementos cada uno
 y multiplique el primer elemento de A con el último elemento de B
  y luego el segundo elemento de A por el diecinueveavo elemento de B
   y así sucesivamente hasta llegar al veinteavo elemento de A por el primer elemento de B.
    El resultado de la multiplicación almacenarlo en un vector C. 
    */
    
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <time.h>
main(){
	int A[20];
    int B[20];
    int C[20];
    int x,y;
    
    srand(time(NULL));
    //variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    
    for(x=0;x<20; x++) A[x] =  1 + rand() % (11 - 1);
    for(x=0;x<20; x++) B[x] =  1 + rand() % (11 - 1);
    printf("Vector A\n");
    for(x=0;x<20; x++) printf("%d[%d]\t",x,A[x]);
    printf("\nVector B\n");
    for(x=0;x<20; x++) printf("%d[%d]\t",x,B[x]);
    
    x=19;
    y=0;
    
    while(y<20){
    	C[y]= A[y] * B[x];
    	y++;
    	x--;	
	          }
	         
	         
	printf("\nVector C\n");
	y=19;
    for(x=0;x<20; x++){ printf("A%d[%d] * B%d[%d] = C%d[%d] \n",x,A[x] ,y,B[y] ,x,C[x]); y--;}
    
}
