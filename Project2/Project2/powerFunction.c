#include<stdio.h>



int power(int base, int n) {
	
	for (p = 1; n > 0; --n) {
		p = base * p;
	}
	return p;
}

main() {
	for (int i = 0; i <= 10; ++i) {
		printf("%d %d %d \n", i, power(2, i), power(-3, i));
	}
}