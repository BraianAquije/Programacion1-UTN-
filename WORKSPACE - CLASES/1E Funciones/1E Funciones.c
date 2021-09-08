/*
 ============================================================================
 Name        : 1E.c
 Author      : Aquije Matta Braian
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

/*
 *
 *
 * */

//1. Definicion de la funcion (prototipo - Firma)
// que devuelve? (int, float, char, void) ComoSeLlama (que recibe) Argumento ->parametros

int SumarNumeros(int primerNumero, int segundoNumero);
void MostrarUnEntero (int valor);

int main(void) {
	int suma;
	setbuf(stdout,NULL);

	//.3 Llamada
	suma = SumarNumeros(4,9);//parametros actuales
	MostrarUnEntero(suma);

	return EXIT_SUCCESS;
}



//2.Implementacion  o desarrollo
int SumarNumeros (int primerNumero, int segundoNumero)//Parametros formales
{//Scope de la función
	int resultado;

	resultado = primerNumero + segundoNumero;

	return resultado;
}



void MostrarUnEntero (int valor)
{
	printf("Mostrar valor %d",valor);
}

