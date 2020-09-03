/*
 ============================================================================
 Name        : Clase04Video.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"



int main(void) {
	setbuf(stdout,NULL);


	int respuesta;
	int edad;

	char caracter;


	/*respuesta = utn_getNumero(&edad, "Edad?\n","Error, la edad debe ser desde 0 a 199\n",0,199,2);
	if(respuesta == 0)
	{
		printf("La edad es: %d",edad);
	}
	else
	{
		printf("Error");
	}
*/
	respuesta = utn_getCaracter(&caracter, "letra?\n","Error, elija un simbolo del codigo ASCII\n",0,255,2);
	if(respuesta == 0)
	{
		printf("El simbolo es: %d",caracter);
	}
	else
	{
		printf("Error");
	}
	/*respuesta = utn_getNumero(&peso, "Peso=\n", "Error, el peso ingresado debe ser de 0 a 500", 0, 500,2);
	if(respuesta == 0)
	{
		printf("El peso es: %d",edad);
	}
	else
	{
		printf("Error");
	}*/
	/*printf("\nNumero 1: ");
	fflush(stdin);
	scanf("%d",&numero1);
	printf("\nNumero 2: ");
	fflush(stdin);
	scanf("%d",&numero2);
	*/
	/*respuesta = dividir(&resultado,numero1,numero2);
	if(respuesta == 0)
	{
		printf("El resultado es: %.2f.\n",resultado);
	}
	else
	{
		printf("No es posible dividir por cero\n.");
	}
	*/
	return EXIT_SUCCESS;
}




