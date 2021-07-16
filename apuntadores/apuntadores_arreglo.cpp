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
	int x;
	
	printf("\n Arreglo ");
	
	for(x=0;x<10;x++)
	{
		arre[x]=aleatorio();
		printf("\n Numero:[%d]=%d",x,arre[x]);
	}
	
	apu=arre;
	printf("\n Recorrido de Arreglo con el apuntador");
	
	for(x=0; x<10; x++)
	{
		printf("\n Numero: [%d] = %d",x,apu[x]);
	}
	printf("\n Direccion inicial de apu=%d",&apu);
	for(x=0; x<10;x++)
	{
		printf("\n Numero:[%d] = %d ",x,*apu);
		apu++;
	}
	
}
