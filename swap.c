/*
 * Descripcion: Archivo swap que contiene la funcion swap
 * Autor: edervs
 * Fecha: 3/Nov/2016
 */

/* Incluye todo el archivo de stdio.h que nos ayuda para utilizar printf */
#include<stdio.h>

/* Creamos la función swap que recibe 2 apuntadores de int que hace que
 * se intercambien los valores de ambos */
void swap(int *a, int *b) {
	/* Creamos un auxiliar para poder guardar el valor anterior de a */
	int aux = *a;
	/* Hacemos que el valor del apuntador a sea el del apuntador de b */
	*a = *b;
	/* Hacemos que el valor del apuntador b sea el del anterior del apuntador
	 * de a */
	*b = aux;
}

/* Creamos la funcion principal main para que cuando sea llamado nuestro
 * programa entonces se ejecute esta funcion. Esta regresa un int */
int main() {

	/* Creamos nuestras variables que servirán de prueba */
	int a = 5;
	int b = 6;

	/* Imprimimos los valores de las variables antes de llamar a la función
	 * swap */
	printf("Antes del cambio\n");
	printf("Valor de a = %d\n", a);
	printf("Valor de b = %d\n", b);

	/* Llamamos la función swap mandando los apuntadores de a y de b como
	 * parámetros ya que la función swap recibe apuntadores de ints y no ints
	 */
	swap(&a, &b);

	/* Imprimimos los valores de las variables despues de llamar a la función
	 * swap para verificar que fueron intercambiados */
	printf("Despues del cambio\n");
	printf("Valor de a = %d\n", a);
	printf("Valor de b = %d\n", b);

	/* Regresamos 0 porque debe regresar un int la función */
	return 0;
}
