/*
 ============================================================================
 Name        : Ejercicio3-2.c
 Author      : Aquije Matta Braian

Ejercicio 3-2:
Crear una función que permita determinar si un número es
par o no. La función retorna 1 en caso afirmativo y 0
en caso contrario. Probar en el main.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int VerificarPar (int numeroIngresado);

int main(void) {
	setbuf(stdout,NULL);
	int numero;

	printf("Ingrese un numero: ");
	scanf("%d",&numero);

	numero=VerificarPar(numero);

	if(numero ==1){
	printf("El numero ingresado es par");
	}
	else{
		if(numero ==0){
			printf("El numero ingresado es impar");
		}
	}

	return EXIT_SUCCESS;
}

int VerificarPar (int numeroIngresado){
	int numeroParaVerificar;

	if(numeroIngresado%2==0){
		numeroParaVerificar=1;
	}
	else{
		numeroParaVerificar=0;
	}

	return numeroParaVerificar;
}
