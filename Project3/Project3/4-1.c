#include<stdio.h>


#define MAXLINE 1000

int getline(void);
int strindex(void);

char pattern[] = "ould";

main() {
	char line[MAXLINE];
	int found = 0;
	while (getline(line, MAXLINE) > 0) {
		printf("%d\n", strindex(line, pattern));
		
	}
	return found;
}

int getline(char s[], int lim) {
	int c, i;
	i = 0;

	while (--lim > 0 && (c = getchar()) != EOF && c != '\n') {
		s[i++] = c;
	}
	if (c == '\n') {
		s[i++] = c;
	}
	s[i] = '\0';
	return i;
}

int strindex(char s[], char t[]) {
	int i, j, k;
	int n = -1;
	for (i = 0; s[i] != '\0'; i++) {
		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; k++, j++) {
			
		}
		if (k > 0 && t[k] == '\0') {
			n += i;
		}
	}
	
	
	
	return n;
}