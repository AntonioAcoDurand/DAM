#include <stdio.h>
#include <stdlib.h>

	int main() {
		int condicion;
		scanf("%d",&condicion);
	if (condicion == 0) {
		printf("Condicion vale 0\n");
	}
	     else if (condicion == 1) {;
		 printf("Condicion vale 1\n");
	     }
	      else {                     // Solo es if del ==1
	           printf("Condicion no vale 0 ni 1\n"); 
	     }
		return 0;
	}
