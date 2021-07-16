#include <stdio.h>
#include <string.h>
//todas estas son variables globales
struct Agenda {
	int Id;
	char Nombre[15];
	char phone[10];
               };
 
 Agenda arre[20];
 
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
 		printf("\n Opcion=>");
 		scanf("%d",&opc);
 		switch (opc){
 			
 			case 1: 
 			if (pos<20) //valida que la agenda no esta llena 
 			{
 				pos ++; //actualiza la posición dentro del arreglo
			 printf("\n Id:");
			 scanf("%d",&arre[pos].Id);
			 printf("\n Nombre:");
			 scanf("%s",arre[pos].Nombre);
			 printf("\n Telefono:");
			 scanf("%s",arre[pos].phone);
			 
			 } 
			 else
			 printf("\n Agenda esta llena");
			 break;
			 
			 
			case 2: printf("\n Id a buscar:");
			scanf("%d",&num);
			if (pos!=-1)//valida que la agenda no este vacia
			{
				int encontro=0; //Bandera activada en falso
				for(x=0; x<=pos; x++)
				{
					if (arre[x].Id=num)
					{
						encontro=1;//activa la bandera a verdadero
						printf("\n Id:%d",arre[x].Id);
						printf("\n Nombre:%s",arre[x].Nombre);
						printf("\n Telefono:%s",arre[x].phone);
						x=pos+1;
					}
					
				}
				
				if(!existe) //si no existe
				   printf("\n ese contacto no existe");
				
			}
			else
			printf("\n Agenda Vacia");
			break;
			
			case 3: if (pos !=-1) // si no esta vacia
			
			for(x=0;x<=pos;x++){
				
				printf("\n Id:%d",arre[x].Id);
				printf("\n Nombre:%s",arre[x].Nombre);
				printf("\n Telefono:%s",arre[x].phone);
				printf("\n ****************************");
				
			}
			else 
			    printf("\n Agenda Vacia");
			    break;
			    
		case 4: printf("\n Id a eliminar:");
		        scanf("%d",&num);
				if(pos != -1)	// si no esta vacia    
				{
					int x,y;
					int encontro=0;
					for(x=0; x<=pos;x++)
					{
						if(arre[x].Id==num)
						{
							encontro=1;
							for(y=x; y<pos; y++){
								
								arre[y].Id=arre[y+1].Id;
								strcpy(arre[y].Nombre, arre[y+1].Nombre);
								strcpy(arre[y].phone, arre[y+1].phone);
								
							}
							x=pos+1; // para salir del clclo
							pos--; // porque hay un elemento menos en el arreglo
							
						}
						if(!encontro) // si no lo encontro
						printf("\n ese contacto no existe");
						else
						printf("\n El contacto fue eliminado");
						
					}
				}
					else
					printf ("\n Agenda vacia");
					break;
				}
				
		 }while (opc < 5);
	 }
 	
 
