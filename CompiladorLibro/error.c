//error.c

#include "global.h"

int error(m) /* genera todos los mensajes de error */
char* m;
{
	fprintf(stderr, "l�nea %d: %s \n", numlinea, m);

	exit(1); /* terminaci�n sin �xito */
}