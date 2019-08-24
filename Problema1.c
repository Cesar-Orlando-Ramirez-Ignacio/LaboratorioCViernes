#include <stdio.h>
#include <stdlib.h>

/*
   Autor: Cesar Orlando Ramirez Ignacio
   Fecha: 24/08/2019
   grupot: 006
   Horario: 7am-9am
   Matricula: 1860455
*/

int main() {
	float x, r;                                           /* Declaracion de variables*/
	printf("Ingrese un valor del 0 al 10 para x\n");      /* Pedimos al usuario dar un numero*/
	scanf("%f",&x);                                       /* Se ingresa el numero*/
	 
	r=(x-1)/4-(x-5)/36;                                   /* Se ejecuta el problema a resolver*/
	printf("El resultado de la operacion es: %.2f",r);    /* Se imprime el resultado*/
	return 0;
}
