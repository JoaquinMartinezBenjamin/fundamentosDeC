/*Benjamín Joaquin Martínez*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define tamanio 10


main(){
	
/* INCISO A*/
int x;
float numeros[tamanio];
float acumulador=0.0;
numeros[0]=0.0;
for(x=1;x<tamanio;x++){
	acumulador += 1.1;
	numeros[x]= acumulador;
}

/*INCISO B*/
float *ptrN;
/*INCISO C*/
printf("\n\t:::::::::::::::::::::::::Impresion del arreglo::::::::::::::::::::::::::::\n");
for(x=0;x<tamanio;x++){
	
 printf("\t %d[%.1f]",x,numeros[x]);
}
/*INCISO D*/
ptrN = numeros;
ptrN = &numeros[0];
/*INCISO E*/
printf("\n\n\t::::::::::::::Con el apuntador en la posicion inicial del arreglo::::::::::\n");

for(x=0;x<tamanio;x++){
	 printf("\n ptrN_%d[%.1f]",x,*ptrN);
    ptrN++;
}

/*INCISO F*/

 printf("\n\n\t::::::::::::Posicion inicial con el nombre del arreglo::::::::::::::::::::\n");
ptrN = numeros;
for(x=0;x<tamanio;x++){
	 printf("\n numeros_%d[%.1f]",x,*ptrN);
	 ptrN++;
}


/*INCISO G*/
 printf("\n\n\t:::::::::::::::::Con subindice en el apuntador::::::::::::::::::::::::::::::\n");
ptrN = numeros;
for(x=0;x<tamanio;x++){
	 printf("\t %d[%.1f]",x,ptrN[x]);
	 
}


}


