/*
 ============================================================================
 Name        : Ejercicio1-3.c
 Author      : Aquije Matta Braian

Ejercicio 1-3: ingresar 3 números y mostrar el número del medio, sólo si existe. En caso de que no exista también informarlo.
Ejemplo:
1   5   3     el 3 es del medio
5   1   5    no hay numero del medio
3  5   1     el 3 es del medio
3   1   5    el 3 es del medio
5   3   1    el 3 es del medio

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int n1;
	int n2;
	int n3;

	printf("Ingrese un numero:");
	scanf("%d",&n1);

	printf("Ingrese un numero:");
	scanf("%d",&n2);

	printf("Ingrese un numero:");
	scanf("%d",&n3);

	if((n1>n2 && n1<n3) || (n1<n2 && n1>n3)){
		printf("El %d es el numero del medio",n1);
	}
	else{
		if((n2>n1 && n2<n3) || (n2<n1 && n1>n3)){
				printf("El %d es el numero del medio",n2);
			}
		else{
			if((n3>n2 && n3<n1) || (n3<n2 && n3>n1)){
					printf("El %d es el numero del medio",n3);
				}
			else{
				if(n1==n2 || n2==n3 ||  n1==n3){
						printf("No existe numero del medio");
					}
			}
		}
	}

	return EXIT_SUCCESS;
}
