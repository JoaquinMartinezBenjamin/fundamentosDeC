/* Alumno: Benjamin Joaquin Martinez
126) Diseñe un algoritmo que almacene en un vector llamado FIB[100] 
los 100 primeros números de la serie fibonacci. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main(){
	float FIB[100];
	float fib1=0;
	float fib2=1;
	float fibo;
	int x;
	FIB[0]=1;
	for(x=1; x<100; x++){
	fibo = fib1 + fib2;
	FIB[x]=fibo;
	
	fib1=fib2;
	fib2=fibo;
                        }
                        
    printf("\nFIBONACCI\n");
    for(x=0;x<100; x++) printf("%d[%.0f]\n",x,FIB[x]);
	
	
	
} 
