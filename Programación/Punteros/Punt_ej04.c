#include <stdio.h>
#include <stdlib.h>

void intercambiar(int * n1,int * n2) {
    int num1 = *n1;
    *n1 = *n2;
    *n2 = num1;
}
int main() {
	int n1 = 10;
	int n2 = 5;
	intercambiar(&n1,&n2);
	printf("%p",*n1); //5
	printf("%p",*n2); //10
	return 0;
}
