#include<stdio.h>


int isThereUnsetBit(int x);


main() {
	
	printf("%d\n", isThereUnsetBit(4294967295));

}

int isThereUnsetBit(int x) {
	if ((~x) != 0) {
		return 1;
	}
	else {
		return 0;
	}
}





