#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <conio.h>
//todas estas son variables globales
struct Catalogo {
	int Id;
	char Marca[15];
	
	char Color;
	float Precio;
	int Numero;
               };
 
 Catalogo arre[2];
 int contador=1;
 
 int pos; //lleva la posición dentro del arreglo               
 
 main(){
 	//variables locales
 	int opc,num,existe,x;
 	
 	pos=-1;
 	//inicia a posicion en un valor inexistente,
 	//porque la primera vez la agenda esta vacia
 	
 	do{
 		printf("\n 1.Insertar");
 		printf("\n 2.Buscar");
 		printf("\n 3.Listar");
 		printf("\n 4.Eliminar");
 		printf("\n 5.Salir");
 		printf("\n 0.Limpiar pantalla");
 		printf("\n Opcion=>");
 		scanf("%d",&opc);
 		switch (opc){
 			
 			case 0: system("cls");  break;
 			
 			case 1: 
 			
 			if (pos<1) //valida que la agenda no esta llena 
 			{
          	pos ++; //actualiza la posición dentro del arreglo
		/************************/
			 arre[pos].Id=contador++;
			 
			  printf("\n Id: %d",arre[pos].Id);		 
        /************************/
	         printf("\n Marca:");
			 scanf("%s",&arre[pos].Marca);
		/************************/	 
			 printf("\n Color n=negro c=cafe b= blanco: ");
		//	 arre[pos].Color = getchar();
		scanf("%s",&arre[pos].Color);
		/****************************/
		int bandera=0;
		while(bandera==0){
		
		if(arre[pos].Color!='n'
	  	 &&arre[pos].Color!='c'
		 &&arre[pos].Color!='b'
		 &&arre[pos].Color!='N'
		 &&arre[pos].Color!='C'
		 &&arre[pos].Color!='B') {
		 	printf("\nCaracter incorrecto eliga de nuevo");
		 	printf("\n Color n=negro c=cafe b= blanco: ");
		 	scanf("%s",&arre[pos].Color);
		 }	else bandera=1;
		 
                          	}
		/************************/	 
		     printf("\n Precio: ");
			 scanf("%f",&arre[pos].Precio);
		/************************/	 
             printf("\n Numero: ");
			 scanf("%d",&arre[pos].Numero);
		/************************/
			 
			 } 
			 else
			 printf("\n El catalogo esta lleno");
			 break;
			 
			 
			case 2:
			if (pos!=-1)//valida que la agenda no este vacia
			{
				
			printf("\n Id a buscar:");
			scanf("%d",&num);
				int encontro=0; //Bandera activada en falso
				for(x=0; x<=pos; x++)
				{
					if (arre[x].Id==num)
					{
						encontro=1;//activa la bandera a verdadero
	    /************************/
	    	printf("\n************************************************");
	    	      printf("\n ID: %d",arre[x].Id);
	         printf("\n Marca: %s",arre[x].Marca);
			
		/************************/	 
		if(arre[x].Color=='n')  printf("\n Color: Negro");
	  	if(arre[x].Color=='c')  printf("\n Color: Cafe");
		if(arre[x].Color=='b')  printf("\n Color: Blanco");
		if(arre[x].Color=='N')  printf("\n Color: Negro");
		if(arre[x].Color=='C')  printf("\n Color: Cafe");
		if(arre[x].Color=='B')  printf("\n Color: Blanco");
			 
			 
		/************************/	 
		     printf("\n Precio: %.2f",arre[x].Precio);
			 
		/************************/	 
             printf("\n Numero: %d",arre[x].Numero);
			 
		/************************/
			printf("\n************************************************");
						x=pos+1;//para salir del ciclo
						
					}
					
				}
				
				if(encontro==0) //si no existe
				   printf("\n Este zapato no existe");
				
			}
			else
			printf("\n Catalogo Vacio");
			break;
			
			case 3: if (pos !=-1) // si no esta vacia
			
			for(x=0;x<=pos;x++){
    	printf("\n************************************************");
	         printf("\n ID: %d",arre[x].Id);
				    /************************/
	         printf("\n Marca: %s",arre[x].Marca);
			
		/************************/	 
		if(arre[x].Color=='n')  printf("\n Color: Negro");
	  	if(arre[x].Color=='c')  printf("\n Color: Cafe");
		if(arre[x].Color=='b')  printf("\n Color: Blanco");
		if(arre[x].Color=='N')  printf("\n Color: Negro");
		if(arre[x].Color=='C')  printf("\n Color: Cafe");
		if(arre[x].Color=='B')  printf("\n Color: Blanco");
			 
		/************************/	 
		     printf("\n Precio: %.2f",arre[x].Precio);
			 
		/************************/	 
             printf("\n Numero: %d",arre[x].Numero);
			 
		printf("\n************************************************\n");
				
			}
			else 
			    printf("\n Catalogo vacio");
			    break;
			    
		case 4: 
				if(pos != -1)	// si no esta vacia    
				{
					printf("\n Id a eliminar:");
		            scanf("%d",&num);
					int x,y;
					int encontro=0;
					for(x=0; x<pos;x++)
					{
						if(arre[x].Id==num)
						{
							encontro=1;
							for(y=x; y<=pos; y++){
								
								arre[y].Id=arre[y+1].Id;
								strcpy(arre[y].Marca,arre[y+1].Marca);
								arre[y].Color=arre[y+1].Color;
								arre[y].Precio=arre[y+1].Precio;
								arre[y].Numero=arre[y+1].Numero;
							
								
							}
							x=pos+1; // para salir del clclo
							pos--; // porque hay un elemento menos en el arreglo
							
						}
						if(!encontro) // si no lo encontro
						printf("\n No se encontro el zapato en el catalogo");
						else
						printf("\n El zapato fue borrado del catalogo");
						
					}
				}
					else
					printf ("\n El catalogo esta vacio ");
					break;
					case 5: opc=999; break;
					default:	printf ("\n Opcion incorrecta"); 	break;
				}
				
		 }while (opc < 999);
	 }
 	
 
