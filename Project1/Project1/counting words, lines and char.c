#include<stdio.h>



main() {
	int c, nl, nw, nc, state;
	
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n') {
			++nl;
			++nw;
		}
		if (c == ' ' || c == '\t') {
			++nw;
		}
		
	}
	printf("%d %d %d\n", nl, nw, nc);

}