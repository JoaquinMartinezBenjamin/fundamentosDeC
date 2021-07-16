/* Alumno: Benjamín Joaquín Martínez
Ejercicio 51
Tomando como base los resultados obtenidos en un laboratorio de análisis clínicos, 
un medico determina si una persona tiene anemia o no, 
lo cual depende de su nivel de hemoglobina en la sangre, de su edad y de su sexo. 
Si el nivel de hemoglobina que tiene una persona es menor que el rango que le corresponde, 
se determina su resultado como positivo y en caso contrario como negativo. 
La tabla en la que el medico se basa para obtener el resultado es la siguiente: 

		EDAD				NIVEL HEMOGLOBINA
		0 - 1 mes		    	13    - 26 g%
		> 1 y < = 6 meses		10    - 18 g%
		> 6 y < = 12 meses		11    - 15 g%
		> 1 y < = 5 años		11.5 - 15 g%
		> 5 y < = 10 años		12.6 - 15.5 g%
		> 10 y < = 15 años		13    - 15.5 g%
		mujeres > 15 años		12    - 16 g%
		hombres > 15 años		14    - 18 g%
*/



#include<stdio.h>
#include<conio.h>

main () {
	char menor1Anio;
	int edadMeses;
	int edadAnios;
	int sexo;

	float hemoglobina;
	
printf("\nSi el paciente es menor o igual a un anio de edad presione la tecla 'y'\n");
printf("Si el paciente es mayor de un anio presione cualquier letra\n");
printf("______________________________________________________________\n");

scanf("%c",&menor1Anio);


if(menor1Anio=='y'){
printf("\nIntroduzca introduzca de 0 a 12 dependiendo de los meses de edad\n");
scanf("%d",&edadMeses);
                   }
            else   {
					printf("\nIntroduzca introduzca el numero de anios cumplidos \n");
					scanf("%d",&edadAnios);
				                        	if(edadAnios>15){
                                        printf("\nSi el paciente es hombre presione 1"); 
					                    printf("\nSi el paciente es mujer presione 2 \n");
					                    scanf("%d",&sexo);
					                                         }
					                           
				                                             	
					edadMeses = edadAnios * 12;
					
                   }
                   
//********************************************************************************************


  printf("\nIntroduzca el nivel de hemoglobina en gramos\n");
  scanf("%f",&hemoglobina);


 printf("\nSu resultado es: \n");
 if (edadMeses>=0 && edadMeses<=1) 
	                              {if(hemoglobina>=13 && hemoglobina <=26)    printf("\nPOSITIVO\n");
						                                             else     printf("\nNEGATIVO\n");}
if (edadMeses>1 && edadMeses<=6)
                                  {if(hemoglobina>=10 && hemoglobina <=18)    printf("\nPOSITIVO\n");
						                                             else     printf("\nNEGATIVO\n");}
if (edadMeses>6 && edadMeses<=12)
                                  {if(hemoglobina>=11 && hemoglobina <=15)    printf("\nPOSITIVO\n");
						                                             else     printf("\nNEGATIVO\n");}
if (edadMeses>(1*12) && edadMeses<=(5*12))
                                  {if(hemoglobina>=11.5 && hemoglobina <=15)  printf("\nPOSITIVO\n");
						                                               else   printf("\nNEGATIVO\n");}
if (edadMeses>(5*12) && edadMeses<=(10*12))
                                  {if(hemoglobina>=12.6 && hemoglobina <=15.5)printf("\nPOSITIVO\n");
						                                                 else printf("\nNEGATIVO\n");}
if (edadMeses>(10*12) && edadMeses<=(15*12))
                                  {if(hemoglobina>=13 && hemoglobina <=15.5)  printf("\nPOSITIVO\n");
						                                               else   printf("\nNEGATIVO\n");}       
if (edadMeses>(15*12) && (sexo==1))
                                  {if(hemoglobina>=12 && hemoglobina <=16)    printf("\nPOSITIVO\n");
						                                            else      printf("\nNEGATIVO\n");}
if (edadMeses>(15*12) && (sexo==2))
                                  {if(hemoglobina>=14 && hemoglobina <=18)    printf("\nPOSITIVO\n");
						                                             else     printf("\nNEGATIVO\n");}
    
    
    getch();
    return 0;
    
           
}

