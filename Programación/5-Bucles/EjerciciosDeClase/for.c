#include <stdio.h>
#include <stdlib.h>
	
int main () {
	int i = 0; /** La variable se puede declarar dentro del bucle **/
	for ( /* valor inicial */ i = 0; i<5 ; i=i+1/*Código a ejecutar entre vueltas*/)
               {
		printf("%d",&i);
          }
	for (int i=0; i < 100 ; i = i + 2) {
	//Este bucle,asi escrito, no imprime el 100
	//En la última ejecución del bucle 1 vale 98
	//Por tanto, al incrementae i, i vale 100.
	// Y no cumple la condición
	
	//Para imprimir el 100 hay 2  posibilidades.
	}
	printf("Terminado\n");
	return 0;
}                  
		/** **\
		/**
		 1) inicializo i=0
		 2) Compruebo si i<5 Como se cumples,ejecuto el interior del bucle.
		 3) printf
		 4) Terninando el interior del bucle
		 5) Vuelvo al punto 2. Compruebo si i<5. Se cumple porque i==1. Ejercuto el interior.  
		 6) printf 
		 7) Terminado el interior del bucle, ejecuto: i=i+1. Ahora i vale 2.
		 8) Vuelvo a la condiución: ¿i<5? Sí, Interior del bucle.
		 9) Printf
		 10) Terminando el interior del bucle ejecuto i=i+1 
		 11) 
		 12)
		 13)
		 14)
		 15)
		 16)
		 Nivel avanzado
		 printf("Nivel avanzado");
		 printf("%d\n",i++); // ¿0 o 1? 0 por que incrementa el valor después de leer el valor
		printf("%d\n",++i); // 2 porque primero incrementa y despues devuelve el valor.
		 **/

