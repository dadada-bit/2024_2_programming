#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
 {
 	char c;
 	int i;
 	
 	printf("enter a character :");
 	scanf("%c", &c);
 	
 	i = c + 1 ;
	printf("the next character of %c(%d) is %c(%d)\n",c,c,i, i);
 	
	return 0;
}