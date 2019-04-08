#include<stdio.h>

#define MAXLINE 1000


void reverse(char line[], int lim);


main() {

	int c;
	char line[MAXLINE];
	int  i = 0;
	while ((c = getchar()) != '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\n';
	line[i + 1] = '\0';
	reverse(line, i+1);
	printf("%s", line);
	

}





void reverse(char line[], int lim) {
	char temp[MAXLINE];
	int t = 0;
	int i;
	
	
	for (i = 0; i < lim; ++i) {			
		temp[i] = line[i];
	}
	
	while (lim > 1) {
		line[lim - 2] = temp[t];
		--lim;
		++t;
	}
}


