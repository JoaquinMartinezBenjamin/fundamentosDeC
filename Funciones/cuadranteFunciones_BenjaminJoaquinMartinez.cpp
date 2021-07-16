//plano cartesiano funciones 
 #include <stdio.h>
 #include <conio.h> 
 
 
 
 int cuadrante (int x, int y){
 	int cuadrante =0;
  	
 		if(x>0 && y>0)  cuadrante =1; //printf("Cuadrante 1");
  else  if(x<0 && y>0)  cuadrante =2; //printf("Cuadrante 2");
  else  if(x<0 && y<0)  cuadrante =3; //printf("Cuadrante 3");
  else                  cuadrante =4; //printf("Cuadrante 4");
  
  return cuadrante;
 }
 
  main  () {
  	
  	int x,y;
  	printf("Introduzca x: ");
  	scanf("%d",&x);
  	
  	printf("Introduzca y: ");
  	scanf("%d",&y);
  	
  	printf("La coordenada esta en el cuadrante %d",cuadrante(x,y));
     
  }
