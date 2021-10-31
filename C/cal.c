#include<stdio.h>
#define TRUE    1
#define FALSE   0

int no_days_in_month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
char *months[]=
{
	" ",
	"\n\n\nJanuary",
	"\n\n\nFebruary",
	"\n\n\nMarch",
	"\n\n\nApril",
	"\n\n\nMay",
	"\n\n\nJune",
	"\n\n\nJuly",
	"\n\n\nAugust",
	"\n\n\nSeptember",
	"\n\n\nOctober",
	"\n\n\nNovember",
	"\n\n\nDecember"
};


int inputyear(void)
{
	int yr;
	
	printf("Enter a year  : ");
	scanf("%d", &yr);
	return yr;
}

int determiningdaycode(int yr)
{
	int dcode;
	int d1, d2, d3;
	
	d1 = (year - 1.)/ 4.0;
	d2 = (year - 1.)/ 100.;
	d3 = (year - 1.)/ 400.;
	dcode = (year + d1 - d2 + d3) %7;
	return dcode;
}


int determineleapyear(int yr)
{
	if(yr% 4 == FALSE && yr%100 != FALSE || yr%400 == FALSE)
	{
		no_days_in_month[2] = 29;
		return TRUE;
	}
	else
	{
		no_days_in_month[2] = 28;
		return FALSE;
	}
}

void calendar(int yr, int dcode)
{
	int month, day;
	for ( month = 1; month <= 12; month++ )
	{
		printf("%s", months[month]);
		printf("\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n" );
		
		// Correct the position for the first date
		for ( day = 1; day <= 1 + daycode * 5; day++ )
		{
			printf(" ");
		}
		
		// Print all the dates for one month
		for ( day = 1; day <= days_in_month[month]; day++ )
		{
			printf("%2d", day );
			
			// Is day before Sat? Else start next line Sun.
			if ( ( day + daycode ) % 7 > 0 )
				printf("   " );
			else
				printf("\n " );
		}
			// Set position for next month
			dcode = ( dcode + no_days_in_month[month] ) % 7;
	}
}


int main(void)
{
	int yr, dcode, leapyear;
	
	yr = inputyear();
	dcode = determinedaycode(yr);
	determineleapyear(yr);
	calendar(yr, dcode);
	printf("\n");
}
