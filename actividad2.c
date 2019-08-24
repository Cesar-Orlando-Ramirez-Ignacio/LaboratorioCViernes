#include <stdio.h>
#include <stdlib.h>

/* Autor: Cesar Orlando Ramirez Ignacio
   fecha: 24/08/2019
   grupo: 006
   Horario: viernes 7am-9am
   Matricula: 1860455*/
 

int main() {
	float x, rf1, rf2;                                      /* Se dan las variables que se utilizaran*/
	printf("Ingresar el valor de x entre 0 y 10\n");        /*Pedimos al usuario introducir un valor del 0 al 10*/
	scanf("%f",&x);                                         /* El usuario introduce el valor */
	 
	rf1=(2/3)*(x-(1-(x-2)/2))+1;                            /* Se ejecuta la operacion para darle el valor a la variable*/
	rf2=2-(-2*(x+1)-(x-3)/2);                               /* Se ejecuta la operacion para darle el valor a la variable*/
	
	printf("El valor de la funcion 1 es: %.2f\n",rf1);      /* Nos imprime el valor de la variable*/
	printf("El valor de la funcion 2 es: %.2f\n",rf2);      /* Nos imprime el valor de la variable*/
	return 0;
}
