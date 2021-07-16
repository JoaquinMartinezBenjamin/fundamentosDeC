#include<stdio.h>
#include<stdlib.h>
#include<string.h>


binario(int cosi){
	int arre[20];
	int	x=19;
	int resi;
	
		 	
			 while (cosi!=0){ 
			    resi=cosi%2;
			    arre[x]=resi;
			    cosi=cosi/2;
			    x--;
			                }
				 
    	printf("\n Binario=");
		for (x=x+1; x<20; x++)
		printf("%d",arre[x]);
	
}


octal(int cosi){
	int arre[20];
	int	x=19;
	int resi;
	
		 	
				while (cosi!=0){ 
			    resi=cosi%8;
			    arre[x]=resi;
			    cosi=cosi/8;
			    x--;
			                }
				 
    	printf("\n Octal=");
		for (x=x+1; x<20; x++)
		printf("%d",arre[x]);
	
}

 hexadecimal (int cosi){
	int arre[20];
	int	x=19;
	int resi;
	
			 while (cosi!=0){ 
			    resi=cosi%16;
			    arre[x]=resi;
			    cosi=cosi/16;
			    x--;
			                }
				 
    	printf("\n Hexadecimal=");
		for (x=x+1; x<20; x++){
		
		if (arre[x]<10) printf("%d",arre[x]); else {
		
		if(arre[x]==10) printf("A");
			if(arre[x]==11) printf("B");
				if(arre[x]==12) printf("C");
					if(arre[x]==13) printf("D");
						if(arre[x]==14) printf("E");
							if(arre[x]==15) printf("F");
                                                   }
                               }
	
	
}
main(){
	
	int cosi,arre[20];
	char opcion;
	do{
		
		printf("\n 1. Binario");
		printf("\n 2. Octal");
		printf("\n 3. Hexadecimal");
		printf("\n 4. Salir");  
		printf("\n Opcion="); 
		
		 scanf("%s",&opcion);
		 
		 switch (opcion){
		 	case '1':
		 		printf("\n Numero:");
		 		scanf("%d",&cosi);
		 		binario(cosi);
		 	
		
		break;
		
		case '2':
			printf("\n Numero:");
		 		scanf("%d",&cosi);
		 	  octal(cosi);
		
		 break;
		
		case '3': 
			printf("\n Numero:");
		 	scanf("%d",&cosi);
		 	 hexadecimal(cosi);
	
     	 break;
     	 
     	// default:  printf ("Opcion incorrecta"); break;
         }
		 	
		 	
			 }while(opcion!='4');
		 	
		 }


