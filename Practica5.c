/*
   Autor: Cesar Orlando Ramirez Ignacio
   Fecha: 06/09/2019
   Grupo: 006
   Horario: 7:00am-9:00am
   Matricula: 1860455*/
#include <stdio.h>


/*Aqui empieza avtividad #1*/
int main(){
	int nota, ndia;                                                           /*Declaracion de variables*/
	printf("Ingrese la nota de su materia que se encuentra del 0 al 10\n");   /*Imprimi pedir un numero*/
	scanf("%d",&nota);                                                        /*Se ingresa el numero*/
	
	if(nota<=10&nota>=5){                                                     /*Si se cumple la condicion, hace lo que hay en ella*/
		printf("APTO");                                                       /*Se cumplio la condicion*/
	} else if(nota>=0&nota<5){                                                /*Si se cumpe la condicion, hace lo que hay en ella*/
		printf("NO APTO");                                                    /*Se cumplio la condicion*/
	} else printf("ERROR, NOTA INCORRECTA");                                  /*Imprime error por que no se cumplio ninguna condicion*/
	
	
	/*Aqui empieza avtividad #2*/
	printf("\n\nIngrese el dia de la semana segun los siguientes numeros:\n1, 2, 3, 4, 5, 6, 7\n");    /*Imprimo que ingrese un numero del  1 al 7*/
	scanf("%d",&ndia);                                                                            /*Se ingresa el numero*/
	
	switch(ndia) {                                                                                /*Segun el numero agregado hara una accion diferente, en este caso imprimira un dia*/
	case 1: {   printf("El dia es Domingo");                                                      /*Primera accion que se puede hacer*/ 
	break; }                                                                                      /*Termina esta accion y termina el switch*/
	
	case 2: {   printf ("El dia es Lunes");                                                       /*Seguna accion que se puede hacer*/
		break;                                                                                    /*Termina esta accion y termina el switch*/
	}
	 
	case 3: {	printf("El dia es Martes");                                                       /*Tercera accion que se puede hacer*/    
		break;   }                                                                                /*Termina esta accion y termina el switch*/
	
	case 4: {   printf("El dia es Miercoles");                                                    /*Cuarta accion que se puede hacer*/   
		break;;                                                                                   /*Termina esta accion y termina el switch*/
	}  
	
	case 5: {   printf("El dia es Jueves");                                                       /*Quinta accion que se puede hacer*/    
		break;;                                                                                   /*Termina esta accion y termina el switch*/
	}

	
	case 6: {   printf("El dia es Viernes");                                                      /*Sexta accion que se puede hacer*/   
		break;;                                                                                   /*Termina esta accion y termina el switch*/
	}                                                  
	
	case 7: {   printf("El dia es Sabado");                                                       /*Septima accion que se puede hacer*/     
		break;;                                                                                   /*Termina esta accion y termina el switch*/
	}                                                    
	
	default:  { printf("ERROR: Dia incorrecto");                                                  /*Como no se agrego un numero de la lista, imprime error*/
		break;;                                                                                   /*Termina esta accion y termina el switch*/
	}            
	}  
	
	
	/*Aqui empieza la actividad extra*/          
	
	int op;                                                                      /*Declaracion de variables*/
	printf("\n\nElija una opcion:\nOpcion #1\nOpcion #2\nOpcion #3\nOpcion #4\n");   /*Imprimimos un mensaje para pedir una opcion*/
	scanf("%d",&op);                                                             /*Ingresamos una opcion*/
	
	switch(op){                                                                  /*Empieza el switch*/
	
	case 1:{printf("Usted escogio la opcion #1");                                /*Si escogio opcion uno entrara aqui*/
		break;                                                                   /*Aqui se acaba la opcion que escogio y el switch*/
	}
	case 2:{ printf("Usted escogio la opcion #2");                               /*Si escogio opcion dos entrara aqui*/
		break;                                                                   /*Aqui se acaba la opcion que escogio y el switch*/
	}
	case 3:{printf("Usted escogio la opcion #3");                                /*Si escogio opcion tres entrara aqui*/
		break;                                                                   /*Aqui se acaba la opcion que escogio y el switch*/
	}
	case 4:{printf("Usted escogio la opcion #4");                                /*Si escogio opcion cuatro entrara aqui*/
		break;                                                                   /*Aqui se acaba la opcion que escogio y el switch*/
	}
	default:{printf("No escogio una opcion existente");                          /*Como no escogio una opcion valida existe el default pata imprimir que no escogio algo valido*/
		break;                                                                   /*Aqui se acaba el switch porque no escogio una opcion valida*/
	}
	
	}                                                          
	
	return 0;
}
