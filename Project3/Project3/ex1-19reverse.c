#include<stdio.h>

#define MAXLINE 1000

int getline(char line[], int lim);
void copy(char copyFrom[], char copyTo[]);
void add(char from[], char to[], int begin);
void reverse(char line[], int lim);


main() {

	int c;
	char line[MAXLINE], longest[MAXLINE];
	int  i = 0;
	while ((c = getchar()) != '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\n';
	line[i + 1] = '\0';
	reverse(line, i+1);
	printf("%s", line);
	
	return 0;

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


void add(char from[], char to[], int begin) {
	int i = 0;
	while (from[i] != '\n') {
		to[begin] = from[i];
		++begin;
		++i;
	}
	to[begin] = '\n';
	
}


int getline(char line[], int lim) {
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
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