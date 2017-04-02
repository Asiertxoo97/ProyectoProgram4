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

void borrarMiembro(Miembro * miembro, char * nombre)
{



}

void modificarMiembro(Miembro * miembro,char * nombre)
{
	char opciones[5];
	int opcion;
	char inst[5];
	int instrumento;
	char opciones[5];
	int opcion;
	char nombreNuevo[20];
	char apellidoNuevo[20];


	int i;
	for(i=0 ; miembro[i].nombre == nombre;i++){

			printf("\t¿Qué desea modificar? \n");
			printf("1-Nombre.\n");
			printf("2-Apellido.\n");
			printf("3-Instrumento.\n");
			printf("Su opción: ");
			fflush(stdout);
			fgets(opciones,5,stdin);
			scaanf(opciones,"%i",&opcion);

			switch(opcion){
			case 1:
				printf("Inserte nuevo nombre: ");
				fflsuh(stdout);
				fgets(nombreNuevo,20,stdin);
				printf("\n");

				break;
			case 2:
				printf("Inserte nuevo apellido: ");
				fflsuh(stdout);
				fgets(apellidoNuevo,20,stdin);

				printf("\n");
					break;
			case 3:
				printf("Inserte nuevo instrumento: ");
				printf("1-Voz.");
					printf("2-Guitarra");
					printf("3-Bajo");
					printf("4-Bateria");
					printf("Elija una opción: ");
					fflush(stdout);
					fgets(inst,stdin);
					scanf(inst,"%i",&instrumento);

					miembro -> nombre= nombreNuevo;
					miembro -> apellido = apellidoNuevo;

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

					break;



			}



	}


}

void mostrarMiembro(Miembro miembro[],int numMiembros)
{
	int i;
	printf("Miembros: \n");
	for( i = 0;i < numMiembros ;i++){

		printf("%s,%s,%c.\n",miembro[i].nombre,miembro[i].apellido,miembro[i].instrumento);


	}



}


