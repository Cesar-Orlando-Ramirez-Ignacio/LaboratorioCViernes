/*
	Autor:		Cesar Orlando Ramirez Ignacio
	Fecha:		04/10/2019
	Grupo:		006
	Horario:	7:00am-9:00am
	Matricula:	1860455
	
*/

#include <stdio.h>

int main(){
	/**********Actividad #1**********/
	int VEOE[6][10][2], i, j, k;																			/*Se declaran las variables*/
	
	for(i=0;i<6;i++){																						/*Inicia un for anidado para llenar el arreglo, es para casillas en i*/
		for(j=0;j<10;j++){																					/*Este for es para casillas en j, siempre suma uno al termnar el siguiente*/
			for(k=0;k<2;k++){																				/*Este arreglo es para casillas en k, al terminar regresa al primer for y suma 1 a i, j y k*/
				printf("Ingrese elemento para casilla %d:%d:%d:	",i,j,k);									/*Imprimo que ingrese valores en una casilla correspondiente*/			
				scanf("%d",&VEOE[i][j][k]);																	/*Se ingresa el valor a la casilla*/
			}
		}
	}
	VEOE[3][7][1]=4234;																						/*Cambiams el valor de VEOE[3][7][1] para que sea igual a 4234*/
	
	printf("\nEl numero de empleado 3, de la casilla 7, del edificio 2 ha vendido %d",VEOE[3][7][1]);		/*Imprimimos que el empleado del edificio del array VEOE[3][7][1] a vendido 4234*/
	
	/*a)¿Cuantos elementos hay en el array multidimensional?
	
	  Respuesta: Como es un array de 6*10*2 hay 120 elementos en el
	  
	  b)¿Que ocurre si intentamos mostrar por pantalla un valor con un indice que no esta definido para ese array multidimensional?
	  
	  Respuesta: No aparece en pantalla un valor.*/
	  
	/***********Actividad #2**********/
	
		for(i=0;i<6;i++){                																	/*Inicia for anidado para llena arreglo multidimensional, empezamos en i*/
		for(j=0;j<10;j++){																					/*Este for lleva j en el array*/
			for(k=0;k<2;k++){																				/*Al terminar de hacer la accion del for, se le suma 1 a i, j y k*/
             VEOE[i][j][k]=VEOE[i][j][k]+10;																/*Cambiamos el valor del array VEOE[3][7][1]*/
			}
		}
	}
	
	printf("\n\nEl numero de empleado 3, de la casilla 7, del edificio 2 ha vendido %d",VEOE[3][7][1]);		/*Imprimimos el nuevo valor del empleado, en el edificio que vendio el nuevo valor en VEOE[3][7][1]*/
	return 0;																								/*Termina el programa*/
}
