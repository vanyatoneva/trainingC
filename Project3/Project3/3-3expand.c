#include<stdio.h>
#include<string.h>

void expand(void);

main() {
	char s[] = {'t', '0', '-', '5', 'a', '-', 'd', '-', 'A', 'Y', '-', 'A', '-', 'F', '-', '\0'};
	char s2[1000];
	expand(s, s2);
	printf("%s", s2);

}

void expand(char s1[], char s2[]) {
	int j = 0;
	int i = 0;
	for (i = 0; i < strlen(s1) - 2; i++) {
		if (s1[i] >= 48 && s1[i] <= 57 && s1[i + 1] == '-' && s1[i + 2] >= 48 && s1[i + 2] <= 57 && s1[i] < s1[i + 2]) {
			for (int k = s1[i]; k <= s1[i+2]; k++) {
				s2[j++] = k;
			}
			i += 2;
		}
		else if (s1[i] >= 65 && s1[i] <= 90 && s1[i + 1] == '-' && s1[i + 2] >= 65 && s1[i + 2] <= 90 && s1[i] < s1[i+2]) {
			for (int k = s1[i]; k <= s1[i + 2]; k++) {
				s2[j++] = k;
			}
			i += 2;
		}
		else if (s1[i] >= 97 && s1[i] <= 122 && s1[i + 1] == '-' && s1[i + 2] >= 97 && s1[i + 2] <= 122 && s1[i] < s1[i + 2]) {
			for (int k = s1[i]; k <= s1[i + 2]; k++) {
				s2[j++] = k;
			}
			i += 2;
		}
		else {
			s2[j++] = s1[i];
		}
	}
	s2[j] = s1[i];
	s2[j + 1] = s1[i + 1];
	
}