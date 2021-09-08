/*
 ============================================================================
 Name        : Ejercicio3-3.c
 Author      : Aquije Matta Braian

 Ejercicio 3-3:
 Crear una función que pida el ingreso de un entero y lo retorne.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int DevolverNumero(void );

int main(void) {
	setbuf(stdout, NULL);
	int devolucionNumero;

	devolucionNumero = DevolverNumero();

	printf("El numero que ingresaste es: %d", devolucionNumero);
	return EXIT_SUCCESS;
}

int DevolverNumero(void){

	int numeroIngresado;
	printf("Ingrese un numero: ");
	scanf("%d", &numeroIngresado);

	return numeroIngresado;

}
