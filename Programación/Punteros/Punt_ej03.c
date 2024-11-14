
void incrementar (int n) {
	printf("Valor recibido: %d\n",n);
	n++;
	printf("Valor incrementado en la función: %d\n",n);
}
int main() {
	int valor = 10;
	incrementar(valor); //Le estoy dando el VALOR 10 no la variable
	printf("Valor en el main:%d\n",valor); //Imprime un 10
	return EXIT_SUCESS;:
}
