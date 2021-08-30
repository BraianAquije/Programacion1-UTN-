/*
 ============================================================================
 Name        : Ejercicio1-3.c
 Author      : Aquije Matta Braian (1E)

 Ejercicio 1-3:
 Realizar el algoritmo que permita ingresar los datos de los alumnos de una división de
 la UTN FRA, los datos solicitados son:
 Legajo
 Tipo cursada(L: "libre" - P: "presencial" – R: "remota")
 Cantidad de materias( mas de cero y menos de 8)
 Sexo (F: “femenino” – M: “masculino” , O: “no binario”)
 Nota promedio (entre 0 y 10)
 Edad (validar)
 Se debe informar de existir, o informar que no existe , en el caso que corresponda.
 a)
El Legajo del mejor promedio femenino.
 b) El legajo del más joven de los alumnos masculinos entre los que dan libre.
 c) El promedio de nota por sexo.
 d) La edad y legajo del que cursa más materias. (Sin importar su género)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int legajo;
	char tipoDeCursada;
	int cantMaterias;
	char sexo;
	int nota;
	int edad;

	int legajoMejorNotaFem=0;
	int mejorNotaFemenina=0;
	int flagMejorNota = 1;

	int legajoMasJovenMasculino=0;
	int flagMasJovenMasc=1;
	int edadMasJovenLibre=0;

	int acumuladorNotasFemenino=0;
	int acumuladorNotasMasculino=0;
	int acumuladorNotasNoBinario=0;
	int contadorFemenino=0;
	int contadorMasculino=0;
	int contadorNoBinario=0;

	int edadMasMaterias=0;
	int mayorCantidadDeMaterias=0;
	int legajoMasMaterias=0;
	int flagMasMaterias=1;

	float promedioNotaFemenino;
	float promedioNotaMasculino;
	float promedioNotaNoBinario;

	char respuesta = 's';

	while (respuesta == 's') {
		printf("Ingrese numero de legajo");
		scanf("%d", &legajo);

		printf("Tipo cursada(L: libre - P: presencial – R: remota)");
		fflush(stdin);
		scanf("%c", &tipoDeCursada);
		tipoDeCursada = tolower(tipoDeCursada);
		while (tipoDeCursada != 'l' && tipoDeCursada != 'p'	&& tipoDeCursada != 'r') {
			printf("Reingrese tipo cursada(L: libre - P: presencial – R: remota)");
			fflush(stdin);
			scanf("%c", &tipoDeCursada);
			tipoDeCursada = tolower(tipoDeCursada);
		}

		printf("Cantidad de materias( mas de cero y menos de 8)");
		scanf("%d", &cantMaterias);
		while (cantMaterias <1 && cantMaterias >8) {
			printf("Reingrese Cantidad de materias( mas de cero y menos de 8)");
			scanf("%d", &cantMaterias);
		}

		printf("Sexo (F: femenino – M: masculino , O: no binario)");
		fflush(stdin);
		scanf("%c", &sexo);
		sexo = tolower(sexo);
		while (sexo != 'f' && sexo != 'm'	&& sexo != 'o') {
			printf("Reingrese sexo (F: femenino – M: masculino , O: no binario)");
			fflush(stdin);
			scanf("%c", &sexo);
			sexo = tolower(sexo);
		}

		printf("Nota  (entre 0 y 10)");
		scanf("%d", &nota);
		while (nota <0 && nota >10) {
			printf("Reingrese nota  (entre 0 y 10)");
			scanf("%d", &nota);
		}

		printf("Edad (entre 18 y 100)");
			scanf("%d", &edad);
			while (edad <18 && edad >100) {
			printf("Reingrese Edad  (entre 18 y 100)");
			scanf("%d", &edad);
		}

		switch(sexo){
			case'f':
				contadorFemenino++;
				acumuladorNotasFemenino = acumuladorNotasFemenino+nota;
				if(flagMejorNota == 1 ||nota>mejorNotaFemenina){
					mejorNotaFemenina = nota;
					legajoMejorNotaFem = legajo;
					flagMejorNota = 0;
				}
				break;
			case'm':
				contadorMasculino++;
				acumuladorNotasMasculino = acumuladorNotasMasculino+nota;
				if (tipoDeCursada== 'l'){
				if(flagMasJovenMasc == 1 || edad < edadMasJovenLibre){
				    edadMasJovenLibre = nota;
					legajoMasJovenMasculino = legajo;
					flagMasJovenMasc = 0;
								}
				}
				break;
			case'o':
				contadorNoBinario++;
				acumuladorNotasNoBinario = acumuladorNotasNoBinario+nota;
				break;
		}

		if(flagMasMaterias == 1 || cantMaterias >mayorCantidadDeMaterias){
			mayorCantidadDeMaterias = cantMaterias;
			legajoMasMaterias = legajo;
			edadMasMaterias = edad;
		}

		printf("Desea seguir ingresando datos? s/n");
		fflush(stdin);
		scanf("%c", &respuesta);
	}

	if(legajoMejorNotaFem>0){
		printf("El Legajo del mejor promedio femenino: %d\n",legajoMejorNotaFem);}
	else{
		printf("No existe\n");}

	if(legajoMasJovenMasculino>0){
		printf("El legajo del más joven de los alumnos masculinos entre los que dan libre: %d\n",legajoMasJovenMasculino);}
	else{
		printf("No existe\n");}
	if(contadorFemenino>0){
		promedioNotaFemenino = (float)acumuladorNotasFemenino/contadorFemenino;
		printf("El promedio de nota por sexo femenino es: %f\n",promedioNotaFemenino);}
	else{
	if(contadorMasculino>0){
		promedioNotaMasculino = (float)acumuladorNotasMasculino/contadorMasculino;
	    printf("El promedio de nota por sexo masculino es: %f\n",promedioNotaMasculino);}
	else{
	if(contadorNoBinario>0){
		promedioNotaNoBinario = (float)acumuladorNotasNoBinario/contadorNoBinario;
		printf("El promedio de nota por sexo No Binario es: %f\n",promedioNotaNoBinario);}
		}

	if(legajoMasMaterias>0){
		printf("El que cursa mas materias tiene: %d anios y su numero de legajo es: %d ",edadMasMaterias,legajoMasMaterias);
	}
			}

	return EXIT_SUCCESS;
}
