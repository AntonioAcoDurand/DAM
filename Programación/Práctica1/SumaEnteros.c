:wq
#include <stdlib.h>

       int main() {
	  int num1;
	  int num2;
             printf ("Introduce el primer valor\n:");
	     scanf("%d",&num1);	     
             printf("Introduce el segundo valor\n:"); 
	     scanf("%d",&num2);
        int resultado_suma = num1 + num2;
	int resultado_resta = num1 - num2;
	int resultado_multiplicacion = num1 * num2;
	int resultado_division = num1 / num2;
         printf("El resultado es %d\n",resultado_suma);
         printf("El resultado es %d\n",resultado_resta);
         printf("El resultado es %d\n",resultado_multiplicacion);
         printf("El resultado es %d\n",resultado_division);
	     return 0; 
       }
