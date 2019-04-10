#include<stdio.h>

#include<stdio.h>
#include<ctype.h>

int atoi(void);

main() {
	char s[3] = { '-', '4', '2' };
	printf("%d", atoi(s));
}


int atoi(char s[]) {
	int sign, i, n;
	n = 0;
	for (i = 0; isspace(s[i]); i++);
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '-' || s[i] == '+') {
		i++;
	}
	while (i <= strlen(s) && s[i] != '\0' && isdigit((unsigned char)s[i])) {
		n = n * 10 + (s[i] - '0');
		i++;
	}
	return sign * n;
}
