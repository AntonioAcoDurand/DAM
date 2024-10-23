#include <stdio.h>
#include <stdlib.h>
	int main() {
	for ( int i = 2; i <=20 ; i=i+2) {
	 if (i == 20) {
	      printf("%d. \n",i);
	  }
	 else { 
	      printf("%d, ",i);
	 }
	}
	printf("Terminado\n");
	return EXIT_SUCCESS;
	}
	//Solo se ejecuta la siguiente instrucción
