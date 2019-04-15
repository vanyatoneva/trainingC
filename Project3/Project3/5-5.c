#include<stdio.h>
#define MAXLINE 1000

int mgetline(char s[], int max);
int strend(char* s, char* t);
int mystrlen(char* t);
void strcpy(char* s, char* t, int n);
void strcat(void);
int strcmp(void);

int main(void)
{
	char s[MAXLINE], t[MAXLINE];
	int ret;
	mgetline(s, MAXLINE);
	mgetline(t, MAXLINE);
	strcat(s, t, 10);
	printf("%s", s);
	int res = strcmp(s, t, 4);
	printf("\n%d", strcmp(s, t, 4));
	return 0;
}

int strcmp(char* s, char* t, int n) {
	int diff = 0;
	while (n != 0) {
		diff = (*s++) - (*t++);
		n--;
	}
	if (diff < 0) {   /*if first string is less*/
		return -1;
	}
	if (diff > 0) {     /*if second string is less*/
		return 1;
	}
	else {
		return 0;    /*if they are the same*/
	}
}

void strcpy(char* s, char* t, int n) {
	while (n > 0) {
		*s++ = *t++;
		n--;
	}
	*s = '\0';
}


void strcat(char* s, char* t, int n) {
	int len = mystrlen(s);
	s = s + len -1; /*-1, because len count '/0' in the end*/
	while (n > 0) {
		*s++ = *t++;
		n--;
	}
	*s = '\0';
}


int mgetline(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && ((c = getchar()) != EOF) && c != '\n'; ++i)
		s[i] = c;

	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';

	return i;
}


int mystrlen(char* t)
{
	char* p;
	p = t;

	while (*p != '\0')
		++p;

	return p - t;
}