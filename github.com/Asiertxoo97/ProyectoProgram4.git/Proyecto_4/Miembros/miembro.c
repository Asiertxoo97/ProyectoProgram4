/*
 * miembro.c
 *
 *  Created on: 2 de abr. de 2017
 *      Author: asier_000
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "miembro.h"

void añadirMiembro(Miembro * miembro)
{
	char  nombre[20];
	char  apellido[20];
	char  inst;
	int instrumento;

	printf("Nombre: "); //Introducir el nombre del nuevo miembro
	fflsuh(stdout);
	fgets(nombre,20,stdin);

	printf("\n");

	printf("Apellido: "); //Introducir el apellido del nuevo miembro
	fflsuh(stdout);
	fgets(apellido,20,stdin);
	printf("\n");

	printf("Instrumento: \n"); //Elegir el instrumento que toca el nuevo miembro
	printf("1-Voz.");
	printf("2-Guitarra");
	printf("3-Bajo");
	printf("4-Bateria");
	printf("Elija una opción: ");
	fflush(stdout);
	fgets(inst,stdin);
	scanf(inst,"%i",&instrumento);

	miembro -> nombre= nombre;
	miembro -> apellido = apellido;

	switch (instrumento){

	case 1:							//Miembro canta
		miembro -> instrumento= "Voz";
		break;

	case 2:							//Miembro toca guitarra
		miembro -> instrumento= "Guitarra";
		break;

	case 3:							//Miembro toca bajo
		miembro -> instrumento= "Bajo";
		break;

	case 4:							//Miembro toca bateria
		miembro -> instrumento= "Batería";
		break;


	}
	printf("\n");
}

void borrarMiembro(Miembro * miembro)
{



}

void modificarMiembro(Miembro * miembro)
{



}

void mostrarMiembro(Miembro miembro[],int numMiembros)
{
	int i;
	printf("Miembros: \n");
	for( i = 0;i < numMiembros ;i++){

		printf("%s,%s,%c.\n",miembro[i].nombre,miembro[i].apellido,miembro[i].instrumento);


	}



}


