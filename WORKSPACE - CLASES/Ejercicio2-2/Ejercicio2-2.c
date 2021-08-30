/*
 ============================================================================
 Name        : Ejercicio2-2.c
 Author      : Aquije Matta Braian

Ejercicio 2-2:
Ingresar 10 números enteros, distintos de cero. Mostrar:
Cantidad de pares e impares.
El menor número ingresado.
De los pares el mayor número ingresado.
Suma de los positivos.
Producto de los negativos.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int numeroIngresado;
	int acumuladorPositivos=0;
	int cantidadPares=0;
	int cantidadImpares=0;
	int flagMenorNumero=1;
	int flagMayorPares = 1;
	int mayorPares=0;
	int menorNumeroIngresado=0;
	int productoNegativos=1;
	int i=0;

	for(i=0;i<10;i++){
		printf("Ingrese numero distinto a 0: ");
		scanf("%d",&numeroIngresado);
		while(numeroIngresado == 0){
			printf("Rengrese numero distinto a 0");
			scanf("%d",&numeroIngresado);
		}

		if(numeroIngresado%2==0){
			cantidadPares++;
			if(flagMayorPares == 1 || numeroIngresado >mayorPares ){
			mayorPares = numeroIngresado;
			}
		}else{
			cantidadImpares++;
		}

		if(flagMenorNumero==1 || numeroIngresado<menorNumeroIngresado){
			menorNumeroIngresado = numeroIngresado;
			flagMenorNumero =0;
		}

		if(numeroIngresado >0){
			acumuladorPositivos = acumuladorPositivos+numeroIngresado;
		}

		if(numeroIngresado <0){
			productoNegativos = productoNegativos*numeroIngresado;
		}
	}

	printf("Cantidad de pares %d e impares %d\n ",cantidadPares,cantidadImpares);
	printf("El menor número ingresado es: %d\n",menorNumeroIngresado);
	printf("El mayor número par ingresado es: %d\n ",mayorPares);
	printf("La suma de los positivo es: %d\n ",acumuladorPositivos);
	printf("El producto de los negativos es: %d\n ",productoNegativos);

	return EXIT_SUCCESS;
}
