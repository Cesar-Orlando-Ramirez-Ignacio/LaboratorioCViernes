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
	float x, r;                                         /* Declaracion de variables*/ 
	printf("Ingrese un valor del 0 al 10 para x\n");    /* Pedimos al usuario dar un numero*/
	scanf("%f",&x);                                     /* Se ingresa el numero*/   
	
	r=2-(-2*(x+1)-(x-3)/2);                             /* Se ejecuta el problema a resolver*/ 
	printf("El resultado del problema es: %.2f",r);     /* Se imprime el resultado*/
	 
	return 0;
}
