#include<stdio.h>


void rotate_left(void);
int decimal_to_hexadecimal(void);


main(){
	
	
	int y = 0x12345678;
	rotate_left(y, 20);
}


void rotate_left(unsigned int x, unsigned char n) {
	int z = 0;    /*keep the bits we want to move*/
	int y;        /*this is the new value*/
	for (int i = 0; i <= n ; i++) {         
		z = z | (x & (1 << 32-i));          /*from 32th to n-th position of x copy to z*/
	}								
	y = (x << n) | (z >> 32-n);             
	printf("%d ", y);
	printf("\ny in hex  : ");
	decimal_to_hexadecimal(y);
	
	
}


int decimal_to_hexadecimal(int x) /*prints the hex value*/
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







