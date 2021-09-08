#include "BibliotecaNueva.h"

int PedirEntero(char mensaje[], int min, int max) {

	int numeroIngresado;
	int numMin;
	int numMax;

	numMin = min;
	numMax = max;

	printf("%s: ", mensaje);
	scanf("%d", &numeroIngresado);

	while (numeroIngresado < numMin || numeroIngresado > numMax) {
		printf("Re%s: ", mensaje);
		scanf("%d", &numeroIngresado);
	}

	return numeroIngresado;
}
