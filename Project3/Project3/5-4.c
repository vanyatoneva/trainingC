#include<stdio.h>
#define MAXLINE 1000

int getline(char s[], int max);
int strend(char* s, char* t);
int mystrlen(char* t);

int main(void)
{
	char s[MAXLINE], t[MAXLINE];
	int ret;
	getline(s, MAXLINE);
	getline(t, MAXLINE);
	ret = strend(s, t);
	printf("%d", ret);
	return 0;
}

int getline(char s[], int lim)   /*gets the next line from input*/
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

int strend(char* s, char* t)
{
	int len;
	len = mystrlen(t);   /*get length of the second string*/
	while (*s != '\0')     
		++s;          /*goes to the end of string */
	--s;

	while (*t != '\0')
		++t;

	--t;
	while (len > 0)   
	{
		if (*t == *s)   /*if they are the same, we go to the previous element to check*/
		{
			--t;
			--s;
			--len;
		}
		else
			return 0;   /*if thy are not the same, return 0*/
 	}
	if (len == 0)
		return 1;    /*if len is 0, all the elements from t are the same like the last in s*/
}

int mystrlen(char* t)
{
	char* p;
	p = t;

	while (*p != '\0')    /*goes to the next element of the string while it's not '\0'*/
		++p;

	return p - t;    /*return the lenght (p keep the adress ot the last char, and t from the first) -> len = p-t*/
}