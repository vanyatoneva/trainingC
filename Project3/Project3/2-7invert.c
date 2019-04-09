#include<stdio.h>


unsigned  getbits(unsigned x, int p, int n);
unsigned invert(unsigned x, int p, int n);

main() {

	printf("%d", invert(52038, 9, 6));

}


unsigned invert(unsigned x, int p, int n) {
	unsigned temp = getbits(x, p, n);
	temp = ~temp;
	temp = temp << (32 - n);
	temp = temp >> (32 - p -1);
	for (int i = (p - n); i >= 0; i--) {
		temp = temp | (x & (1 << i));
	}
	x = x >> p +1;
	x = x << p +1;
	x = x | temp;
	return x;

}


unsigned setbits(unsigned x, unsigned y, int n, int p) {
	int temp = getbits(y, n-1, n);
	temp = temp << (p +1 - n);
	for (int i = p - n ; i >= 0; i--) { /*take the bits from y*/
		temp = temp | (x & (1 << i));
	}
	x = x >> p;
	x = x << p;
	x = x | temp;
	return x;
}


unsigned getbits(unsigned x, int p, int n) {
	return (x >> (p + 1 - n)) & ~(~0 << n);
}