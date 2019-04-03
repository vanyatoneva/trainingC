#include<stdio.h>

/*replaces tabs with "\\"*/


main() {
	int c;


	while ((c = getchar()) != EOF) {
		if (c == '\t' || c == '\b') {
			c = '//';
		}
		putchar(c);
	}

}