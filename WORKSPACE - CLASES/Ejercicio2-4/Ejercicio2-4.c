/*
 ============================================================================
 Name        : Ejercicio2-4.c
 Author      : Aquije Matta Braian


 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout,NULL);
	char ingreseUnaLetra;
	int contadorDeP=0;
	int i=0;

	for(i=0;i<5;i++){
		printf("Ingrese una letra: ");
		fflush(stdin);
		scanf("%c",&ingreseUnaLetra);

		if(ingreseUnaLetra == 'p'){
			contadorDeP++;
		}
	}
	printf("La cantidad de P ingresadas es de: %d",contadorDeP);
	return EXIT_SUCCESS;
}
