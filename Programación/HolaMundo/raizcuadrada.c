#include <stdio.h>
#include <stdlib.h>
#include <math.h>
	int main () {
	   double raiz;
	   int valor;
	   double radio,area;
          printf("Introduzca un numweo para calcular su raiz\n");
	   scanf("%d",&valor);
	   raiz = sqrt(valor);
	   printf("la raiz cuadrada de %d es %lf\n",valor,raiz);

	   printf("Introduzca el radio del circulo para calcular su area\n"); 
	   scanf("%lf", &radio);
	   area = radio * radio;
	   printf("El area del circulo es %lf\n",area);
	   return 0;
	}
