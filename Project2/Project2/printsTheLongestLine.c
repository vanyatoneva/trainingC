#include<stdio.h>

#define MAXLINE 1000

int getline(char line[], int lim);
void copy(char copyFrom[], char copyTo[]);

main() {

	int len, max;
	char line[MAXLINE], longest[MAXLINE];

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(line, longest);
		}
	}
	if (max > 0) {
		printf("%s", longest);
	}
	return 0;

}


int getline(char line[], int lim) {
	int c, i;
	for (i = 0; i < lim - 1 && (c=getchar()) != EOF && c != '\n'; ++i) {
		line[i] = c;
	}

	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;

}


void copy(char copyFrom[], char copyTo[]) {
	int i = 0;
	while ((copyTo[i] = copyFrom[i]) != '\0') {
		++i;
	}
}