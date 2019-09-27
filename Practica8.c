/*
	Autor:		Cesar Orlando Ramirez Ignacio
	Fecha:		27/09/2019
	Grupo:		006
	Horario:	7:00am-9:00am
	Matricula:	1860455
*/




#include <stdio.h>


int main(){
/**********Activividad #1**********/
int numeroDeCoches[24], i, R=2;													/*Se declaran variables tipo enteras*/	
printf("Ingresa el numero de coches que hay:\n");								/*se imprime un mensaje para llenar datos*/
for(i=0;i<24;i++){																/*se inicia un ciclo for para repetir algo ahorrando codigo*/
	printf("En la hora %d:00:	",i);											/*se imprime un mensaje de la hora que es*/	
	scanf("%d",&numeroDeCoches[i]);												/*Se ingresan los datos al scanf que nos pidieron */
}
numeroDeCoches[R]=57;															/*se iguala a 57 la posicion 2 del arreglo*/
printf("\nLa hora es %d:00 y el numero de coches es %d",R,numeroDeCoches[R]);	/*se imprime la hora y el numero de coches que hay en esa hora*/
R=21;																			/*se cambia el valor de R quien representa la hora*/
numeroDeCoches[R]=57;															/*se iguala a 57 la nueva posicion del arreglo*/
printf("\nLa hora es %d:00 y el numero de coches es %d",R,numeroDeCoches[R]);	/*Se imprime la hora y el numero de coches que hay en esa hora*/



/**********Actividad #2**********/
int A=8, B=4;																	/*se declaran variables tipo entero*/
R=A/B;																			/*se le da a R el valor de A/B*/
printf("\n\nLa hora es %d y el numero de coches es %d",R,numeroDeCoches[R]);	/*Se imprime la hora y el numero de coches que hay en esa hora*/
return 0;																		/*Termina el programa*/
}
