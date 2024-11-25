#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int i;
	int grade[5];
	
	for(i=0;i<5;i++)
	{
		printf("Input value - grade[%i] = ",i);
		scanf("%d", &grade[i]);
	}
	
	int *p; //pointer variable
	int sum = 0;
	
	for(i=0;i<5;i++)
	{
		p = &grade[i];
		printf("grade[%i] = %d\n",i,*p);
		sum += *p;
	}
	
	printf("average: %d", sum/5);
	
	return 0;
}