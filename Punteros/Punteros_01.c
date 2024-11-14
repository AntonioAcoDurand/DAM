#include <stdio.h> 
#include <stdlib.h>
// Puntero (Tipo variable)
int main () {
    int x = 10;
    int *p // Esta variable es de tipo "int *", es decir, puntero a entero.
	   // Esto quiere decir que va a almacenar la dirección de memoria
	   // De una variable de tipo entero.
    p = &x;
    printf("Valor de x: %d\n",x); // 10 
    printf("Dirección de x: %p\n",&x); // 0x7fffbe446b1c
    printf("Valor de p: %p\n",p); // 0x7fffbe446b1c
				  // ¿Como accedo al contenido de una dirección de memoria?
		printf("Contenido de p: %d\n",p); // Intentar mostrar en formato numerico la dirección de memoria
		printf("Contenido de p: %d\n", *p); // Muestra el contenido de una dirección de memoria
						    // Pasos 
						    //* Declaración
						    // Acceder contenido del puntero Solo a direcciones de memoria
						    // & Obtener la dirección de memoria en la variable
		printf("Contenido de x: %d\n",*x);  // Va a acceder al contenido pero no imprime por que solo se puede acceder al contenido de un puntero.
}
