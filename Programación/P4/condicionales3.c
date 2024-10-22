#include <stdio.h>
#include <stdlib.h>

	int main() {
		int condicion;
		scanf("%d",&condicion);
	if (condicion == 0) {
		printf("Condicion vale 0\n");
	}
	     if (condicion == 1) {;         // La forma es con switch case
		 printf("Condicion vale 1\n");
	     }
	     if   (condicion !=1 && 0)   {            // Solo es if del ==1
	           printf("Condicion no vale 0 ni 1\n"); 
	     }
		return 0;
	}
