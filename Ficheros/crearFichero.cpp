// Catalogo con archivos: Benjamín Joaquín Martínez
//Benjamin Joaquin Martinez
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <conio.h>

    int Id=0;
	char Marca[30];
    char Color[30];
    double Precio;
	int Numero;
	
	
   
 
 void crearFichero(){
 	        
			 FILE *ptrCf;  /* ptrCf = apuntador al archivo clientes.dat */
	
 		if ((ptrCf = fopen ("zapatos2.txt","a"))== NULL) {  /*le cambie el w porque 
 		me creaba un nuevo archivo por cada ejecución*/
		printf ("El archivo no pudo abrirse\n");
		
	           } /* fin de if*/
	
	else {
		
		printf( "Introduzca el ID, la Marca, el Color, el Precio y el numero\n");
		printf("Presione enter despues de escribir los datos anteriores luego \n");
		printf("introduzca Ctrl+Z para dejar de introducir registros \n");
    	printf("? ");
		scanf ("%d%s%s%lf%d",&Id, Marca, Color, &Precio, &Numero); 

       while (!feof (stdin)){
	
      	fprintf (ptrCf, "%d %s %s %.2f %d\n",Id, Marca, Color, Precio, Numero);
	    printf ("?");
	    scanf ("%d%s%s%lf%d", &Id,  Marca, Color, &Precio, &Numero);

                          } /*fin de while*/

                      fclose (ptrCf); /*fclose cierra el archivo */
              } /* fin de else */
        }
 int main(){
        crearFichero();
        return 0;
	 }
