/* Incluye todo el archivo de stdio.h que nos ayuda para utilizar printf */
#include <stdio.h>

/* Declaración de funciones */
/* Firma de la función misterio1 que recibe dos ints y regresa
 * un int */
int misterio1(int (*fun) (int), int);
/* Firma de la función misterio2 que recibe un apuntador a una funcion que
 * recibe un int y no regresa nada; y un int, y no regresa nada
 * un int */
void misterio2(void (*fun) (int), int);
/* Firma de la función cuadrado_num que recibe un int y regresa
 * un int */
int cuadrado_num(int);
/* Firma de la función imprime_num que recibe un int y no regresa
 * nada */
void imprime_num(int);

/* Funcion principal main para que cuando sea llamado nuestro
 * programa entonces se ejecute esta funcion. Esta regresa un int */
int main()
{
  /* Declaración de un apuntador a función que recibe un int y regresa
   * un int */
  int (*fun1) (int);
  /* Declaración de un apuntador a función que recibe un int y no regresa
   * nada */
  void (*fun2) (int);

  /* Igualamos fun1 a el apuntador de la función cuadrado_num */
  fun1 = &cuadrado_num;
  /* Igualamos fun2 a el apuntador de la función imprime_num */
  fun2 = &imprime_num;

  /* Declaramos un int var y lo igualamos lo que regresa misterio1 con los
   * parametros fun1 y 3*/
  int var = misterio1(fun1, 3);

  /* Ejecuta la función misterio2 con los parametros fun2 y var */
  misterio2(fun2, var);
}

/* Función misterio1 que ya fue declarada arriba en la firma */
int misterio1(int (*fun) (int), int num)
{
	/* Regresa la función fun con el parámetro num */
    return fun(num);
}

/* Función misterio2 que ya fue declarada arriba en la firma */
void misterio2(void (*fun) (int), int num)
{
	/* Evalua la función fun con el parámetro num */
    fun(num);
}

/* Función cuadrado_num que ya fue declarada arriba en la firma */
int cuadrado_num(int num)
{
	/* Regresa el cuadrado de num */
    return num * num;
}

/* Función imprime_num que ya fue declarada arriba en la firma */
void imprime_num(int num)
{
	/* Simplemente imprime Tada: y el num que recibió como parámetro */
    printf("Tada: %d\n", num);
}
