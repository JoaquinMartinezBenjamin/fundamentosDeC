/* Alumno: Benjamín Joaquín Mtz
Modificar el programa anterior para que además de indicar si forman o no un triángulo muestre su área y perímetro.
 */

#include<stdio.h>
#include<conio.h>
#include <math.h>
main(){
	
	
	int A,B,C,mayor,suma,perimetro;
	float s,area; 
	printf("Introduce A;");
	scanf("%d",&A);
	
    printf("Introduce B;");
	scanf("%d",&B);
	
	printf("Introduce C;");
	scanf("%d",&C);
	
	if(A>B)
	    if(A>C)
		{
		mayor=A;
		suma=B+C;
	    }
	   else
	    {
	      mayor=C;
	      suma=B+A;
	    }
    else
        if (B>C)
        {
         mayor=B;
         suma=A+C;
		}
		else
		{
		 mayor= C;
		 suma= B + A;
		}
		
		//*******************
			perimetro= A + B + C;
			s=(float)( A + B + C)/2; //semiperimetro
			area= sqrt(s*(s-(float)A) * (s-(float)B) * (s-(float)C));
			//de acuerdo a la fórmula de Herón
			
		if (suma>mayor)
		{
			printf("Forma un triangulo");
			if(A==B && B==C)
			  printf(" equilatero");
			else
			  if(A!=B && B!=C && A!=C)
			  printf(" escaleno");
			  else
			  printf(" isosceles");
		printf("\n El perimetro es : %d unidades",perimetro);
		printf("\n El area es : %.2f unidades cuadradas",area);
		}
		
		else
		    printf("no forma un triangulo");
		    

	
}
