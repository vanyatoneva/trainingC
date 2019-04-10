#include<stdio.h>

#define MAX 1000

int binsearch(void);
void escape(void);



main() {
	int c;
	char s[MAX], t[MAX];
	int i = 0;
	while ((c = getchar()) != EOF) {
		t[i++] = c;
	}
	t[++i] = '\0';
	escape(s, t);
	printf("%s", s);
}



void escape(char s[], char t[]) {
	int i = 0;
	int j = 0;
	while (i <= strlen(t)) {
		switch (t[i]) {
		case '\n':
			s[j++] = '\\';
			s[j++] = 'n';
			break;
		case '\t':
			s[j++] = '\\';
			s[j++] = 't';
			break;
		default:
			s[j++] = t[i];
		}
		++i;
	}
	
}

