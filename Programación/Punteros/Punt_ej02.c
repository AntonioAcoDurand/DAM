#include <stdio.h>
#include <stdlib.h>

	int main() {
		int array[5] = {10, 20, 30, 40, 50};
		// La variable p tiene que apuntar "al final" 
		int *p; 
		//p = arr+4; //Solución de descarte
		//p = arr+5; //Solo se mueva en las direcciones de memoria 
		// p = &arr[5]; //Acceder a esta memoria (Sexta posición) Despues de acceder cogo la dirección de memoria el programa puede reventar puede estar protegida.
	for (int i = 5; i >0 ; i--) {
	 printf("Elemento %d: %d\n", i, *(p-i));
	}
