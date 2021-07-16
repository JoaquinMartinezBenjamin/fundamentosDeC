/*Alumno: Benjamin Joaquin Martinez
122) Se tienen almacenados en la memoria dos vectores M y N de cien elementos cada uno.
 Hacer un algoritmo que escriba la palabra "Iguales" si ambos vectores son iguales y "Diferentes" si no lo son.
 */

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <time.h>
main(){
	int vectorM[100];
	int vectorN[100];
	int bandera=0;
    srand(time(NULL));
    //variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    for(int x=0;x<100; x++) vectorM[x]=  -10 + rand() % (11 - (-10));
    for(int x=0;x<100; x++) vectorN[x]=  -10 + rand() % (11 - (-10));
    printf("VECTOR M \n\t");
    for(int x=0;x<100; x++) printf("%d[%d]\t",x,vectorM[x]);
     printf("\nVECTOR N \n\t");
    for(int x=0;x<100; x++) printf("%d[%d]\t",x,vectorN[x]);
    
    //Comparación
    for(int x=0;x<100; x++) if(vectorM[x]!=vectorN[x]) bandera=1;
    if(bandera==1) printf("\n>>>>>>>>>>> Diferentes");else printf("\n>>>>>>>>>>> Iguales");
    
    //Volcando el vector M en el vector N
    bandera=0;
      printf("\n:::::::::::::::::::::::::::::::::\n");
    for(int x=0;x<100; x++) vectorN[x]=vectorM[x];
    printf("\nVECTOR M \n\t");
    for(int x=0;x<100; x++) printf("%d[%d]\t",x,vectorM[x]);
     printf("\nVECTOR N \n\t");
    for(int x=0;x<100; x++) printf("%d[%d]\t",x,vectorN[x]);
    //Comparación
    for(int x=0;x<100; x++) if(vectorM[x]!=vectorN[x]) bandera=1;
    if(bandera==1) printf("\n>>>>>>>>>>> Diferentes");else printf("\n>>>>>>>>>>> Iguales");



}
