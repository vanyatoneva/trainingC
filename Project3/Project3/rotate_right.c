#include<stdio.h>


unsigned rotate_right(void);
void decimal_to_hexadecimal(void);
int wordlength(void);

main() {


	unsigned y = 0x123;
	unsigned x;
	x = (unsigned)rotate_right((unsigned)y, (int)2);
	printf("%u\n", x);
	decimal_to_hexadecimal((unsigned)x);
}


unsigned rotate_right(unsigned x, int n) {
	unsigned temp = 0;
	int z = wordlength(x);
	for (n; n > 0; n--) {
		temp = x & (0x01);
		temp = temp << z -1;
		x=x >> 1;
		x = x | temp;
	}
	
	return x;
}


int wordlength(unsigned x)
{
	int i;
	int m;
	unsigned v = (unsigned)x;

	for (i = 1; (v = v >> 1) > 0; i++)
		;
	
	m = i % 4;
	if (m != 0) {
		if (m == 1) {
			i = i + 3;
		}
		else if (m == 2) {
			i += 2;
		}
		else {
			i += 1;
		}
	}
	return i;
}

void decimal_to_hexadecimal(unsigned x) /*prints the hex value*/
{
	int reminder;
	char hex[64];
	int j = 0;
	while (x != 0) {
		reminder = x % 16;
		if (reminder < 10) {
			hex[j++] = reminder + 48;
		}
		else {
			hex[j++] = reminder + 55;
		}
		x /= 16;
	}
	printf("0x");
	for (int i = j - 1; i >= 0; i--) {
		printf("%c", hex[i]);
	}
}





