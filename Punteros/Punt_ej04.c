#include <stdio.h>
#include <stdlib.h>

void intercambiar(int *n1 , int *n2) {
    int num1 = *n1;
    *n1 = *n2;
    *n2 = *n1;
}
int main() {
	int n1 = 10;
	int n2 = 5;
	intercambiar(&n1,&n2);
	printf("%d",*n1); //5
	printf("%d",*n2); //10
	return 0;
}
