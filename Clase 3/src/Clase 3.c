/*
 ============================================================================
 Name        : Clase.c
 Author      : Marcos Seghesio
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sumarEnteros(int operadorA, int operadorB);
float dividirEnteros(int operadorA, int operadorB, float *resultado);


int main(void) {

	float numero;
	//resultado = sumarEnteros(14,22);
	if(dividirEnteros(14,0,&numero) == 0)
	{
		printf("%f",numero);
	}

	return EXIT_SUCCESS;
}

int sumarEnteros(int operadorA, int operadorB)
{
	int resultado;
	resultado = operadorA + operadorB;
	return resultado;
}
float dividirEnteros(int operadorA, int operadorB, float *resultado)
{
	int retorno;
	if (operadorB != 0)
	{
		*resultado = (float)operadorA / operadorB;
		retorno = 0;
	}
	else
	{
		retorno = -1;
	}
	return retorno;
}

