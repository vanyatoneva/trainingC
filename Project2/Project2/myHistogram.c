#include<stdio.h>


#define MAXW 100

/*horisontal histogram , shows to 100 words(MAXW)*/

main() {

	int c;
	int numOfWords = 0;
	int lentghOfWord = 0;
	int lengths[MAXW];


	for (int i = 0; i <= MAXW; ++i) {
		lengths[i] = 0;
	}


	while ((c = getchar()) != EOF && numOfWords < MAXW) {
		if (c == ' ' || c == '\n' || c == '\t') {
			lengths[numOfWords] = lentghOfWord;
			++numOfWords;
			lentghOfWord = 0;
		}
		else {
			++lentghOfWord;
		}

	}

	for (int i = 0; i <= numOfWords; ++i) {
		for (int j = 0; j < lengths[i]; ++j) {
			putchar('#');
		}
		putchar('\n');
	}

}