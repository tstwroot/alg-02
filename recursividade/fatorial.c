#include <stdio.h>

int fat(int n1);

int main(){
	int f = fat(4);
	printf("%i\n", f);
}

int fat(int n1){
	if(n1 <= 1){
		return 1;
	}
	return n1 * fat(n1 - 1);
}