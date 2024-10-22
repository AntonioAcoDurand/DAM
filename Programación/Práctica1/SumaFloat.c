#include <stdio.h>
#include <stdlib.h>

       int main() {
	  float num1;
	  float num2;
             printf ("Introduce el primer valor\n:");
	     scanf("%f",&num1);	     
             printf("Introduce el segundo valor\n:"); 
	     scanf("%f",&num2);
        float resultado_suma = num1 + num2;
	float resultado_resta = num1 - num2;
	float resultado_multiplicacion = num1 * num2;
	float resultado_division = num1 / num2;
         printf("El resultado es %f\n",resultado_suma);
         printf("El resultado es %f\n",resultado_resta);
         printf("El resultado es %f\n",resultado_multiplicacion);
         printf("El resultado es %f\n",resultado_division);
	     return 0; 
       }
