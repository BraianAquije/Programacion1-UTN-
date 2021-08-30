/*
 ============================================================================
 Name        : Ejercicio1-2.c
 Author      : Aquije Matta Braian (1E)

	Ejercicio 1-2:
	Ingresar 5 números. Determinar cuál es el máximo y el mínimo e indicar en qué orden
	fue ingresado.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int numeroIngresado;
	int numeroMayor=0;
	int numeroMenor=0;
	int numeroDeOrdenMayor=0;
	int numeroDeOrdenMenor=0;
	int flagMayores = 1;
	int flagMenores = 1;

	int i=1;

	for(i=1;i<6;i++){
		printf("Ingrese un numero: ");
		scanf("%d",&numeroIngresado);

		if(flagMayores == 1 || numeroIngresado > numeroMayor){
			numeroMayor = numeroIngresado;
			numeroDeOrdenMayor = i;
			flagMayores=0;
		}

		if (flagMenores == 1 || numeroIngresado < numeroMenor){
			numeroMenor= numeroIngresado;
			numeroDeOrdenMenor=i;
			flagMenores=0;
		}
	}

	printf("El numero mayor es: %d en el orden %d\n",numeroMayor,numeroDeOrdenMayor);
	printf("El numero menor es: %d en el orden %d",numeroMenor,numeroDeOrdenMenor);


	return EXIT_SUCCESS;
}
