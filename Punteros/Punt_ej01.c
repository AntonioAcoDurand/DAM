#include <stdio.h>
#include <stdlib.h>
int main(){
	float numero; //Declaramos la variable
	int *p; // Almacena en formato entero la dirección de memoria
	printf("Introduce un numero\n"); //Imprimimos la frase
	scanf("%f",&numero); //Obtenemos la direccion de memoria del numero 
	p = &numero;  //Declaramos la variable y le damos la dirección de memoria para que acceda al valor
	printf("Valor Variable %f\n",numero); // Imprime el valor de la variable numero 
	printf("Valor apuntado por el puntero %d\n",*p); // Imprime en formato entero el contenido de la direccion
	printf("Dirección de memoria %p\n",p ); //Imprime la dirección de memoria de 
	return 0;	
		}
