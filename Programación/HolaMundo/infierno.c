#include <stdio.h>
#include <stdlib.h>
#include <math.h>
		int calcularRaiz() {
			int valor;
			double raiz;
      printf("Introduzca un número para calcular su raiz\n");
	scanf("%d",&valor);
        raiz = sqrt(valor);
	printf("La raiz cuadrada de %d es %lf\n",valor,raiz);
	}

                int calcularArea() {
			double radio,area;
			printf("Introduzca el radio para el area\n");
			scanf("%lf",&radio);
			area = radio + radio * M_PI;
			printf("El area del circulo es %lf\n",area);
		}
		int main() {
		   calcularRaiz();
	           calcularRaiz();
	           calcularRaiz();

		   calcularArea();
		   calcularArea();
		   calcularArea();
		}
