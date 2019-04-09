#include<stdio.h>
#include<string.h>

int squeeze(void);


main() {
	char str[] = "chechking";
	char str2[] = "oponc";
	squeeze(str, str2);

	printf("%d \n", squeeze(str, str2));

}




int squeeze(char s1[], char s2[]) {

	int i, j;
	int pos = 0;
	for (i = 0; i < strlen(s1); i++) {
		j = 0;
		while (s1[i] != s2[j] && j < strlen(s2)) {
			j++;
		}
		if (s1[i] == s2[j]) {
			++pos;
			break;
		}
		pos++;
	}

	if (pos > 0) {
		return pos;
	}
	else {
		return -1;
	}

}