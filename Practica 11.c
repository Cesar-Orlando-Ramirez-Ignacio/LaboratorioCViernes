/*
	Autor:		Cesar Orlando Ramirez Ignacio
	Fecha:		26/10/2019
	Grupo:		006
	Horario:	Viernes 7:00am-9:00am
	Matricula:	1860455
*/

#include <stdio.h>
#include <string.h>
int main(void){
	/***********Actividad #1**********/
	int i,N,sum=0,j,may=0,mcal;//Variables
	

	printf("Ingrese numero de estudiantes: ");//Imprime que ingreses numero de alumnos
	scanf("%d",&N);//Lee el numero de estudiantes
	struct Estudiantes{
		char nombre[50];
		char sexo[20];
		int edad;
		int notas[5];
	}Es[N];
//Guarda los datos de los estudiantes
	for(i=0;i<N;i++){
		printf("\n\nIngrese nombre:	");
		fflush(stdin);
		gets(Es[i].nombre);
		printf("Ingrese sexo: ");
		gets(Es[i].sexo);
		printf("Ingrese edad: ");
		scanf("%d",&Es[i].edad);
		printf("\n\n");
		for(j=0;j<5;j++){
			fflush(stdin);
			printf("Ingrese calificacion %d: ",j+1);
			fflush(stdin);
			scanf("%d",&Es[i].notas[j]);
			sum=sum+Es[i].notas[j];
		}
		if(sum>may){
			may=sum;
			mcal=i;
		}
		printf("Su calificacion es: %d ",sum/5);
		sum=0;
	}
//Ciclo que repite ingresar los datos del alumno
	fflush(stdin);//Limpiar el buffer
	printf("\n\nEl estudiante con mayor promedio es %s",Es[mcal].nombre);
	//Imprime el estudiante con mayor calificacion
	int n,edad;//Variables
	printf("\n\n\nIngrese el numero de pandas: ");//Te pide ingresar el numero de pandas
	scanf("%d",&n);//Ingresas el numero de pandas
	struct Panda{
		char nombre[20];
		int peso;
		int fnaci;
		char sexo[20];
	}Pa[n];
	//Guarda los datos de los pandas
	void LeerPanda(){
		printf("\nIngrese nombre: ");
		fflush(stdin);
		gets(Pa[n].nombre);
		printf("Ingrese peso: ");
		fflush(stdin);
		scanf("%d",&Pa[n].peso);
		printf("Ingrese año de nacimiento: ");
		fflush(stdin);
		scanf("%d",&Pa[n].fnaci);
		printf("Ingrese sexo: ");
		fflush(stdin);
		gets(Pa[n].sexo);
	}
	//Ingresa los datos de los pandas	
	int EdadPanda(){
		edad=2019-Pa[n].fnaci;
		printf("La edad del panda es %d",edad);
	}
	//Calcula la edad del panda
	int TenerBebes(){
		if(edad>5){
			printf("\n1\n");
		}else {
			printf("\n0\n");
		}
	}//Imprime 1 si puede tener crias y 0 si no
	
	for(i=0;i<n;i++){
		LeerPanda();
		EdadPanda();
		TenerBebes();
	}
	//Ciclo que repite ingresar los datos de los pandas
	return 0;
}
