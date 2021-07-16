 //Benjamin Joaquin Martínez
 #include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <conio.h>

    int Id=0;
	char Marca[30];
    char Color[30];
    double Precio;
	int Numero;
	
 
 
 
 void leerFichero (){
 	  	
	FILE * ptrCf; /* ptrCf = apuntador al archivo clientes.dat*/
	
	/* fopen abre el archivo, si no se puede abrir el archivo, abandona el programa a*/
	
	if ( (ptrCf = fopen ("zapatos2.txt", "r"))== NULL){
				printf ("El archivo no puede abrirse\n");
	    }  /* fin de if */
	else {
		
     	printf ( "%s %s %s %s %s\n","Id", "Marca", "Color", "Precio", "Numero");
	    fscanf (ptrCf,"%d%s%s%lf%d", &Id,  Marca, Color, &Precio, &Numero);
		
		/*mientras no sea fin de archivo */
		while (!feof (ptrCf)){
			
				
		      printf ( "%d %s %s %.2f %d\n",Id, Marca, Color, Precio, Numero);
             fscanf (ptrCf,"%d%s%s%lf%d", &Id,  Marca, Color, &Precio, &Numero);
		
		
		}/*fin de while*/
		fclose (ptrCf); /* fclose cierra el archivo */
	} /*fin de else*/
	
}


int main(){
        leerFichero();
        return 0;
	 }
