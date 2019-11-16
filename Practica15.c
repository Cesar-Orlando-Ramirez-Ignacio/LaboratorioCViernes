/*
	Autor:		Cesar Orlando Ramirez Ignacio
	Fecha:		15/11/2019
	Grupo:		#006
	Horario:	Viernes 7:00am-9:00am
	Matricula:	1860455	
*/

#include<stdio.h>
#include<string.h>
int main(){
	//***********Actividad #1***********//
	char texto[50],temporal;	//declaracion de variables
	int i,j,longitud;
	FILE *pf,*fp;				//Declaracion de archivos
	
	pf=fopen("archivo.txt","w");	//Se abre el archivo
	
	printf("Ingrese un texto: ");	//imprime ingresar texto
	scanf("%s",&texto);				//ingresa texto
	longitud=strlen(texto);			//lee la longitud del texto ingresado
	fprintf(pf,"%s\n",texto);		//imprime el el texto en el archivo
	pf=freopen("archivo.txt","r",pf);	//se abre el archivo en forma de lectura
	
	
	rewind(pf);						//se regresa al inicio del texto
	fclose(pf);						//se cierra el texto
	
	fp=fopen("archivo_alreves.txt","w");	//se crea otro archivo de texto
	for (i=0,j=longitud-1; i<longitud/2; i++,j--){	//ciclo for anidado para invertir el texto escrito antes
	temporal=texto[i];
	texto[i]=texto[j];
	texto[j]=temporal;
}
	fprintf(fp,"%s\n",texto);				//imprime el texto invertido en el archivo
	fp=freopen("archivo_alreves","r",fp);	//se abre el archivo en forma de lectura
	fclose(fp);								//se cierra el archivp
	
	/***********Actividad #2***********/
	FILE *x,*y;								//declaracion de archivo
	int a,b;								//declaracion de variables
	x=fopen("Numeros.txt","w");				//se crea un archivo de texto
	printf("\n\nIngrese valor para a: ");	//se pide valor para a
	scanf("%d",&a);							//se ingresa valor para a
	printf("Ingrese valor para b: ");		//se pide valor para b
	scanf("%d",&b);							//se inrgesa valor para b
	fprintf(x,"A= %d\nB= %d",a,b);			//se imprimen a y b en el archivo de texto
	
	x=freopen("Numeros.txt","r",x);			//se abre el archivo en forma de lectura
	fclose(x);								//se cierra el archivo
	
	y=fopen("Suma.txt","w");				//se crea el archivo de texto
	fprintf(y,"\nLa suma de a y b es = %d",a+b);	//se imprime en el archivo la suma de a y b
	y=freopen("Suma.txt","r",x);					//se abre el archivo en forma de lectura
	fclose(y);								//se cierra el archivo
	return 0;
}
