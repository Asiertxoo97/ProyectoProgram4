/*
 * miembro.h
 *
 *  Created on: 2 de abr. de 2017
 *      Author: asier_000
 */

typedef struct{

	char * nombre;
	char * apellido;
	char instrumento;


}Miembro;

void anyadirMiembro(Miembro * miembro);

void borrarMiembro(Miembro * miembro);

void modificarMiembro(Miembro * miembro);

void mostrarMiembro(Miembro miembro[]);
