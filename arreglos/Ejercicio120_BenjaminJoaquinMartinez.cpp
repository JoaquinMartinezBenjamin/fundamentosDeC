
/*Alumno: Benjamin Joaquin Martinez
Ejercicio 
120) Almacenar 300 números en un vector, imprimir cuantos son ceros, 
cuantos son negativos, cuantos positivos. 
Imprimir además la suma de los negativos y la suma de los positivos. 
*/



#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <time.h>
main(){

int vector[300];
int neutros,negativos,positivos,sumaPositivos,sumaNegativos;
neutros=negativos=positivos=sumaPositivos=sumaNegativos=0;


srand(time(NULL));
//variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;


 for(int x=0;x<300; x++) vector[x]=  -10 + rand() % (11 - (-10));
 for(int x=0;x<300; x++) printf("\nposicion %d [%d]",x,vector[x]);
 
 for(int x=0;x<300; x++) {
                       if(vector[x]==0)    neutros   ++;
                       if(vector[x]< 0)  { negativos ++; sumaNegativos += vector[x];}
                       if(vector[x]> 0)  { positivos ++; sumaPositivos += vector[x];}
                        }
                       printf("\n Neutros:   %d",neutros);
                       printf("\n Negativos: %d",negativos);
                       printf("\n Positivos: %d",positivos);
                       printf("\n La suma de negativos es: %d",sumaNegativos);
                       printf("\n La suma de positivos es: %d",sumaPositivos);
         }
