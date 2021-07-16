#include <stdio.h>
#include <conio.h>


int factorial(int num){
	int fact=1;
	int cont;
		for(cont=1;cont<=num;cont++)
	    fact=fact *cont;	
	    return fact;
                     }


main(){
	int num;
	printf("\n Numero: ");
	scanf("%d",&num);
	printf("\n El factorial de %d es %d",num,factorial(num));	
      }

