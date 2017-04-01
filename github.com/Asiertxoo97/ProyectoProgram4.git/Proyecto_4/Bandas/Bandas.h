/*
 * Bandas.h
 *
 *  Created on: 28 de mar. de 2017
 *      Author: asier_000
 */

#include "miembro.h"
#include "discografia.h"

typedef struct{

	Miembro * miembros;

	char * nombre;

	Discografia * discografia;

	char * genero;

}Banda;
void registrarBanda();

char * mostrarDatosBanda();

void modificarBanda();

void mostrarBanda();
