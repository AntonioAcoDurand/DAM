#include <stdio.h>
#include <stdlib.h>

	int main() {
		int array[5] = {1,2,3,4,5};
		/** for (int * p = arr; *p <= 5; p++) {
			printf("%d",*p);
		} */
		printf("Sizeof arr: %ld\n", sizeof(arr));
		printf("Sizeof int: %ld\n", sizeof(int));
		printf("Elementos del array: %ld\n", sizeof(arr)/sizeof(int));

		char palabra[10] = "gratis";
		for (char * l = palabra; *l != \0; l++) {
			printf("%c " ,*l);
		printf("\n");
		return 0;
		}
	        
