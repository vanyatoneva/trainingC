#include<stdio.h>

#define MAXLINE 1000

void reverse(void);
void itob(void);

main() {
	signed int n = -123;
	char s[MAXLINE];
	itob(n, s, 2);
	printf("%s", s);
}


void itob(int n, char s[], int b) {
	int i, sign;
	i = 0;
	if ((sign = n) < 0) {
		n = -n -1;
	}
	switch (b) {
	case 10:
		do {
			s[i++] = n % 10 + '0';
		} while ((n /= 10) > 0);
		break;
	case 8:
		do {
			s[i++] = n % 8 + '0';
		} while ((n /= 8) > 0);
		break;
	case 2:
		do {
			s[i++] = n % 2 + '0';
		} while ((n /= 2) > 0);
		break;
	case 16:
		do {
			if (n % 16 < 10) {
				s[i++] = n % 16 + '0';
			}
			else {
				s[i++] = (n % 16) % 10 + 'A';
			}
		} while ((n /= 16) > 0);
		break;
	default:
		printf("Invalid base!");
	}
	
	if (sign < 0) {
		s[i++] = '-';
		s[0] = s[0] + 1;
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