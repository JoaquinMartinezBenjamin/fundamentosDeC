/*Alumno: Benjamin Joaquin Martinez
Disena un programa que pida una cadena de caracteres y cuente cuantas veces aparece cada vocal en la cadena. Ejemplo:
.Cadena: Åganitala huerfanitaÅh
.a=5
.e=1
.i=2
.o=0
.u=1
*/

 
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>


main(){      

int total, x;
int a,e,i,o,u;
a=e=i=o=u=0;

 char cadena[40];
 printf("\n Introduzca la cadena:  ");
 cadena[0]= '\0';
 gets(cadena);
 total=0;
 for(x=0; x<strlen(cadena); x++)
 {
 	if (cadena[x]=='a')a++;
 	if (cadena[x]=='e')e++;
 	if (cadena[x]=='i')i++;
 	if (cadena[x]=='o')o++;
 	if (cadena[x]=='u')u++;
 }

printf("\n Numero de vocales");
printf("\n a= %d",a);
printf("\n e= %d",e);
printf("\n i= %d",i);
printf("\n o= %d",o);
printf("\n u= %d",u);
getch();
return 0;


      }
