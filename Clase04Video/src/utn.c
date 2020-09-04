#include <stdio.h>
#include <stdlib.h>



int dividir(float* pResultado, int operador1, int operador2)
{
	int retorno = -1;
	float resultado;
	if(pResultado != NULL && operador2 != 0)
	{
		resultado = (float)operador1 / operador2;
		*pResultado = resultado;
		retorno = 0;
	}
	return retorno;
}
int utn_getNumero(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos)
{
	int bufferInt;
	int retorno =-1;

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL/* && minimo <= maximo*/ && reintentos >= 0)
	{
		while(reintentos>=0)
		{
			printf(mensaje);
			fflush(stdin);
			scanf("%d",&bufferInt);

			if(bufferInt > minimo && bufferInt < maximo)
			{
				retorno = 0;
				*pResultado = bufferInt;
				break;
			}
			else
			{
				reintentos--;
				printf("%s",mensajeError);
			}

		}
	}
	return retorno;
}
int utn_getCaracter(char* pResultado,char* mensaje,char* mensajeError,char minimo,char maximo,int reintentos)
{
	char bufferChar;
	int retorno =-1;

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		while(reintentos>0)
		{
			printf("%s",mensaje);
			scanf("%s",&bufferChar);

			if(bufferChar > minimo && bufferChar < maximo)
			{
				retorno = 0;
				*pResultado = bufferChar;
				break;
			}
			fflush(stdin);
			reintentos--;
			printf("%s",mensajeError);
		}
	}
	return retorno;
}
