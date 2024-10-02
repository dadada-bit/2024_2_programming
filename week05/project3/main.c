#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int total_seconds;
	int minutes, seconds;
	
	printf("Input the second: ");
	scanf("%d", &total_seconds);
	
	minutes = total_seconds/60; //caculate minutes
	seconds = total_seconds%60; //caculate seconds

	printf("The time is %d:%d\n",minutes,seconds);
	
	return 0;
}