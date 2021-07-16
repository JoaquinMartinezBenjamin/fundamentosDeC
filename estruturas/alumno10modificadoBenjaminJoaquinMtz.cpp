/*
Alumno: Benjamin Joaquin Martinez 
Modificar para que funcione en 10 alumnos usando 
un arreglo de registros*/

#include <stdio.h>
#include <stdlib.h> 
#include <conio.h>
//#define numAlumnos 1   //total menos 1

main(){
	
	int j;
             	struct nombre_com
             	{
		              char nombre[30];
		              char apellidopat[15];
	               	  char apellidomat[15];
            	};
            	
            	
	           struct agenda
               {
                	struct nombre_com nombrec;
                    int calificacion[3];
                	float estatura;	
               };

agenda arre[2];
int pos;
pos=-1;
int opc;
int x;
/*************************************************************/

do{     
 		printf("\n 1.Insertar");
 	
 		printf("\n 2.Listar");
 	
 		printf("\n 3.Limpiar pantalla");
 		printf("\n 4.Salir");
 		printf("\n Opcion=>");
 		scanf("%d",&opc);
 		
 			switch (opc){
 			case 1:
 				
 						if (pos<1){  //tamaño menos -1 para incrementar
						 pos++;

/*inicializar*/
arre[pos].nombrec.nombre[0]='\0';
arre[pos].nombrec.apellidopat[0]='\0';
arre[pos].nombrec.apellidomat[0]='\0';

for(j=0; j<3; j++) arre[pos].calificacion[j]=0;

    arre[pos].estatura=0;
    
/*agregar un elemento*/

printf ("\n dame el nombre:   ");
scanf("%s",&arre[pos].nombrec.nombre);
printf("\napellido paterno:   ");
scanf("%s",&arre[pos].nombrec.apellidopat);
printf("\n apellido materno:  ");
scanf("%s",&arre[pos].nombrec.apellidomat);

for(j=0;j<3;j++)
{
	printf(" dame la calificacion %d:   ",j + 1);
	scanf("%d",&arre[pos].calificacion[j]);
	
}

printf(" deme la estatura en cm:   ");
scanf("%f",&arre[pos].estatura);
}//if (pos<10);
                     else {
					 printf("\n Agenda esta llena");
                     printf("\n************************************************\n");
                          }
break;

case 2:
/*imprimir*/
if (pos !=-1){ // si no esta vacia
			
			for(x=0;x<=pos;x++){
printf("\n Registro numero %d\n",x + 1);
printf("nombre\t Ap pat \t Ap mat \n ");
printf("%s\t", arre[x].nombrec.nombre);
printf("%s\t", arre[x].nombrec.apellidopat);
printf("%s\t", arre[x].nombrec.apellidomat);
printf("\n\tcal 1 \tcal 2\tcal 3\testatura\n\n");
for(j=0;j<3;j++)
{
	printf("\t%d",arre[x].calificacion[j]);
	
}


printf("\t%.2f",arre[x].estatura);
printf("\n************************************************\n");

	}
			}else 
			    {
				printf("\n No hay registros de alumnos");
			    printf("\n************************************************\n");
		    	}
			    break;


case 3: system("cls");  break;
case 4:  opc=111;    break;

} //switch
	 }while (opc < 111);//do while
	 return 0;
}//main


