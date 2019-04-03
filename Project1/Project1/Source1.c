#include<stdio.h>

/*count lines in input*/


main(){
	int c, n1;

	
	while ((c = getchar()) != EOF) {
		if (c == '\t' || c == '\b') {
			c = "\\";
		}
		putchar(c);
	}

}