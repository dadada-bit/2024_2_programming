#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int i, average;
	int sum;
	int grade[SIZE];
	
	sum=0;
	for(i=0;i<SIZE;i++)
	{
		printf("Enter the scores for students: "); //학생 성적을 입력하세요
		scanf("%d",&grade[i]);
		sum+=grade[i];
	}
	average = sum/SIZE;
	printf("The average of scores: %d\n", average);
	
	return 0;
}