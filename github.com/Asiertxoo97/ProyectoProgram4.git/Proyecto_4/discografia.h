/*
 * discografia.h
 *
 *  Created on: 2 de abr. de 2017
 *      Author: asier_000
 */

#include "miembro.h"

typedef struct{

	char * nombre;
	float duracion;

	Cancion * cancion;
	int numCanciones;


}Discografia;

void añadirDisco(Discografia * discografia, Cancion * cancion);

void borrarDisco();

void mostrarDiscografia();
