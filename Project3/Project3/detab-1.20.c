#include<stdio.h>

#define MAX 1000

main() {
	int c;
	int i = 0;
	char str[MAX];
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			c = ' ';
			for (int j = 0; j < 3; ++j) {
				str[i] = c;
				++i;
			}
		}
		str[i] = c;
		++i;
	}
	str[i] = '\0';
	printf("%s", str);
}