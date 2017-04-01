/*
 * discografia.h
 *
 *  Created on: 2 de abr. de 2017
 *      Author: asier_000
 */
#include "Cancion.h"


typedef struct{

	char * nombre;
	float duracion;

	Cancion * cancion;


}Discografia;

void añadirDisco();

void borrarDisco();

void modificarDisco();

void mostrarDiscografia();
