/*
 * Usuario.h
 *
 *  Created on: 2 de abr. de 2017
 *      Author: asier_000
 */

typedef struct {

	char * nombre;
	char * apellido;
	char * nick;
	char * contraseņa;
	char * cuenta_bancaria;
	char * fecha_nacimiento;
	char * compras_realizadas;


}Usuario;

void aņadirUsuario();

void borrarUsuario();

void modificarUsuario();

void mostrarUsuario();

