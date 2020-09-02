/*
 ============================================================================
 Name        : DigameComoSeLlama.c
 Author      : Marcos Seghesio
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {
	setbuf(stdout,NULL);
	char solucion[150] = 'ra';
	int respuesta;
	int resultadoRespuesta;

	printf("Digame como se llama.\n");
	printf("Elija su respuesta con el número asociado\n");
	printf("1- Soy Mauro Goldfarg.\n2- Soy Mauro Viale.\n3- Usted avaló la bomba a la AMIA.\n");
	fflush(stdin);
	resultadoRespuesta = scanf("%d", &respuesta);
	while(respuesta >3 || respuesta <0 || resultadoRespuesta == 0)
	{
		printf("Digame como se llama.\n");
		printf("Elija su respuesta con el número asociado\n");
		printf("1- Soy Mauro Goldfarg.\n2- Soy Mauro Viale.\n3- Usted avaló la bomba a la AMIA.\n");
		fflush(stdin);
		resultadoRespuesta = scanf("%d", &respuesta);
	}

	switch(respuesta)
	{
		case 1:
			solucion = "Problema solucionado.";
			break;
		case 2:
			solucion= "No me ha dicho su nombre.";
			break;
		case 3:
			printf("Usted no puede decirme eso. De la ultima persona que podría esperar algo así es de usted.\n");
			printf("Usted debe arrepentirse de lo que dijo.\n");
			printf("1- Me retracto.\n2- Nos conocemos bien, pague sus impuestos.\n");
			fflush(stdin);
			resultadoRespuesta = scanf("%d", &respuesta);



	}

	return EXIT_SUCCESS;
}
