#include<stdio.h>

int turn_off_rightmos_bit(void);
void dec2bin(void);
int bit_count(void);


main() {
	int x = 0;
	dec2bin(x);
	printf("\n%d", bit_count(x));
	
	
	

}

int turn_off_rightmos_bit(unsigned x) {
	x &= (x - 1);     /*if x is even, x-1 is odd, so (x-1)%2 = 1 if x%=0, until x%2 = 1 -> then (x-1)%2 = 0 and from this point they give the samo result*/
	return x;            /*x&(x-1) will turn off the rightmost bit of x without any other changes*/
}

int bit_count(unsigned x) {
	int bits = 0;
	while (x != 0) {
		x = turn_off_rightmos_bit(x);
		bits++;
	}
	return bits;
}

void dec2bin(int c)
{
	int i = 0;
	for (i = 31; i >= 0; i--) {
		if ((c & (1 << i)) != 0) {
			printf("1");
		}
		else {
			printf("0");
		}
	}
}



