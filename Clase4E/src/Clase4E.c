#include <stdio.h>
#include <stdlib.h>
#include "utn.h"


int main(void) {
	setbuf(stdout,NULL);
	int edad;

	if(utn_getNumero(&edad,1,120,"Ingresame edad:\n","NAHHHHHH\n",3)==0)
	{
		printf("ingresaste:%d",edad);
	}



	return EXIT_SUCCESS;
}


