#include <stdio.h>
#include <stdlib.h>
/*  Autor:		Cesar Orlando Ramirez Ignacio
    Fecha:		13/09/2019
	Grupo:		#006
	Horario:	7:00am-9:00am
	Matricula:	1860455	
*/


int main() {
	
	/*Aqui empieza la Actividad #1*/
	
	int i, num, snum;                                                            /*Declaracion de variables*/
	char r;                                                                      
	printf("Introduzca un numero entero:\t");                                    /*Imprimi pedir un numero*/
	scanf("%d",&snum);                                                           /*Se ingresa el numero*/
	for(i=0;i<1;i){                                                              /*Inicia el for y sigue con sus acciones en un ciclo hasta que i cambie */
		printf("Desea introducir otro (s/n)?\n");                                /*Imprimo si se desea ingresar otro numero*/
		fflush(stdin);                                                           /*Permite limpiar el buffer del teclado y no repetir el mensaje*/
		scanf("%c",&r);                                                          /*Se ingresa la respuesta a la pregunta de ingresar un numero*/
		if(r=='s'){                                                              /*Si eso se cumple pasa a hacer las acciones del if*/
			printf("Introduzca un numero entero:\t");                            /*Imprimo que se introduzca un numero*/
			scanf("%d",&num);                                                    /*Se ingresa el numero*/
			snum=snum+num;                                                       /*Sumatoria de los numeros que se estan ingresando*/
		}
	    else if(r=='n'){                                                         /*Si no se cumple el primer if puede que entre a este y haga sus accioens*/
	    	i=1;                                                                 /*Cambio el valor de i para que el for termine*/
		}
		else{                                                                    /*Si no se cumplio el if anterior ni el if else entra aqui*/
			printf("Error al ingresar si se quiere o no ingresar el numero\n\n");/*Imprime un error a la pregunta por ingresar un dato no pedido*/
			i=1;                                                                 /*Cambio el valor de i para que el for termine*/
		}
	}
	printf("La suma de los numeros introducidos es: %d\n\n",snum);                   /*Se imprime la sumatoria de os numeros ingresados*/
	
	
	/*Aqui empieza la actividad #2*/
	int j, lnum;                                                                 /*Declaracion de variables*/
	for(j=0;j<1;j){                                                              /*Entra a un for y hace las acciones siguientes hasta que j cambie*/
		printf("Introduzca un numero:\t");                                 /*Pido que se introduzca un numero*/
		fflush(stdin);                                                           /*Permite limpiar el buffer del teclado y no repetir el mensaje*/
		scanf("%d",&lnum);                                                       /*Se ingresa el numero pedido*/
		if(lnum<100){                                                            /*Si esto se cumple hara lo que hay en el if*/
			printf("Introduzca un numero:\t");                                   /*Pido que se ingrese un numero*/
			scanf("%d",&lnum);                                                   /*Se ingresa el numero*/
		}
	    else {                                                                   /*Si no se cumplio el if entra aqui*/
	    	j=1;                                                                 /*Cambio el valor de j para qe el ciclo for termine*/
		}
	}
	
	return 0;                                                                    /*Termina el programa*/
}
