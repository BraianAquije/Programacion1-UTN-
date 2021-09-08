/*
 ============================================================================
 Name        : Ejercicio2-3.c
 Author      : Aquije Matta Braian

	Debemos alquilar el servicio de transporte para llegar a Mar del Plata con un grupo de personas,
	de cada persona debemos obtener los siguientes datos:
	- número de cliente,
	- estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
	- edad( solo mayores de edad, más de 17),
	- temperatura corporal (validar por favor)
	- genero('f' para femenino, 'm' para masculino, 'o' para no binario).

	NOTA: El precio por pasajero es de $600.

	Se debe informar (solo si corresponde):
	a) La cantidad de personas con estado "viudo" de más de 60 años.
	b) el número de cliente y edad de la mujer soltera más joven.
	c) cuánto sale el viaje total sin descuento.
	d) si hay más del 50% de los pasajeros que tiene más de 60 años , el precio final tiene un
	descuento del 25%, que solo mostramos si corresponde.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int numeroDeCliente;
	char estadoCivil;
	int edad;
	float temperatura;
	char genero;
	int cantidadViudo60=0;
	int flagMujerSoltera =1;
	int edadMujerSoltera = 0;
	int numeroClienteMujerSoltera = 0;
	int cantidadDePasajeros=0;
	int precioSinDescuento;
	float precioConDescuento=0;
	int cantidadPasajeros60=0;
	float porcentajePasajerosMayores;
	char respuesta ='s';

	const int PRECIO=600;

	while(respuesta =='s'){
		printf("Ingrese numero de cliente");
		scanf("%d",&numeroDeCliente);

		printf("estado civil (S para soltero-C para casado o V viudo)");
		fflush(stdin);
		scanf("%c",&estadoCivil);
		estadoCivil = tolower(estadoCivil);
		while(estadoCivil!='s' && estadoCivil!='c' && estadoCivil!='v'){
			printf("Re ingrese estado civil (S para soltero-C para casado o V viudo)");
			fflush(stdin);
			estadoCivil = tolower(estadoCivil);
			scanf("%c",&estadoCivil);
		}

		printf("Ingrese edad (mayor de 17)");
		scanf("%d",&edad);
		while(edad<17 || edad>101){
			printf("Reingrese edad (mayor de 17)");
			scanf("%d",&edad);
		}

		printf("Ingrese temperatura (entre 36 y 40)");
		scanf("%f",&temperatura);
		while(temperatura<26 || temperatura>41){
		printf("Reingrese edad (mayor de 17)");
		scanf("%f",&temperatura);
		}

		printf("Ingrese genero(F para femenino, M para masculino, O para no binario)");
		fflush(stdin);
		scanf("%c",&genero);
		genero = tolower(genero);
		while(genero!='f' && genero!='m' && genero!='o'){
			printf("Reingrese genero(F para femenino, M para masculino, O para no binario)");
			fflush(stdin);
			genero = tolower(genero);
			scanf("%c",&genero);
		}
		cantidadDePasajeros++;

		switch(estadoCivil){
		case 'v':
		if(edad >60){
			cantidadViudo60++;
		}
		break;
		case 's':
			if (genero =='f'){
			if (flagMujerSoltera == 1 || edad<edadMujerSoltera){
				edadMujerSoltera=edad;
				numeroClienteMujerSoltera =numeroDeCliente;
				flagMujerSoltera =0;
				}
			}
		break;
		}

		if(edad>60){
			cantidadPasajeros60++;
		}

		printf("Quiere seguir ingresando datos? s/n");
			fflush(stdin);
			scanf("%c",&respuesta);
		}

	precioSinDescuento = PRECIO*cantidadDePasajeros;
	porcentajePasajerosMayores = 100*cantidadPasajeros60/cantidadDePasajeros;

	printf("La cantidad de personas con estado viudo de más de 60 años es: %d\n",cantidadViudo60);
	printf("Número de cliente %d y edad %d de la mujer soltera más joven.\n",numeroClienteMujerSoltera,edadMujerSoltera);
	printf("El precio sin descuento es: %d\n",precioSinDescuento);
	if(porcentajePasajerosMayores>60){
		precioConDescuento=(float)precioConDescuento-(precioConDescuento*25/100);
		printf("25 de descuento: %f",precioConDescuento);
	}

	return EXIT_SUCCESS;
}
