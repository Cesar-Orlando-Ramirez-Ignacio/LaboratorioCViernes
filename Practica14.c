/*
	Autor:		Cesar Orlando Ramirez Ignacio
	Fecha:		09/11/2019
	Grupo:		006
	Horario:	Viernes 7:00am-9:00am
	Matricula:	1860455*/

#include<stdio.h>
#include<string.h>
struct imagen{
	char nombre[30];
	int fecha;
}img[4];

struct punteros{
	int *p;
}punt[9];



int main(){
	
	/***********ACTIVIDAD #1***********/
	int i;													//declaracion de variables

	for(i=0;i<5;i++){										//ciclo for para llenar informacion de la foto
	printf("Nombre de Imagen %d: ",i+1);	
	fflush(stdin);
	gets(img[i].nombre);
	printf("Fecha en que se tomo la Imagen %d: ",i+1);
	scanf("%d",&img[i].fecha);	
	}
	
	for(i=0;i<5;i++){										//ciclo for para imprimir la posicion de la casilla puntero
		punt[i].p=&img[i];
		printf("Puntero %d: %p \n",i+1,punt[i].p);
	}
	
	/***********ACTIVIDAD #2***********/
	int j,x=0,may=0,may2=0;									//declaracion de variables
	struct coordenadas{										//declaracion de una estructura
	int latitud;
	int longitud;
}lugar[4];

	lugar[0].latitud=200;									//valores que tendra la estructura
	lugar[0].longitud=300;
	lugar[1].latitud=400;
	lugar[1].longitud=100;
	lugar[2].latitud=100;
	lugar[2].longitud=400;
	lugar[3].latitud=300;
	lugar[3].longitud=200;
	lugar[4].latitud=1000;
	lugar[4].longitud=1000;
	printf("Primer orden:\n");								//imprime el inicio del primer orden
	
	for(i=0;i<4;i++){										//ciclo for para imprimir el primer orden
		printf("lugar %d tiene latitud %d y longitud %d\n",i+1,lugar[i].latitud,lugar[i].longitud);
	}
	printf("\n\nSegundo orden:\n");							//imprime el inicio del segundo orden
	for(i=0;i<4;i++){										//ciclo de orden acendente en latitud
		for(j=0;j<4;j++){
			if(lugar[j].latitud>lugar[j+1].latitud){
				may=lugar[j].latitud;
				lugar[j].latitud=lugar[j+1].latitud;
				lugar[j+1].latitud=may;
				may2=lugar[j].longitud;
				lugar[j].longitud=lugar[j+1].longitud;
				lugar[j+1].longitud=may2;
			}
		}
	}
	for(i=0;i<4;i++){										//imprime el orden acendente en latitud
		printf("Lugar %d tiene latitud %d y longitud %d\n",i+1,lugar[i].latitud,lugar[i].longitud);
	}
	may=0,may2=0;
	printf("\n\nTercer orden:\n");							//imprime el inicio del tercer orden
	for(i=0;i<4;i++){										//ciclo de orden acendente en longitud
		for(j=0;j<4;j++){
			if(lugar[j].longitud>lugar[j+1].longitud){
				may2=lugar[j].longitud;
				lugar[j].longitud=lugar[j+1].longitud;
				lugar[j+1].longitud=may2;
				may=lugar[j].latitud;
				lugar[j].latitud=lugar[j+1].latitud;
				lugar[j+1].latitud=may;
			}
		}
	}
	for(i=0;i<4;i++){										//imprime el orden acendente en longitud
		printf("Lugar %d tiene latitud %d y longitud %d\n",i+1,lugar[i].latitud,lugar[i].longitud);
	}
	return 0;
}
