// Ejemplo de paso de un argumento a una función por Referencia
// Quiero que realmente incremente la variable dada como argumento
void incrementar (int n) {
	printf("Valor recibido: %d\n",n);
	//(*n)++; Tiene prioridad el ++
	*n = *n + 1; 
	printf("Valor incrementado en la función: %d\n",*n);
}
int main() {
	int valor = 10;
	incrementar(&valor); //Le estoy dando el VALOR 10 no la variable //Incrementar recibe la dirección de memoria esta recibiendo ese 10 el cambio es para siempre por que esa direccion de memoria accede el main e incrementar (dirección compartida).
			     // Primera Forma Darle el valor del argumento No modica la memoria
			     // Segunda Forma Darle la dirección de memoria Modifica la memoria
			     // La memoria tiene espacios reservados y comparten la misma memoria en todo el programa.
			     // La memoria se reserva gracias al compilador
			     // Objetivo Distinguir paso del valor por el valor de referencia.
	printf("Valor en el main:%d\n",valor); //Imprime un 10
	return EXIT_SUCESS;
}
