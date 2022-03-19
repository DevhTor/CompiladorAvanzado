#ifndef GLOBAL_H
#define GLOBAL_H
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define TAMBUFF 128
#define NINGUNO  -1
#define FDC     '\0'

#define NUM     256
#define DIV     257
#define MOD     258 //modulo
#define ID      259 //identificador
#define FIN     260 //fin de archivo
#define MAXLEX	999 //tamaño maximo de lexemas
#define MAXSIMN	100 //maximo numero de simbolos



extern int valcomplex; //valor compilador lexico
extern int numlinea; //numero de linea

struct entrada { //estructura entrada para tabla de simbolos

	char* aplex; //lexema
	int complex; //codigo lexico.
};

extern struct entrada tablasimb[]; //tabla de simbolos


#endif#pragma once
