
// Implementar função recursiva da sequência de fibonacci
// 1 - 1 - 2 - 3 - 5 - 8 - 13 ...

#include <stdio.h>

int fibo(int n1, int n2);

int main(){
	fibo(1, 1);
}

int fibo(int n1 , int n2){
	if(n1 >= 500){
		return 1;
	}
	int aux = n2;
	n1 = n1 + aux;
	printf("%i\n", n1);
	aux = n1 + n2;
	printf("%i\n", aux);
	return fibo(n1, aux);
}