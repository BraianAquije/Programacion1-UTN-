/*
 ============================================================================
 Name        : Ejercicio1-1.c
 Author      : Aquije Matta Braian

	Ejercicio 1-1:
	Ingresar números enteros, hasta que el usuario lo decida. Calcular y mostrar:
	a) El promedio de los números positivos.
	b) El promedio de los números negativos.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int numeroIngresado;
	int contadorPositivos=0;
	int contadorNegativos=0;
	int acumuladorPositivos=0;
	int acumuladorNegativos=0;
	float promedioPositivos;
	float promedioNegativos;
	char respuesta = 's';

	while (respuesta == 's'){
		printf("Ingrese un numero: ");
		scanf("%d",&numeroIngresado);

		if(numeroIngresado >0){
			contadorPositivos++;
			acumuladorPositivos=acumuladorPositivos+numeroIngresado;
		}
		else{
			if(numeroIngresado <0){
				contadorNegativos++;
				acumuladorNegativos=acumuladorNegativos+numeroIngresado;
			}
		}
		printf("Desea seguir ingresando numeros? s/n");
		fflush(stdin);
		scanf("%c",&respuesta);
	}

	if(contadorPositivos>0){
		promedioPositivos = (float)acumuladorPositivos/contadorPositivos;
	printf("El promedio de los números positivos es: %.2f\n",promedioPositivos);
	}
	else{
		printf("No se ingresaron numeros positivos");
	}
	if(contadorNegativos <0){
		promedioNegativos = (float)acumuladorNegativos/contadorNegativos;
	printf("El promedio de los números negativos es: %.2f ",promedioNegativos);
	}
	else{
			printf("No se ingresaron numeros negativos");
		}
	return EXIT_SUCCESS;
}
