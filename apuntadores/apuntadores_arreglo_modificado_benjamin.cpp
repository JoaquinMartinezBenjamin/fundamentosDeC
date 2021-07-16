/*Benjamín Joaquin Martínez*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int aleatorio ()
{
	return rand()%100;
}

main(){
	
	int arre[10];
	int *apu;
	int *apu2;
	int x,y;
	
	printf("\n Arreglo ");
	
	for(x=0;x<10;x++)
	{
		arre[x]=aleatorio();
		printf("\n Numero:[%d]=%d",x,arre[x]);
	}
	
	apu=arre;
    apu2=arre;
	printf("\n Recorrido de Arreglo con el apuntador");
	
	 y=10;
	for(x=0; x<10; x++)
	{   y--;
		printf("\n Numero: [%d] = %d \t Numero: [%d] = %d",x,apu[x],y,apu2[y]);
	}
	
	
	printf("\n Direccion inicial de apu=%d",&apu);
		y=10;
		apu2=apu2+9;
	for(x=0; x<10;x++)
	{   y--;
		printf("\n Numero:[%d] = %d \t Numero: [%d] = %d",x,*apu,y,*apu2);
		apu++;
		apu2--;
		
	}
	
}
