/*
Materia: Fundamentos de programaci�n
Alumno: Benjam�n Joaqu�n Mart�nez 
Ejercicio 12:
En un hospital existen tres �reas: Ginecolog�a, Pediatr�a, Traumatologia. El presupuesto anual del hospital se reparte conforme a la sig. tabla:
			�rea			Porcentaje del presupuesto
			Ginecolog�a			40%
			Traumatologia			30%
			Pediatr�a			30%
Obtener la cantidad de dinero que recibir� cada �rea, para cualquier monto presupuestal.


*/
#include <stdio.h>
#include <conio.h>
main()
{       
    #define p printf
    
    float presupuesto,ginecologia,traumatologia,pediatria;


	p("Introduzca el monto presupuestal del mes : \n");
	scanf("%g",&presupuesto);
    ginecologia = presupuesto * 0.40;
	traumatologia = presupuesto * 0.30;
	pediatria = presupuesto * 0.30;	


	p("\nEl presupuesto para ginecologia es %.2f",ginecologia);
    p("\nEl presupuesto para traumatologia es %.2f",traumatologia);
    p("\nEl presupuesto para pediatria es %.2f",pediatria);
}
