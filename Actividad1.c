#include <stdio.h>
#include <stdlib.h>

/* Autor: Cesar Orlando Ramirez Ignacio
   fecha: 24/08/2019
   grupo: 006
   Horario: viernes 7am-9am
   Matricula: 1860455*/

int main() {
	float r,x;
	printf("Introduzca un valor del 0 al 10 para x\n");
	scanf("%f",&x);
	r=(x-1)/4-(x-5)/36;
	printf("El resultado es %.2f:",r);
	return 0;
}
