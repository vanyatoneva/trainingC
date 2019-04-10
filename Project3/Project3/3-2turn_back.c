#include<stdio.h>

#define MAX 1000

void escape(void);
void turn_back(void);


main() {
	int c;
	char s[MAX], t[MAX], p[MAX];
	int i = 0;
	while ((c = getchar()) != EOF) {
		t[i++] = c;
	}
	t[++i] = '\0';
	escape(s, t);
	printf("%s", s);
	turn_back(s, p);
	printf("\n%s", p);
}

void turn_back(char s[], char t[]) {
	int i = 0;
	int j = 0;
	while (i < strlen(s)) {
		if (s[i] == '\\') {
			switch(s[i+1]){
			case 'n':
				t[j++] = '\n';
				i++;
				break;
			case 't':
				t[j++] = '\t';
				i++;
				break;
			default:
				t[j++] = s[i];
			}
		}
		else {
			t[j++] = s[i];
		}
		i++;
	}
	t[j++] = '\0';
}

void escape(char s[], char t[]){
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

