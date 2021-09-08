

#include "Biblioteca.h"

int PedirEntero(char mensaje[]) {

	int numeroIngresado;
	printf("%s: ", mensaje);
	scanf("%d", &numeroIngresado);

	return numeroIngresado;
}
