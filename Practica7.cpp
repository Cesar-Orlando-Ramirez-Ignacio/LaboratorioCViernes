/*
	Autor:		Cesar Orlando Ramirez Ignacio
	Fecha:		20/09/2019
	Grupo:		006
	Horario:	viernes 7:00am-9:00am
	Matricula:	1860455
*/

#include <stdio.h>

int main(){
	/********AVITIVDAD 1********/
	int i=1, prom=0, cal, sumcal=0; 											/*Se piden las variables a usar*/
	for(i;i<=10;i++){															/*iniciamos un ciclo for que se repetira 10 veces*/
		printf("Ingrese la calificacion %d:	",i);								/*Imprimo que se ingrese un numero*/
		scanf("%d",&cal);														/*Se ingresa el numero*/
		sumcal=sumcal+cal;														/*Es una sumatoria que acumulara los datos que se esten ingresando*/
	}
	prom=sumcal/10;   															/*Operacion para sacar el promedio*/
	if(prom>7){																	/*Se coloca un if con la condicion de que si el promedio es mayor o igual a 7 se imprime aprobado*/
		printf("Su calificacion es %d:	APROBADO\n\n\n\n",prom);				/*Si se cumple el if se imrpime esto*/
	}
	else{																		/*Si no se cumple el if, entra aqui*/
		printf("Su calificacion es %d: REPROBADO\n\n\n\n",prom);				/*como el if no se cumplio entra al else*/
	}
	
	
	
	
	/*********ACTIVIDAD 2*********/
	int j=1, expo, base, pot=1;													/*Declaracion de variables*/
	printf("Ingrese un numero base para potenciar:	");							/*Se pide un numero que se usara como base*/
	scanf("%d",&base);															/*Se ingresa el numero*/
	printf("Ingrese un numero exponente:	");									/*Se pide otro numero que se usara como exponente*/
	scanf("%d",&expo);															/*Se ingresa el otro numero*/
	
	for(j;j<=expo;j++){															/*Se inicia un for que se repetira las mismas veces que el numero ingresado como exponente*/
	pot=pot*base;																/*Aqui se hace la operacion para calcular el resultado*/
	}
	printf("El resultado de imprimir la base n veces es:	%d",pot);			/*Se imprime el resultado*/
	return 0;																	/*Termna el programa*/
}
