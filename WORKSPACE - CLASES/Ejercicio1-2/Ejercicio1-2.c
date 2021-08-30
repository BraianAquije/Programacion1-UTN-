/*
 ============================================================================
 Name        : Ejercicio1-2.c
 Author      : Aquije Matta Braian

 Ejercicio 1-2: ingresar 3 números y mostrar cuál de los tres es el mayor.
Ejemplo:
Si ingresamos 5, 9 y 3 el programa mostrará: “El mayor de los números es el segundo”
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf (stdout, NULL);
	int primerNumero;
	int segundoNumero;
	int tercerNumero;

	printf("Ingrese un numero: ");
	scanf("%d",&primerNumero);

	printf("Ingrese un segundo numero: ");
	scanf("%d",&segundoNumero);

	printf("Ingrese un tercer numero: ");
	scanf("%d",&tercerNumero);

	if(primerNumero > segundoNumero && primerNumero > tercerNumero){
		printf("El numero mas grande es el primero");
	}
	else{
		if(segundoNumero > tercerNumero){
			printf("El numero mas grande es el segundo");
		}
		else{
			printf("El numero mas grande es el tercero");
		}
	}

	return EXIT_SUCCESS;
}
