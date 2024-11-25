#include <stdio.h>
#include <stdlib.h>

void main(void){
	int i = 4; //300 change
	
	int *pi = &i;
	char *pc = &i;
	
	printf("%i, %i, %i\n",i,*pi,*pc);
}