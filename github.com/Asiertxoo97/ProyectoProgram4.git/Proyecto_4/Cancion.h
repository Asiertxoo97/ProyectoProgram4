/*
 * Cancion.h
 *
 *  Created on: 2 de abr. de 2017
 *      Author: asier_000
 */

typedef struct{

	char * nombre;
	float duracion;

}Cancion;


int a�adirCancion(Cancion * cancion);

void borrarCancion(Cancion * cancion);

void mostrarCancion(Cancion cancion[],int numCanciones);
