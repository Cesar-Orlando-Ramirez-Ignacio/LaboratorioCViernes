/*
	Autor:		Cesar Orlando Ramirez Ignacio
	Fecha:		01/11/2019
	Grupo:		006
	Horario:	7:00am-9:00am
	Matricula:	1860455
*/

#include <stdio.h>
#include <string.h>
int main(){
	/***********ACTIVIDAD #1***********/
	char texto[50]; //variable tipo char, cadena de caracteres
	int aa=0,ee=0,ii=0,oo=0,uu=0,j,*a, *e, *i, *o, *u; //variables enteras, punteros y contadores
	printf("Ingrese un mensaje:	"); //Pide que se ingrese un mensaje
	gets(texto); //se ingresa el mensaje y se guarda en variable char texto
	for(j=0;j<50;j++){ //se empieza un ciclo para empezar a contar las vocales, dentro los contadores estaran aumentando en 1 cada que pasa y se cumple la condicion
		if(texto[j]=='A'||texto[j]=='a'){aa++;}else if(texto[j]=='E'||texto[j]=='e'){ee++;}else if(texto[j]=='I'||texto[j]=='i'){ii++;}
		else if(texto[j]=='O'||texto[j]=='o'){oo++;}else if(texto[j]=='U'||texto[j]=='u'){uu++;}		
	}
	a=&aa, e=&ee, i=&ii, o=&oo, u=&uu; //se da el valor de los contadores a los punteros
	printf("A= %d\nE= %d\nI= %d\nO= %d\nU= %d\n",*a,*e,*i,*o,*u); 	//se imprime el valor que recibieron los punteros

	/***********ACTIVIDAD #2***********/
	int V1=15,V2=20; //variables tipo entero que se les definio un valor
	int *A,*B; // Se establecieron punteros
	A=&V1; //se le da un valor de una variable con valor al puntero
	B=&V2; //se le da un valor de una variable con valor al puntero
	printf("La suma es: %d",*A+*B); //se imprime la suma de los valores de los punteros
	return 0; //termina el programa
}
