/*
Materia: Fundamentos de programación
Alumno: Benjamín Joaquín Martínez 
Ejercicio 14:
 Todos los lunes, miércoles y viernes, una persona corre la misma ruta y cronometra los tiempos obtenidos.
  Determinar el tiempo promedio que la persona tarda en recorrer la ruta en una semana cualquiera. 
*/
#include <stdio.h>
#include <conio.h>
main()
{       
   
   
    /*suponiendo que su cronometro marca horas, minutos y segundos*/
    int hl,ml,sl, totLunes;
    int hm,mm,sm, totMiercoles;
    int hv,mv,sv, totViernes;
    float totSemana;
    float horasProm, minutosProm, segundosProm;
        /*obtengo el total de tiempo en segundos del lunes*/
	printf("Introduzca las horas corridas el lunes: \n");
	scanf("%i",&hl);
	printf("Introduzca los minutos corridos el lunes: \n");
	scanf("%i",&ml);
	printf("Introduzca los segundos corridos el lunes: \n");
	scanf("%i",&sl);
	totLunes = sl+ (ml*60)+ (hl*3600);
	/*obtengo el total de tiempo en segundos del miercoles*/
	
    printf("Introduzca las horas corridas el miercoles: \n");
	scanf("%i",&hm);
	printf("Introduzca los minutos corridos el miercoles: \n");
	scanf("%i",&mm);
	printf("Introduzca los segundos corridos el miercoles: \n");
	scanf("%i",&sm);
	totMiercoles = sm+ (mm*60)+ (hm*3600);
	/*obtengo el total de tiempo en segundos del viernes*/
	printf("Introduzca las horas corridas el viernes: \n");
	scanf("%i",&hv);
	printf("Introduzca los minutos corridos el viernes: \n");
	scanf("%i",&mv);
	printf("Introduzca los segundos corridos el viernes: \n");
	scanf("%i",&sv);
	totViernes = sv+ (mv*60)+ (hv*3600);
	
   /*sumo los totales de tiempo en segundos de cada dia y lo promedio dividientre entre los 3 días*/
   
   totSemana = ((float)(totLunes + totMiercoles + totViernes)/3);
   
   /*el promedio lo vuelvo a convertir en formato de horas minutos y segundos*/
   
   horasProm= (totSemana/3600);                // una hora tiene 3600 segundos
   minutosProm = ((int)totSemana%3600)/60;     // los minutos son el residuo de el total entre 3600, 
                                               // como esto me sigue dando segundos lo divido entre 60
   segundosProm= ((int)totSemana%3600)%60;     // El residuo de dividir entre 60 en el paso anterior me da los segundos restantes

	printf("\nEl promedio de tiempo en recorrer la ruta es %.0f horas %.0f minutos %.0f segundos", horasProm,minutosProm,segundosProm);

}
