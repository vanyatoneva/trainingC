#include<stdio.h>
#include<string.h>

static char daytab[2][13] = {
{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }
};

int day_of_year(int year, int month, int day);
void month_day(int year, int yearday, int* pmonth, int* pday);



main() {
	int* m;
	int* d;
	printf("%d", day_of_year(1988, 2, 30));
	month_day(1988, 368, &m, &d);
	printf("\n %d, %d", d, m);
}

int day_of_year(int year, int month, int day) { /*set day of year from month and day*/
	int i, leap;
	if (month > 12) {
		printf("The year has only 12 months! Yo've entered ");
		return month;
	}
	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
	if (day > daytab[leap][month]) {
		printf("The days you entred are more than has in this month! You've entered ");
		return day;
	}
	if (month < 1 || day < 1) {
		printf("Invalid input!");
	}
	else {
		for (i = 1; i < month; i++) {
			day += daytab[leap][i];
		}
		return day;
	}
	
}

void month_day(int year, int yearday, int* pmonth, int* pday) {
	int leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
	if (yearday > 365 + leap) {
		printf("This year has only %d days!", (365 + leap));
		return;
	}
	if (yearday <= 0) {
		printf("Invalid input!");
	}
	int i;
	for (i = 1; yearday > daytab[leap][i]; i++) {
		yearday -= daytab[leap][i];
	}
	*pmonth = i;
	*pday = yearday;
}