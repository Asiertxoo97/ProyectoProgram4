/*
 * main.c
 *
 *  Created on: 28 de mar. de 2017
 *      Author: asier_000
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LINE_NAME 30 //Maximos caracteres que puede tener un nombre
#define MAX_OPC 1

char menuBienvenida();
char menuPrincipal();
char menuUsuarioConocido();
char menuUsuarioNuevo();
char menuAdministrador();
char menuBandaConocida();
char menuBandaNueva();
char menuNuevoIngreso();



void main ()
{

	char opcion;

	opcion = menuBienvenida(); //Mostrar Menú de Bienvenida

	switch(opcion){

	char opcion2;
	int usuario = 0; //El array que organiza los Usuarios2 (un usuario es una estructura) debe comenzar desde 0
	int banda = 0;   //El array que organiza las Bandas (una banda es una estructura) debe comenzar desde 0

	case '1': // En caso de introducir un '1' continuamos.

		opcion2=menuPrincipal();	//Mostramos el Menú Principal
			switch(opcion2){
								//Deberá elegir entre USUARIO, BANDA MUSICAL y ADMINISTRADOR.
								//En caso de ser su primera vez deberá registrarse.

			case '1':	//USUARIO


				break;

			case '2':		//BANDA MUSICAL


				break;

			case '3':		//ADMINISTRADOR


				break;

			case '4':		//REGISTRO


				break;
			}
		break;
	}

}

char menuPrincipal()
{
	char string[MAX_OPC];


	printf("\tMENÚ PRINCIPAL   \n");
	printf("\t1-Usuario.\n");
	printf("\t2-Banda musical.\n");
	printf("\t3-Administrador.\n");
	printf("Elija una de las opciones.\n");
	printf("Si usted no tiene un usuario creado pulse 4.\n");
	printf("Su opción: ");
	fflush(stdout);


		fgets(string, MAX_OPC, stdin);


		//clearIfNeeded(string, MAX_OPC); NO ENTIENDO PORQUE NO FUNCIONA



	return * string;
}

char menuBienvenida()
{
	char string[MAX_OPC];
	char opcion;
	printf("BIENVENIDO A CONCIERTOS DEUSTO\n");
	printf("(Pulse 1 para continuar al menú Principal)\n");
	printf("(Pulse 2 para finalizar la aplicación y salir del programa)\n");
	fflush(stdout);

	fgets(string, MAX_OPC, stdin);
	scanf(string,"%c",&opcion);

	//clearIfNeeded(string, MAX_OPC); //NO ENTIENDO PORQUE NO FUNCIONA


	return opcion;
}

/**TODO
 * char menuUsuarioConocido()
	{

	}

	char menuUsuarioNuevo()
	{

	}

	char menuBandaConocida()
	{

	}

	char menuBandaNueva()
	{

	}

	char menuAdministrador()
	{

	}

	char menuNuevoIngreso()
	{

	}



 */





