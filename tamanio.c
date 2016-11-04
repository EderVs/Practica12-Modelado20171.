/*
 * Descripcion: Obtener tamaños de los tipos de datos
 * Autor: edervs
 * Fecha: 3/Nov/2016
 */

/* Incluye todo el archivo de stdio.h que nos ayuda para utilizar printf */
#include<stdio.h>

/* Creamos la funcion principal main para que cuando sea llamado nuestro
 * programa entonces se ejecute esta funcion. Esta regresa un int */
int main() {
	/* Imprimimos con printf de stdio.h el tamaño del tipo short */
	printf("El tipo short tiene tamaño %d \n", sizeof(short));
	/* Imprimimos con printf de stdio.h el tamaño del tipo int */
	printf("El tipo int tiene tamaño %d \n", sizeof(int));
	/* Imprimimos con printf de stdio.h el tamaño del tipo unsigned int */
	printf("El tipo unsigned tiene tamaño %d \n", sizeof(unsigned int));
	/* Imprimimos con printf de stdio.h el tamaño del tipo apintador de int */
	printf("El tipo apuntador de int tiene tamaño %d \n", sizeof(int *));
	/* Imprimimos con printf de stdio.h el tamaño del tipo char */
	printf("El tipo char tiene tamaño %d \n", sizeof(char));
	/* Imprimimos con printf de stdio.h el tamaño del tipo float */
	printf("El tipo float tiene tamaño %d \n", sizeof(float));
	/* Imprimimos con printf de stdio.h el tamaño del tipo double */
	printf("El tipo double tiene tamaño %d \n", sizeof(double));
	/* Regresamos 0 porque debe regresar un int la función */
	return 0;
}
