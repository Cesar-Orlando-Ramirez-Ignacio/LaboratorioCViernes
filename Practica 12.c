/*	
	Autor:		Cesar Orlando Ramirez Ignacio
	Fecha:		25/10/2019
	Grupo:		006
	Horario:	Viernes 7:00am-9:00am
	Matricula:	1860455
*/


#include <stdio.h>
#include <math.h>


		/***********Actividad #1**********/
int main(void){
	int num,i,v1,v2,v3=0,v4,num2,pot;
		void numprim(v1,v2){
		v1=num;
		for(i=1;i<=v1;i++){
			v2=num%i;
			if(v2==0){
				v3++;
			}
		}
		
		if(v3!=2){
		printf("\n\nEl numero no es primo\n");
		}else if(v3==2){
			printf("\n\nEl numero es primo\n");
		}
	}
	printf("Ingrese un numero entero mayor a cero: ");
	do{

		scanf("%d",&num);
		if(num<0){
			printf("\nEl numero no es mayor a cero ingrese otro diferente: ");
		}
	}while(num<0);
	numprim(v1,v2);
	

	/**********Actividad #2**********/	
	
	
	int potencia(v4){
		v4=pow(num2,pot);
		printf("\n\nEl numero %d elevado a la %d es %d",num2,pot,v4);
	}
	printf("\n\nIngrese otro numero entero mayor a cero: ");

	do{

		scanf("%d",&num2);
		if(num2<0){
		printf("\nEl numero no es mayor a cero ingrese otro diferente: ");
		fflush(stdin);	
		}
	}while(num2<0);
	printf("\nIngrese un numero como potencia: ");
	scanf("%d",&pot);
	
	potencia(v4);
	
	return 0;
}
