#include <stdio.h>
#include <stdlib.h>
	/**
	 * Autor Antonio Óscar Aco Durand
	 * 
	 * > mayor
	 * < menor 
	 * == igual
	 * <= menor o igual
	 * >= mayor o igual
	 */
	void es_vocal(char letra) {
	 switch(letra) {
		 case 'a':
         printf("La letra %c es una vocal\n",letra); 
	 break;
		 case 'e': 
	 printf("La letra %c es una vocal\n",letra);
	 break;
		 case 'i':
         printf("La letra %c es una vocal\n",letra);
	 break;
		 case 'o':
         printf("La letra %c es una vocal\n",letra);
		 case 'u':
	 printf("La letra %c es una vocal\n",letra);	
	 break;
		 case 'A':
	 printf("La letra %c es una vocal\n",letra);	
	 break;
		 case 'E': 
	 printf("La letra %c es una vocal\n",letra);	
	 break;
		 case 'I':
	 printf("La letra %c es una vocal\n",letra);	
	 break;
		 case 'O':
	 printf("La letra %c es una vocal\n",letra);	
	 break;
		 case 'U':
	 printf("La letra %c es una vocal\n",letra);	
	 break;
                default:
         printf("La letra %c no es una vocal\n",letra);
	 break;
	}
	}
	int main () {
		int Opt;  
		char vocal;
		printf("1.Verificar si una letra es una vocal\n");
		printf("2.Calcular el área de una figura (círculo o cuadrado\n");
		printf("3.Calcular el promedio de 3 o 4 números\n");
		printf("4.Convertir una hora en formato de 24 horas a 12 horas\n");
		printf("5.Verificar si un número menor de 10 es primo\n");
		printf("6.Comparar tres números\n");
		printf("7.Salir\n");
                scanf("%d",&Opt);
   		if(Opt == 1) {
	        printf("Introduce una letra:\n");
	        scanf (" %c",&vocal);
		es_vocal(vocal);
		}	
		else if (Opt 
	      return 0;
	}
