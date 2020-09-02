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
	int numero;
	int retorno =-1;

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		while(reintentos>0)
		{
			printf(mensaje);
			if(scanf("%d",&bufferInt) == 1)
			{
				if(bufferInt > minimo && bufferInt < maximo)
				{
					numero = bufferInt;
					break;
				}
				fflush(stdin);
				reintentos--;
				printf("%s",mensajeError);
			}

		}

		if (reintentos == 0)
		{
			retorno = -1;
		}
		else
		{
			retorno = 0;
			*pResultado = numero;
		}
	}
	return retorno;
}
