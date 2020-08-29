/*
Se pide una cantidad indeterminada de edades enteras, informar:
 A-el máximo ingresado
 B-el mínimo ingresado
 C-el promedio
 D- la cantidad de edades ingresadas
 ____
 Ademas de la edad ingresar el estado civil de la persona ( 's' para soltera , 'c' para casada, 'd' divorciada)
 ademas de informar lo anterior ....informar:
 la persona mas joven de las casadas
 a persona mas vieja de las solteras
 de los estados civiles , cual fue el mas ingresado
 */

#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 1

int main(void) {
	setbuf(stdout,NULL);
	//Ingreso
	int edadIngresada;
	char estadoCivilIngresado;

	// A
	int maximoIngresado;
	int minimoIngresado;
	//C
	float promedio;
	int acumuladorEdadesIngresadas = 0;
	int contadorEdadesIngresadas = 0;
	//D

	int menorEdadCasado;
	//E

	int mayorEdadSoltero;
	//F
	int contadorSolteros = 0;
	int contadorCasados = 0;
	int contadorDivorciados = 0;

	//Auxiliar
	int resultadoIngreso;
	int ordenSeguir;
	setbuf(stdout,NULL);
	do
	{
		printf("Ingrese la edad de la persona\n");
		fflush(stdin);
		resultadoIngreso = scanf("%d", &edadIngresada);
		while(resultadoIngreso == 0)
		{
			printf("Error. Ingrese la edad de la persona\n");
			fflush(stdin);
			resultadoIngreso = scanf("%d", &edadIngresada);
		}
		printf("Ingrese el estado civil.\n");
		fflush(stdin);
		scanf("%c", &estadoCivilIngresado);
		while(estadoCivilIngresado != 'c' && estadoCivilIngresado != 'd' && estadoCivilIngresado != 's')
		{
			printf("Ingrese el estado civil.\n");
			fflush(stdin);
			resultadoIngreso = scanf("%c", &estadoCivilIngresado);
		}

		if(contadorEdadesIngresadas == 0)
		{
			maximoIngresado = edadIngresada;
			minimoIngresado = edadIngresada;
		}
		else
		{
			if(edadIngresada > maximoIngresado)
			{
				maximoIngresado = edadIngresada;
			}
			else
			{
				if (edadIngresada < minimoIngresado)
				{
					minimoIngresado = edadIngresada;
				}
			}
		}
		acumuladorEdadesIngresadas+= edadIngresada;
		contadorEdadesIngresadas++;
		switch(estadoCivilIngresado)
		{
			case 'c':
				if(contadorCasados == 0)
				{
					menorEdadCasado = edadIngresada;
				}
				else
				{
					if (edadIngresada < menorEdadCasado)
					{
						menorEdadCasado = edadIngresada;
					}
				}
				contadorCasados++;
				break;
			case 's':
				if(contadorSolteros == 0)
				{
					mayorEdadSoltero = edadIngresada;
				}
				else
				{
					if (edadIngresada > mayorEdadSoltero)
					{
						mayorEdadSoltero = edadIngresada;
					}
				}
				contadorSolteros++;
				break;
			case 'd':
				contadorDivorciados++;
				break;
		}
		printf("¿Desea continuar? escriba '1' para hacerlo.\n");
		fflush(stdin);
		scanf("%d", &ordenSeguir);

	}
	while(ordenSeguir == 1);



	promedio = (float) acumuladorEdadesIngresadas / contadorEdadesIngresadas;

	printf("La edad maxima ingresada es: %d.\n", maximoIngresado);
	printf("Edad minima ingresada es: %d.\n", minimoIngresado);
	printf("El promedio de edad ingresadas es: %.2f\n", promedio);
	if (contadorSolteros == 0)
	{
		printf("No hay Solteros ingresados.\n");
	}
	else
	{
		printf("Soltero de mayor edad: %d\n", mayorEdadSoltero);
	}
	if(contadorCasados == 0)
	{
		printf("No hay casados ingresados.\n");
	}
	else
	{
		printf("Casado de menor edad: %d\n", menorEdadCasado);
	}


	if(contadorSolteros > contadorCasados)
		{
			if(contadorSolteros > contadorDivorciados)
			{
				printf("Estado civil con mayor ingresos: solteros.\n");
			}
			else
			{
				printf("Estado civil con mayor ingresos: divorciados.\n");
			}
		}
		else
		{
			if(contadorCasados > contadorDivorciados)
			{
				printf("Estado civil con mayor ingresos: casados.\n");
			}
			else
			{
				printf("Estado civil con mayor ingresos: divorciados.\n");
			}
		}

	return EXIT_SUCCESS;
}
