/*
 ============================================================================
 Name        : Ejercicio3-1.c
 Author      : Aquije Matta Braian

Ejercicio 3-1:
Crear una funci�n que muestre por pantalla el n�mero flotante  que recibe como par�metro.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void MostrarFlotante(float flotante);

int main(void) {
	setbuf(stdout,NULL);

	MostrarFlotante(2.5);

	return EXIT_SUCCESS;
}

void MostrarFlotante(float flotante){

	printf("El numero ingresado es: %f",flotante);
}
