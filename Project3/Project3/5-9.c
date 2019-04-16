#include<stdio.h>
#include<string.h>

static char daytab[2][13] = {
{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }
};

int day_of_year(int year, int month, int day);
void month_day(int year, int yearday, int* pmonth, int* pday);



main() {
	int m;
	int d;
	printf("%d", day_of_year(1988, 2, 28));
	month_day(1987, 60, &m, &d);
	printf("\n%d, %d", d, m);
}

int day_of_year(int year, int month, int day) { /*set day of year from month and day*/
	int  leap;
	char* p;
	if (month > 12) {
		printf("The year has only 12 months! Yo've entered ");
		return month;
	}
	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
	if (day > daytab[leap][month]) {
		printf("The days you entred are more than has in this month! You've entered ");
		return day;
	}
	else {
		p = daytab[leap];
		p = p + month;
		while (month > 0) {
			day += *--p;
			month--;
		}
		return day;
	}

}

void month_day(int year, int yearday, int* month, int* day) {
	*day = yearday;
	*month = 0;
	int  leap;
	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
	char* p = daytab[leap];
	while (*day > * p) {
		*day -= *p++;
		(*month)++;
	}
	
}