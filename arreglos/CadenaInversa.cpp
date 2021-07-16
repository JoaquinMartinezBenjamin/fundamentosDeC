/* Alumno: Benjamin Joaquin Martinez
Diseña un programa que pida una frase y la muestre al revés.
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>


main(){      

int total, x,y;
int a,e,i,o,u;
a=e=i=o=u=0;

 char cadena[40];
 char espejo[40];
 
 printf("\n Introduzca la cadena:  \n\n");
 gets(cadena);

 x=0;
 for(y=strlen(cadena); y>0; y--){  
                                  espejo[y]=cadena[x];
                                  x++;
								}


 for(y=1; y<strlen(cadena)+1; y++){  
                               	  printf("%c",espejo[y]);
                                  }
 
getch();
return 0;


      }
