// Catalogo con archivos: Benjamín Joaquín Martínez

#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <conio.h>

    int Id=0;
	char Marca[30];
    char Color[30];
    double Precio;
	int Numero;
	
	
 void limpiar(){ 	system("cls"); }        
 
 void agregar(){
 	        
			 FILE *ptrCf;  /* ptrCf = apuntador al archivo clientes.dat */
	
 		if ((ptrCf = fopen ("zapatos.txt","a"))== NULL) {  /*le cambie el w porque 
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
 
 
 void listar (){
 	  	
 


	FILE * ptrCf; /* ptrCf = apuntador al archivo clientes.dat*/
	
	/* fopen abre el archivo, si no se puede abrir el archivo, abandona el programa a*/
	
	if ( (ptrCf = fopen ("zapatos.txt", "r"))== NULL){
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
	void buscar () {
		int buscado=0;
		int encontrado=0;
		printf("Introduzca el Id a buscar:   ");
		scanf("%d",&buscado);
		
			FILE * ptrCf; /* ptrCf = apuntador al archivo clientes.dat*/
	
	/* fopen abre el archivo, si no se puede abrir el archivo, abandona el programa a*/
	
	if ( (ptrCf = fopen ("zapatos.txt", "r"))== NULL){
				printf ("El archivo no puede abrirse\n");
	    }  /* fin de if */
	else {
		
     
	    fscanf (ptrCf,"%d%s%s%lf%d", &Id,  Marca, Color, &Precio, &Numero);
		
		/*mientras no sea fin de archivo */
		while (!feof (ptrCf)){
			 
			if (buscado==Id)	{
				encontrado=1;
			printf ( "%s %s %s %s %s\n","Id", "Marca", "Color", "Precio", "Numero");
		      printf ( "%d %s %s %.2f %d\n",Id, Marca, Color, Precio, Numero);
		  }
             fscanf (ptrCf,"%d%s%s%lf%d", &Id,  Marca, Color, &Precio, &Numero);
		
		
		}/*fin de while*/
		fclose (ptrCf); /* fclose cierra el archivo */
		if (encontrado==0){printf("\nEl registro con este Id no existe\n");
		}
	} /*fin de else*/
	}
 
 
 
 
 
 
main(){
 	//variables locales
 char opcion;
 	
 	do{ 
	    
		printf("\n 0.Limpiar pantalla");
 		printf("\n 1.Insertar");
 		printf("\n 2.Buscar");
 		printf("\n 3.Listar");
 	//	printf("\n 4.Eliminar");
 		printf("\n 5.Salir");
 	
 		printf("\n Opcion=>");
 		scanf("%s",&opcion);
 		
 		switch (opcion){
 			
 			case '0': limpiar();  break;
 			case '1': agregar(); break;
			case '2': buscar();   break;
			case '3': listar();   break;
            //case '4': eliminar(); break;
	
	    	default:	printf ("\n Opcion incorrecta"); break;
			   	}
				
		 }while (opcion !='5');
	 }
 	
 

