/*
 * Descripcion: Primer programa en C
 * Autor: edervs
 * Fecha: 3/Nov/2016
 */

/* Incluye todo el archivo de stdio.h que nos ayuda para utilizar printf */
#include<stdio.h>

/* Creamos la funcion principal main para que cuando sea llamado nuestro
 * programa entonces se ejecute esta funcion. Esta regresa un int */
int main() {
	/* Llamos la función printf que esta en stdio.h */
	printf("¡Hola Mundo!\n");
	
	/* Siempre debemos regresar algo por lo que como en la firma del metodo
	 * decimos que regresaremos un int, regresamos 0 */
	return 0;
}
