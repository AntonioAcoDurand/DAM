#include <stdio.h>
#include <stdlib.h>
	int main () {
	int r;
	while (1) {
	  r = rand() % 8 ;
	  printf("%d\n",r);
	}
	return EXIT_SUCCESS;
	}
