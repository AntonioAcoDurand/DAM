#include <stdio.h>
#include <stdlib.h>
	int main() {
        int opcion = 0; // Es necesario (No obligatorio) Inicializar la variable por que el primer uso de la variable es de lectura.
			// dowhile se ejecuta de primeras
	while(opcion != 4) {
	}	//Código a ejecutar
	 do  {
	printf("Introduce una opción:(4 para salir)\n");
	   scanf(" %d",&opcion);
	 }
	return EXIT_SUCCESS;
	}
