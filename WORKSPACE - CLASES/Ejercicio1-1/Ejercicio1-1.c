/*
 ============================================================================
 Name        : Ejercicio1-1.c
 Author      : Aquije Matta Braian

 Ejercicio 1-1: Ingresar dos números enteros, sumarlos y mostrar el resultado.
Ejemplo:
Si ingresamos 3 y 2 el programa mostrará: “La suma entre 3 y 2 da como resultado 5”

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf (stdout, NULL);
	int unNumero;
	int otroNumero;
	int suma;

	printf("Ingrese un numero: ");
	scanf("%d", &unNumero);

	printf("Ingrese un numero: ");
	scanf("%d", &otroNumero);

	suma = unNumero + otroNumero;

	printf("La suma entre %d y %d da como resultado: %d ",unNumero,otroNumero,suma);

	return EXIT_SUCCESS;
}
