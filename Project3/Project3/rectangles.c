#include<stdio.h>


typedef struct {
	int leftX;
	int bottomY;
	int width;
	int height;
}Rectangle;


typedef struct {
	int x;
	int y;
}point;


void match(void);
int doOverlap(void);

main() {
	int arr[] = { 5, 3, 2, 1 };
	Rectangle rec1, rec2;
	rec1.leftX = -1;
	rec1.bottomY = -3;
	rec1.width = -4;
	rec1.height = 4;

	rec2.leftX = 2;
	rec2.bottomY = -1;
	rec2.width = 5;
	rec2.height = 5;

	match(rec1, rec2);
}


void match(Rectangle r1, Rectangle r2) {

	if (doOverlap(r1, r2) == 1) {
		if (r1.leftX == r2.leftX && r1.bottomY == r2.bottomY && r1.height == r2.height && r1.width == r2.width) {
			printf("The rectangles are the same!\n");
			return;
		}
		point dl, dr, ul, ur;
		dl.x = r1.leftX > r2.leftX ? r1.leftX : r2.leftX;
		dl.y = r1.bottomY > r2.bottomY ? r1.bottomY : r2.bottomY;
		dr.x = (r1.leftX + r1.width) < (r2.leftX + r2.width) ? (r1.leftX + r1.width) : (r2.leftX + r2.width);
		dr.y = dl.y;
		ul.x = dl.x;
		ul.y = (r1.bottomY + r1.height) < (r2.bottomY + r2.height) ? (r1.bottomY + r1.height) : (r2.bottomY + r2.height);
		ur.x = dr.x;
		ur.y = ul.y;
		int area = (ur.x - ul.x) * (ur.y - dr.y);
		if (area == 0) {
			printf("They don't overlap, but touch sides");
			return;
		}
		printf("Down left x = %d, y = %d\n", dl.x, dl.y);
		printf("Down right x = %d, y = %d\n", dr.x, dr.y);
		printf("Up lef x = %d, y = %d\n", ul.x, ul.y);
		printf("Up right x = %d, y = %d\n", ur.x, ur.y);
		printf("The area is : %d\n", (ur.x - ul.x) * (ur.y - dr.y));
	}
	else if (doOverlap(r1, r2) == -1) {
		printf("Width or height of rectangle can not be negative num!");
	}
	else {
		printf("They don't overlap");
	}

}


int doOverlap(Rectangle rec1, Rectangle rec2) {
	if (rec1.height < 0 || rec1.width < 0 || rec2.height < 0 || rec2.width < 0) {
		return -1;
	}
	if ((rec1.leftX < rec2.leftX && (rec1.leftX + rec1.width) < rec2.leftX) || (rec1.leftX > (rec2.leftX + rec2.width) && (rec1.leftX + rec1.width) > (rec2.leftX + rec2.width))) {
		return 0;
	}
	if ((rec1.bottomY < rec2.bottomY && (rec1.bottomY + rec1.height) < rec2.bottomY) || ((rec1.bottomY + rec1.height) > (rec2.bottomY + rec2.height) && rec1.bottomY > (rec2.bottomY + rec2.height))) {
		return 0;
	}
	else {
		return 1;
	}

}



