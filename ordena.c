/*
 * Descripcion: Contiene la función bubble_sort
 * Autor: edervs
 * Fecha: 3/Nov/2016
 */

/* Incluye todo el archivo de stdio.h que nos ayuda para utilizar printf */
#include<stdio.h>

/* Creamos un método para intercambiar valores dentro de un arreglo.
 * Recibimos un apuntador a un arreglo y las dos posiciones a intercambiar*/
void swap(int *arr, int i, int j) {
	/* Creamos una variable auxiliar para guardar el antiguo valor de la posicion
	 * i antes del cambio */
	int aux = arr[i];
	/* Igualamos el valor de la posicion j a el valor de la posicion i */
	arr[i] = arr[j];
	/* Igualamos el valor de la posicion i anterior a el valor de la posicion
	 * j */
	arr[j] = aux;
}

/* Creamos el método bubble_sort que recibe un apuntador a un arreglo de ints
 * y el tamaño del arreglo y los ordena*/
void bubble_sort(int *arr, int length) {
	/* Creamos estas variables para que el compilador no se queje */
	int i, j;
	/* Este for es para saber el número de veces que repetiremos el proceso de
	 * burbuja*/
	for (i = 0; i < length-1; i++) {
		/* Este for es para ir haciendo el proceso de burbuja */
		for (j = 0; j < length-i-1; j++) {
			/* Verificamos con un if si el valor actual es mayor que el del
			 * siguiente */
			if (arr[j] > arr[j+1]) {
				/* SI lo es, intecambiamos los valores con nuestro método swap
				 * creado arriba */
				swap(arr, j, j+1);
			}
		}
	}
}

/* Creamos la funcion principal main para que cuando sea llamado nuestro
 * programa entonces se ejecute esta funcion. Esta regresa un int */
int main() {
	/* Creamos la variable para que el compilador no se queje */
	int i;
	/* Creamos nuestro arreglo de prueba */
	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
	/* Imprimimos sus valores */
	printf("Arreglo antes de bubble sort ");
	printf("[%d", arr[0]);
	for (i = 1; i < 10; i++) {
		printf(", %d", arr[i]);
	}
	printf("]\n");
	/* Hacemos bubble sort con el arreglo */
	bubble_sort(arr, 10);
	/* Imprimimos sus valores */
	printf("Arreglo despues de bubble sort ");
	printf("[%d", arr[0]);
	for (i = 1; i < 10; i++) {
		printf(", %d", arr[i]);
	}
	printf("]\n");
	/* Regresamos 0 ya que debemos regresar un int expresado en la firma
	 * de la función
	 * */
	return 0;
}
