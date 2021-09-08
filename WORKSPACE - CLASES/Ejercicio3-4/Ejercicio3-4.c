/*
 ============================================================================
 Name        : Ejercicio3-4.c
 Author      : Aquije Matta Braian


 Ejercicio 3-4:
 Especializar la función anterior para que permita validar el entero ingresado en un rango determinado.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "BibliotecaNueva.h"


int main(void) {
	setbuf(stdout, NULL);
	int entero;

	entero = PedirEntero("Ingrese entero: ", 0, 100);

	printf("El numero es: %d\n", entero);


	return EXIT_SUCCESS;
}
