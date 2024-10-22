#include <stdio.h>
#include <stdlib.h>

int main(){
	float num1 = 6;
	float num2 = 4;
	int suma, resta, multiplicacion;
	float division;

	suma = num1 + num2;
	resta = num1 - num2;
	multiplicacion = num1 * num2;
	division = num1 / num2;

	

	printf("si operas con el %f y el %f te puede dar\n sumando: %d\n restando: %d\n multiplicando: %d\n dividiendo: %f\n", num1, num2, suma, resta, multiplicacion, division);
	return 0;
}
