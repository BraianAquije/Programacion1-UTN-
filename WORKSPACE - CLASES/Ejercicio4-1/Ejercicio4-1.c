/*
 ============================================================================
 Name        : Ejercicio4-1.c
 Author      : Aquije Matta Braian
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "BibliotecaNueva.h"

int CalcularFactorial (int numeroIngresado);

int main(void) {
	setbuf(stdout,NULL);
	int numero;

	numero = PedirEntero("Ingrese el valor: ");
	factorial= CalcularFactorial(numero);

	return EXIT_SUCCESS;
}

int CalcularFactorial (int numeroIngresado){
	int resultado;

	if(numeroIngresado==0)
	{
		resultado =1;
	}
	else
	{
		//n!=n*(n-1)!
		resultado = numeroIngresado * (CalcularFactorial(numeroIngresado-1));
	}

	return resultado;
}
