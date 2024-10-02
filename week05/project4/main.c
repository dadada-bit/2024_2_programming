#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	int year;
	int leap_year = 0;
	
	printf("Input the year:");
	scanf("%d",&year);
	
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
		leap_year = 1;
	}
	
	printf("Is the year %d the leap year? %d\n", year, leap_year);
	
	return 0;
}