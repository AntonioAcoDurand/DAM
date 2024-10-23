#include <stdio.h>
#include <stdlib.h>
	/**
	 * Autor Antonio Óscar Aco Durand
	 * 
	 * > mayor
	 * < menor 
	 * == igual
	 * <= menor o igual
	 * >= mayor o igual
	 */
	int main () {
	int i;
	int suma = 1;
	for (i=1;i<=10;i++) {
	    suma += i;
	printf("La suma de %d + %d es %d\n", i , i+i , suma);
	}
	return 0;
	}
