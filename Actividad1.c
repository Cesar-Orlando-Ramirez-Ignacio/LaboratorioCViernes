#include <stdio.h>
#include <stdlib.h>

/* Autor: Cesar Orlando Ramirez Ignacio
   fecha: 24/08/2019
   grupo: 006
   Horario: viernes 7am-9am
   Matricula: 1860455*/

int main() {
	float rf1,x, rf2;
	printf("Introduzca un valor del 0 al 10 para x\n");
	scanf("%f",&x);
	rf1=(x-1)/4-(x-5)/36;
	printf("El resultado de la funcion 1 es: %.2f\n",rf1);
	
	rf2=6*((x+1)/8-(2*x-3)/16);
	printf("El resultado de la funcion 2 es: %.2f",rf2);
	
	
	
	return 0;
}
