#include <stdio.h>

int pot(int base, int exp);

int main(){
	int r = pot(5, 3);
	printf("%i\n", r);
}

int pot(int base, int exp){
	if(exp == 1){
		return base;
	}
	return base * pot(base, exp - 1);
}