#include<stdio.h>

#define MAX 1000

int binsearch(void);



main() {
	
	int v[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	printf("%d", binsearch(2, v, 10));

}




int binsearch(int x, int v[], int n) {
	int low, high, mid;
	low = 0;
	high = n - 1;
	mid = 0;
	while (low < high && x != v[mid]) {
		mid = (low + high) / 2;
		if (x < v[mid]) {
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}
	if (x == v[mid]) {
		return mid;
	}
	else {
		return -1;
	}

}