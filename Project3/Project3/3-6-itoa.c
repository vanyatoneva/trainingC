#include<stdio.h>

#define MAXLINE 1000

void reverse(void);
void itoa(void);

main() {
	signed int n = 123;
	char s[MAXLINE];
	itoa(n, s, 5);
	printf("%s", s);
}


void itoa(int n, char s[], int b) {
	int i, sign;
	i = 0;
	if ((sign = n) < 0) {
		n = -n -1;
	}
	do {
		s[i++] = n % 10 + '0';
		b--;
	} while ((n /= 10) > 0);
	if (sign < 0) {
		s[i++] = '-';
		s[0] = s[0] + 1;
		b--;
	}
	if (b > 0) {
		do {
			s[i++] = ' ';
			b--;
		}while (b > 0);
	}

	s[i] = '\0';
	reverse(s);
}

void reverse(char line[]) {
	char temp[MAXLINE];
	int t = 0;
	int i;
	int lim = strlen(line);

	for (i = 0; i < lim; ++i) {
		temp[i] = line[i];
	}

	while (lim > 0) {
		line[lim - 1] = temp[t];
		--lim;
		++t;
	}
}