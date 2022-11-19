#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void RelationalOps_LessThan(void);			// [F-2] Prototipo de la funcion.


/* Declaracion de la funcion 'main', es la funcion principal, 
 * solo esta funcion se puede llamar asi y nadie mas,
 * aqui inicia la ejecucion del programa.
 * Puede contener codigo a ejecutar o llamadas a otras funciones.
*/
int main(int argc, char *argv[])			// Declaracion de la funcion "main".
{
	RelationalOps_GreaterThan();			// [F-3] Llamada de la funcion.
	
	return 0;
}



void RelationalOps_GreaterThan(void)		// [F-1] Declaracion de la funcion (funcion del usuario).
{
	int  x = 5;
	int  y = 9;
	int  z;
	int  w;
	bool bResult;
	
	z 		= x * y;	// Ejemplo de uso del operador aritmetico '*', multiplicacion.
	
	w		= x > y;	// Ejemplo de uso del operador relacional '>', mayor que.
	
	bResult = x > y;	// Ejemplo de uso del operador relacional '>', mayor que.
	
	
	printf("Valor de la variable z		: %d \n", z);
	printf("Valor de la variable w		: %d \n", w);
	printf("Valor de la variable bResult: %d \n", bResult);
}



void RelationalOps(void)	// Declaracion de la funcion. (desde la apertura de llaves hasta el cierre.)
{						
	int  x = 5;
	int  y = 9;
	int  z;
	bool bResult;
	
	z 		= x * y;				// Ejemplo de uso del operador aritmetico '*', multiplicacion.
	
	bResult = x < y;				// Ejemplo de uso del operador relacional '<', mayor que.
	
	
	printf("Valor de la variable z		: %d \n", z);
	printf("Valor de la variable bResult: %d \n", bResult);
}


