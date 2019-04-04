#include<stdio.h>


#define MAXW 100

/*horisontal histogram , shows to 100 words(MAXW)*/

main() {

	int c;
	int numOfWords = 0;
	int lentghOfWord = 0;
	int lengths[MAXW];
	int lonW = 0;

	for (int i = 0; i <= MAXW; ++i) {
		lengths[i] = 0;
	}

	/*making and array with the lenght of words - IT'S OKAY*/
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
	
	/*Checking the longest word*/
	for (int i = 0; i <= numOfWords; i++) {
		if (lonW < lengths[i]) {
			lonW = lengths[i];
		}
	}

	for (int i = lonW; i > 0; --i) {
		for (int j = 0; j <= numOfWords; j++) {
			if (lengths[j] >= i) {
				printf("[]");
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	}
	
	
}