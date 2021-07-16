/*
Materia: Fundamentos de programación
Alumno: Benjamín Joaquín Martínez 
Ejercicio 15:
Tres personas deciden invertir su dinero para fundar una empresa. Cada una de ellas invierte una cantidad distinta.
 Obtener el porcentaje que cada quien invierte con respecto a la cantidad total invertida. 
*/
#include <stdio.h>
#include <conio.h>
main()
{       
   

    int inversion1, inversion2, inversion3;
    float porcentaje1, porcentaje2, porcentaje3;
    int total;
        
	printf("Introduzca la inversion de la primer persona \n");
	scanf("%i",&inversion1);
	printf("Introduzca la inversion de la segunda persona \n");
	scanf("%i",&inversion2);
	printf("Introduzca la inversion de la tercer persona \n");
	scanf("%i",&inversion3);
	
	total = inversion1 + inversion2 + inversion3;
	porcentaje1 = inversion1 /((float)(total / 100)) ;
		porcentaje2 = inversion2 /((float)(total /100)) ;
			porcentaje3 = inversion3 /((float)(total / 100)) ;
			
			
	printf("\n La primer persona invirtio un %.2f por ciento del total   \n",porcentaje1);
	printf("\n La segunda persona invirtio un %.2f por ciento del total  \n",porcentaje2);
	printf("\n La tercer persona invirtio un %.2f por ciento del total   \n",porcentaje3);
		

}
