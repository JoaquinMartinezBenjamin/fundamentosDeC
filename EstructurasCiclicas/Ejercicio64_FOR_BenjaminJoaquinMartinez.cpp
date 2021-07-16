/*Alumno: Benjamin Joaquin Martinez 
Ejercicio 64:
 En un centro de verificación de automóviles se desea saber el promedio de puntos contaminantes
  de los primeros 25 automóviles que lleguen. Asimismo se desea saber los puntos contaminantes
   del carro que menos contamino y del que mas contamino. 
   */
   
#include<stdio.h>
#include<conio.h>

main () {

int puntosContaminantes; 
int contador; 
int maximoPContaminantes;
int minimoPContaminantes; 
float promedio;
float sumador;

 printf("\nIntroduzca los puntos contaminantes del automovil 1\n");
 scanf("%d",&puntosContaminantes);
 maximoPContaminantes=minimoPContaminantes=puntosContaminantes;
 sumador+= (float)puntosContaminantes; 

 for(contador=1; contador<25; contador ++)  { 
 printf("\nIntroduzca los puntos contaminantes del automovil %d\n", contador + 1);
 scanf("%d",&puntosContaminantes); 
 sumador+= (float)puntosContaminantes;
 if(maximoPContaminantes < puntosContaminantes) maximoPContaminantes = puntosContaminantes;
 if(minimoPContaminantes > puntosContaminantes) minimoPContaminantes = puntosContaminantes;
                                            }
  
  promedio = sumador / (float) contador; 
  
  
  printf( "\n El promedio de puntos contaminantes de los 25 automoviles es \t %.2f",promedio); 
  printf("\n El auto con menos puntos contaminantes tuvo  \t %d",minimoPContaminantes); 
  printf("\n El auto con mas puntos contaminantes tuvo  \t %d",maximoPContaminantes); 
  
  

}
